package com.gietuofficialapp.gietuofficial.feature_splash_screen

import android.annotation.SuppressLint
import android.content.Intent
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.util.Log
import android.view.View
import android.view.WindowInsets
import android.view.WindowInsetsController
import android.view.animation.Animation
import android.view.animation.AnimationUtils
import android.widget.Button
import android.widget.Toast
import androidx.appcompat.app.AlertDialog
import com.gietuofficialapp.gietuofficial.Activity.Dashboard
import com.gietuofficialapp.gietuofficial.MainActivity
import com.gietuofficialapp.gietuofficial.R
import com.gietuofficialapp.gietuofficial.core.util.CredManager
import com.gietuofficialapp.gietuofficial.core.util.URLManager
import com.gietuofficialapp.gietuofficial.core.util.checkForInternetConnection
import com.gietuofficialapp.gietuofficial.databinding.ActivityNewSplashScreenBinding
import com.gietuofficialapp.gietuofficial.feature_faculty.FacultyDashboard
import com.gietuofficialapp.gietuofficial.utils.UtlitMethods
import com.google.android.material.dialog.MaterialAlertDialogBuilder
import com.google.firebase.database.DataSnapshot
import com.google.firebase.database.DatabaseError
import com.google.firebase.database.DatabaseReference
import com.google.firebase.database.FirebaseDatabase
import com.google.firebase.database.ValueEventListener
import dagger.hilt.android.AndroidEntryPoint
import kotlinx.coroutines.CompletableDeferred
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.Response
import java.io.IOException

@AndroidEntryPoint
class SplashScreenNew : AppCompatActivity() {
    private lateinit var binding: ActivityNewSplashScreenBinding
    private lateinit var dRef: DatabaseReference
    private lateinit var database: DatabaseReference
    private val httpClient = OkHttpClient()
    var url: String = ""
    private var retryDialog: AlertDialog? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        binding = ActivityNewSplashScreenBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)

        setupFullscreenMode()

        if (!checkForInternetConnection()) {
            showNoConnectionDialog()
            return
        }

        dRef = FirebaseDatabase.getInstance().getReference("BASEURL")
        database = FirebaseDatabase.getInstance().reference.child("base_url")
        checkWebsiteStatus()

        CoroutineScope(Dispatchers.IO).launch {
            animate()
            delay(2000)
            loadBaseUrl()
        }

        Handler(Looper.getMainLooper()).postDelayed({
            //binding.txtUniversityName.visibility = View.VISIBLE
        }, 2000)
    }

    private fun setupFullscreenMode() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            window.insetsController?.let {
                it.systemBarsBehavior = WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
                window.navigationBarColor = getColor(R.color.transparent)
                it.hide(WindowInsets.Type.systemBars())
            }
        } else {
            window.decorView.systemUiVisibility = (
                View.SYSTEM_UI_FLAG_LOW_PROFILE
                    or View.SYSTEM_UI_FLAG_FULLSCREEN
                    or View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                    or View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                    or View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                    or View.SYSTEM_UI_FLAG_HIDE_NAVIGATION)
        }
    }

    private fun showNoConnectionDialog() {
        val popup = MaterialAlertDialogBuilder(this)
        val view = layoutInflater?.inflate(R.layout.no_connection_dialog, null)
        val button = view?.findViewById<Button>(R.id.btnNoConnectionNew)
        popup.setBackground(ColorDrawable(Color.TRANSPARENT))
        popup.setView(view).create()
        val dialog = popup.create()
        dialog.setCancelable(false)
        dialog.show()

        button?.setOnClickListener {
            if (checkForInternetConnection()) {
                dialog.dismiss()
                recreate()
            }
        }
    }

    private fun checkWebsiteStatus() {
        database.get().addOnSuccessListener { snapshot ->
            val baseUrl = snapshot.getValue(String::class.java)
            if (baseUrl != null) {
                CoroutineScope(Dispatchers.IO).launch {
                    val isWebsiteUp = checkWebsite(baseUrl)
                    withContext(Dispatchers.Main) {
                        if (isWebsiteUp) {
                            loadBaseUrl()
                        } else {
                            showWebsiteDownAnimation()
                        }
                    }
                }
            } else {
                Log.e("MainActivity", "Base URL not found in Firebase.")
            }
        }.addOnFailureListener {
            Log.e("MainActivity", "Failed to fetch URL from Firebase.")
        }
    }

    private suspend fun checkWebsite(url: String): Boolean = withContext(Dispatchers.IO) {
        val deferred = CompletableDeferred<Boolean>()
        val request = Request.Builder().url(url).build()
        httpClient.newCall(request).enqueue(object : okhttp3.Callback {
            override fun onFailure(call: okhttp3.Call, e: IOException) {
                deferred.complete(false)
            }

            override fun onResponse(call: okhttp3.Call, response: Response) {
                deferred.complete(response.isSuccessful)
            }
        })
        return@withContext deferred.await()
    }

    private fun showWebsiteDownAnimation() {
        if (retryDialog == null || retryDialog?.isShowing == false) {
            val popup = MaterialAlertDialogBuilder(this)
            val view = layoutInflater.inflate(R.layout.erp_down_dialog, null)
            val retryButton = view.findViewById<Button>(R.id.btnRetryWebsite)
            popup.setBackground(ColorDrawable(Color.TRANSPARENT))
            popup.setView(view)
            retryDialog = popup.create()
            retryDialog?.setCancelable(false)
            retryDialog?.show()

            retryButton.setOnClickListener {
                checkWebsiteStatus()
            }
        }
    }

    private suspend fun animate() {
        val a: Animation = AnimationUtils.loadAnimation(applicationContext, R.anim.zoom_in_image)
        binding.cLayout1.startAnimation(a)
        binding.cLayout2.startAnimation(a)
        val a3 = AnimationUtils.loadAnimation(applicationContext, R.anim.fade_in_new)
        binding.txtUniversityName.startAnimation(a3)
        val a2: Animation = AnimationUtils.loadAnimation(applicationContext, R.anim.slide_in_left_new)
        binding.txtTeamName.startAnimation(a2)
    }

    private fun loadBaseUrl() {
        dRef.addValueEventListener(object : ValueEventListener {
            @SuppressLint("MissingInflatedId")
            override fun onDataChange(snapshot: DataSnapshot) {
                if (snapshot.exists()) {
                    val s = snapshot.value.toString()
                    val del = "{"
                    val del2 = '='
                    val del3 = "}"
                    val s1 = s.split(del)
                    val s2 = s1[2].split(del2)
                    val s3 = s2[1].split(del3)
                    val bsUrl: String = s3[0]

                    CoroutineScope(Dispatchers.IO).launch {
                        val isWebsiteUp = checkWebsite(bsUrl)
                        withContext(Dispatchers.Main) {
                            if (bsUrl == "500" || !isWebsiteUp) {
                                showWebsiteDownAnimation()
                            } else {
                                retryDialog?.dismiss()
                                URLManager(this@SplashScreenNew).saveBaseURL(bsUrl)
                                if (CredManager(this@SplashScreenNew).getLogState()) {
                                    if (CredManager(this@SplashScreenNew).getAdminLogin()) {
                                        UtlitMethods().simplejumpactivites(
                                            this@SplashScreenNew,
                                            FacultyDashboard::class.java
                                        )
                                        finish()
                                    } else {
                                        Handler(Looper.getMainLooper()).postDelayed({
                                            UtlitMethods().simplejumpactivites(
                                                this@SplashScreenNew,
                                                Dashboard::class.java
                                            )
                                            finish()
                                        }, 2500)
                                    }
                                } else {
                                    Handler(Looper.getMainLooper()).postDelayed({
                                        UtlitMethods().simplejumpactivites(
                                            this@SplashScreenNew,
                                            MainActivity::class.java
                                        )
                                        finish()
                                    }, 2500)
                                }
                            }
                        }
                    }
                }
            }

            override fun onCancelled(error: DatabaseError) {
                Toast.makeText(this@SplashScreenNew, "$error", Toast.LENGTH_SHORT).show()
            }
        })
    }
}
