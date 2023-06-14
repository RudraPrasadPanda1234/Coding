// write a c program to input elemnts into square matrix and display the transpose of it using UDF
#include <stdio.h>
int display(int b[10][10], int r, int c)
{
    int i, j;
    printf("\n\nThe tranpose of a matrix is:");
    for (i = 0; i < c; i++)
    {
        printf("\n");
        for (j = 0; j < r; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    printf("\n\n");
}
int transpose(int a[10][10], int r, int c)
{
    int b[10][10], i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    display(b, r, c);
}
int main()
{
    int a[10][10], i, j, r, c;
    printf("\n\nTranspose of a matrix:\n");
    printf("--------------------------\n");
    printf("\ninput the rows and columns of the matrix:");
    scanf("%d %d", &r, &c);
    printf("Input elments in the first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Elment-[%d],[%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is :\n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
    }
    transpose(a, r, c);
    return 0;
}