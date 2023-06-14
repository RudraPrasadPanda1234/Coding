#include<stdio.h>
int main()
{
    int r,c,i,j,mat[10][10],sum=0;
    printf("Enter the size of square matrix:");
    scanf("%d",&r);
    printf("Enter %d elements in the matrix:",r*r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&mat[i][j]);
            
        }
    }
    printf("The elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        // for(j=0;j<c;j++)
        // {
        //     if(i==j)
        //         sum+=mat[i][j];
        // }
        sum+=mat[i][i];
    }
    printf("The sum of all element is:%d",sum);
}

// #include<stdio.h>
// int main()
// {
//     int r,c,i,j,mat[10][10],sum=0;
//     printf("Enter the number of rows and cols:");
//     scanf("%d%d",&r,&c);
//     printf("Enter %d elements in the matrix:",r*c);
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             scanf("%d",&mat[i][j]);
            
//         }
//     }
//     printf("The elements are:\n");
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             printf("%d  ",mat[i][j]);
//         }
//         printf("\n");
//     }
//     for ( i = 0; i < r; i++)
//     {
//         sum+=mat[i][i];
//     }
    
//     printf("The sum of all element is:%d",sum);
// }