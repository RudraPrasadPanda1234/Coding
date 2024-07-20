// fun main() {
//     val animal="Dog"
//     if(animal=="Horse"){
//         println("Animal is horse")
//     }
//     else if(animal=="cat"){
//         println("Animal is cat")
//     }
//     else if(animal=="Dog"){
//         println("Animal is dog")
//     }
//     else{
//         println("Animal is not found")
//     }
// } 

// fun main(){
//     val animal="Dog"
//     when(animal){
//         "Horse"->println("Animal is horse")
//         "Cat"->println("Animal is cat")
//         "Dog" ->println("Animal is dog")
//         else ->println("Animal is not found")
//     }
// }

// fun main(){
//     val animal="Dog"
//     val result= when(animal){
//         "Horse"->"Animal is horse"
//         "Cat"->"Animal is cat"
//         "Dog" ->"Animal is dog"
//         else ->"Animal is not found"
//     }
//     println(result)
// }

fun main(){
    val number =15
    val result=when(number){
        11->"Eleven"
        12->"Twelve"
        in 13..19->"Lies in the range of 13 to 19"
        15->"Fiveteen"
        else->"Not found"
    }
    println(result)
}