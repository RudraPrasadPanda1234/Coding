#include <stdio.h>
int main()
{
    int s= 0, i=0, n,j=1;
    printf("Enter a number ");
    scanf("%d", &n);
    do
    {
        printf("%d\t", i);
        s = s + i;
        i = i + j;
        j = j + 2;
    } while (i <= n);
        printf("\nThe sum of the number is %d", s);
    return 0;
}