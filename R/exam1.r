#simple intreset
calulate_simple_intrest<-function(P,T,R){
    simple_intrest<-(P*T*R)/100
    return (simple_intrest)
}
Principal<-1000
Time<-5
Rate<-3
result<-calulate_simple_intrest(Principal,Time,Rate)
cat("Simple Intrest:",result)