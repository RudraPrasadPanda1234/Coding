fun main(args: Array<String>) {
    val n =2
    for(i in 1..10){
        println(n*i)
        //2 x 1 = 2   2 x 2 = 4
        println(n.toString()+"x"+i+"="+(n*i))   //Kotlin is stictly type so .toString()
        println("$n x $i=${n*i}")   //String templenting
    }
}