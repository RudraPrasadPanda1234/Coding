#include <stdio.h>
int main()
{
    printf("Enter 1st three digit of your phone number");
    // long y = in.nextLong();
    long int y;
    scanf("%ld", &y);
    printf("Enter next three digit of your phonr number");
    // long x = in.nextLong();
    long int x;
    scanf("%ld", &x);
    printf("Enter last four digit of your phonr number");
    // long  n = in.nextLong();
    long int n;
    scanf("%ld", &n);
    long int p = y * 40;
    long int z = p * 25;
    long int m = z + x;
    long int a = m * 50;
    long int c = a + 1;
    long int d = c * 400;
    long int w = d + n;
    long int g = w + n;
    printf("%ld", g);
    return 0;
}