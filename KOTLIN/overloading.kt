//function overloading
// fun main(){
//     println(add(1,2))
//     println(add(1.0,2.0))
// }
// fun add(a: Int,b: Int): Int{
//     return a+b
// }
// fun add(a: Double,b: Double):Double{
//     return a+b
// }

// fun main(){
//     println(add(a=1,b=2))   //named variable
//     println(add(b=3,a=1))
// }
// fun add(a: Int,b: Int): Int{
//     return a+b
// }
// fun add(a: Double,b: Double):Double{
//     return a+b
// }

fun main(){
    var fn = ::add
    println(fn(1.0,2.0))
}
//fun add(a: Double,b: Double)=a+b

// fun add(a: Double,b: Double):Double{
//     return a+b
// }
fun add(a: Double,b: Double): Double =a+b