#include <stdio.h>
int main()
{
    int i, j, r, c, mat[100][100],sum=0;
    printf("Enter number of rows and columns");
    scanf("%d %d", &r, &c);
    printf("enter %d elements in the matrix", r * c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
            sum+=mat[i][j];
        }
    }
    printf("The sum is %d",sum);
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d\t", mat[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}