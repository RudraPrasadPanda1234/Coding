#3.wap to print the first 15 fibbonnaci series elements
def fibonacci(n):
  if n <= 1:
    return n
  else:
    return fibonacci(n-1) + fibonacci(n-2)
for i in range(15):
  print(fibonacci(i), end=" ")