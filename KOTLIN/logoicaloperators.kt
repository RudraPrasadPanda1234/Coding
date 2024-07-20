// fun main(){
//     val above70=false
//     val knowsprogramming=true

//     //&& AND
//     var calledforinterview=above70&&knowsprogramming      //both values true -->true both values false--> false one true and one false -->false
//     println(calledforinterview)

//     // || OR
//     calledforinterview=above70||knowsprogramming
//     println(calledforinterview)
// }

fun main(){
    var i=10
    var j=11
    var result = i== 10 || j++ == 11    //i==10 is true so it does not check the either condition which lead the answer as true
    println(result)
    result =i==11||j++==11      //i==11 condition is false so checks the either condition j++ lead the increment of j to 12 but in memory as it is post increment and j==11 so the answer is true
    println(result)
}