#include <stdio.h>
#include<math.h>
int main()
{
    int i, j, n, k;
    printf("Enter a number to check whether it is prime number or not ");
    scanf("%d", &n);
    for (i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            k++;
            break;
        }
    }
    if (k == 0)
        printf("Prime");
    else
        printf("Not a prime");
    return 0;
}