# #Switch case
# x<-switch{
#     30,
#     "first",
#     "second",
#     "third",
#     "fourth"}


# while(x<-3){
#     cat("x=",x)
#     x=x+1;
# }
# x<-readline("Enter a number x:")
# cat("x=",x)
# y<-readline("Enter a number y:")
# cat("y=",y)
# cat("The Sum of x and y=",as.integer(x)+as.integer(y))

n<-readline("Enter the number:")
n<-as.integer(n)
sum<-0
while(n>0){
    m<-n%%10
    sum<-sum+m
    n<-n/10
}
cat("The sum of the digits of the number is",sum)