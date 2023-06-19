// Write a program to input elements into a 4X4 matrix, check it for sparse or not. If sparse then store the non-zero elements into an alternate matrix and then display it using UDF.
#include <stdio.h>
int a, b, i, j, k, zero = 0, nzero = 0, arr[10][10];
int main()
{
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d", &a, &b);
    // int arr[a][b];
    printf("Enter %d elements of the matrix:", a * b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix entered is:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            // printf("a[%d][%d]=%d\n", i, j, arr[i][j]);
            printf("[%d]", arr[i][j]);
        }
        printf("\n");
    }
    printf("The total number of elements you have entered is:%d\n", a * b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (arr[i][j] == 0)
                zero++;
            else
                nzero++;
        }
    }
    int m = (a * b) / 2;
    if (zero > m)
    {
        printf("The matrix is a sparse matrix");
        printf("\nTriplet:\nRow\tColum\tValue\t");
        printf("\n-----------------------\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr[i][j] != 0)
                {
                    printf("%d\t%d\t%d\n", i, j, arr[i][j]);
                }
            }
        }
    }
    else
    {
        printf("The matrix is not a sparse matrix");
    }
    return 0;
}