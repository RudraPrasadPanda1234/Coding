fun main()
{
    var arr = arrayOf ("One","Two","Three") //Data type taken implicitly 
    var arr1 = arrayOf (1,2,3)   //Data type taken implicitly 
    var arr2 = arrayOf <Int> (3,4,5)  //Data type declared explicitly 
    for (i in arr){
        println(i)
    }
    for(j in arr1){
        println(j)
    }
    for (k in arr2){
        println(k)
    }
    for((i, e)in arr.withIndex()){
        println("$i -->$e")     //String Templenting
    }
    println(arr[0])
    println(arr.get(1))
    arr.set(0,"Hello")
    println(arr[0])
}