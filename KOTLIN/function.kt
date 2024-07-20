fun main()
{
    // val result = add(4,6)
    // println(result)
    // evenorodd(13)
    printmessage(3) //Arugments
    printmessage()
}
// fun add(num1: Int,num2: Int):Int
// {
//     val sum=num1+num2
//     return sum
// }

// fun add(num1: Int,num2: Int):Int =num1 + num2    //Inline Function

//fun add(num1: Int,num2: Int) =num1 + num2      //As the output will be int so --> explicit declaration

// fun evenorodd(num1:Int){
//     val result=if(num1%2==0)"Even" else "Odd"
//     println(result)
// }

// fun printmessage(count: Int){
//     for(i in 1..count){
//         println("Hello $i")
//     }
// }

fun printmessage(count: Int = 2){      //Parameters         
    for(i in 1..count){           //This will taken 2 as by default value if no value is passed from the user during the function call
        println("Hello $i")       //Count is of val type and can not be re assinged       
    }
}