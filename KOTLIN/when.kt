fun main(args: Array<String>) {
    val animal="Dog"
    // if(animal=="Horse")
    // println("Animal is horse")
    // else if(animal=="cat")
    // println("Animal is cat")
    // else if(animal=="Dog")
    // println("Animal is dog")
    // else
    // println("Animal is not found")
    when(animal){
        "Horse"->println("Animal is horse")
        "Cat"->println("Animal is cat")
        "Dog" ->println("Animal is dog")
        else ->println("Animal is not found")
    }
} 