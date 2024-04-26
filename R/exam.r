#fibonacci series
fiboonaci_sequence<-function(n){
    a<-0
    b<-1
    cat("Fibonacci Series:")
    for (i in 1:n){
        cat(a," ")
        next_sum<-a+b
        a<-b
        b<-next_sum
    }
}
number_of_terms<-10
fiboonaci_sequence(number_of_terms)