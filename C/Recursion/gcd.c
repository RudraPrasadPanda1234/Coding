#include <stdio.h>
// function prototype
int gcd(int, int);
// calling function
int main()
{
   int a, b, g;
   printf("Enter two number two find Greatest Common Divisior:");
   scanf("%d %d", &a, &b);
   g = gcd(a, b);
   printf("The GCD of %d and %d is %d", a, b, g);
   return 0;
}
// function defination
int gcd(int a, int b)
{
   if (a == 0)
      return b;
   else if (b == 0)
      return a;
   else
      return gcd(b, a % b);
}