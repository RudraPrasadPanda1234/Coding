// Dynamic 1D Array
/*

a[size] = *a
&a[i] = a+i
a[i] = *(a+i)

*/
#include <stdio.h>
//#include <stdlib.h>
#include<malloc.h>
//#include<reallo
int main()
{
    int *a, n;
    printf("Enter the number of elemnts");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));         
    printf("Enter the elemnts");
    for (int i = 0; i <= (n - 1); i++)
    {
        scanf("%d", a + i);
    }
    for (int i = 0; i <= (n - 1); i++)
    {
        printf("%d  ", *(a + i));
    }
    return 0;
}