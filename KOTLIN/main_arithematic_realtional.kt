fun main() {
    var score=5
    println("Hello, world!!!")          //val can't be reassigned 
    print(1+2)                          //var can be reassigned
    println("\tnew")
    println(score)
    var i= 13
    var j=2
    println(i+j)    //15
    println(i-j)    //11
    println(i/j)    //6
    println(i.toFloat()/j)    //6.5        In Kotlin if we want floating number as output on data type out of the two variables must be douyble/float
    println(i*j)    //26
    println(i%j)
    println(i>j)
    println(i<j)
    println(i>=j)
    println(i<=j)
    println(i==j)
    println(i!=j)
    var p=10
    println(p++)          //post increment \\10
    println(p)            //11
    println(++p)         //pre increment  //12
    println(p)           //12
    var o=10
    println(o--)        //post decrement so ans is 10
    println(o)          //value is changed to 9 already in the memory loacation by the above statement so ans is 9
}