# myfun<-function(a)
# {
#     for(i in 1:a){
#         b<-i^2
#         print(b)
#     }
# }
# myfun(4)


factorial <- function(num) {
  fact <- 1
  if (num < 0) {
    return("Negative number factorial not possible")
  }
  if (num == 0) {
    return(1)
  }
  for (i in 1:num) {
    fact <- fact * i
  }
  return(fact)
}
num <- as.integer(readline(prompt = "Enter a number: "))
result <- factorial(num)
cat("The factorial of", num, "is", result, "\n")