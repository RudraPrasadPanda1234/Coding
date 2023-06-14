//Write a program to create an UDF and test a number is prime or not.
#include <stdio.h>
// defining the function
int primenumber(int number)
{
  int i;
  for (i = 2; i<= number / 2; i++) 
  {
       if(number % i != 0)       // condition for checking the given number is prime or not
      continue;
      else
      return 1;
  }
  return 0;
}
int main()
{
     int num = 7, res = 0;
     // calling the function
     res = primenumber(num);
    if (res == 0)
    printf("%d is a prime number", num);
    else
    printf("%d is not a prime number", num);
}