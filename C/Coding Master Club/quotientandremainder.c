#include <stdio.h>
int main()
{
    int a, quo, rem;
    printf("Enter a number to find the quotient and the remainder:");
    scanf("%d", &a);
    /*printf("Enter a number to find the quotient and the remainder:");
    scanf("%f", &b);*/
    quo = a / 2;
    rem = a % 2;
    printf("The quotient is : %d", quo);
    printf("\nThe remainder is : %d", rem);
    return 0;
}