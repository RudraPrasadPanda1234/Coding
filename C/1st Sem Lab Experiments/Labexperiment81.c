#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    printf("enter the numbers of rows in 1st order matrix =");
    scanf("%d",&r);
    printf("enter the numbers of columns in 1st order matrix =");
    scanf("%d",&c);
    printf("enter the elements of the 1st matrix=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the numbers of rows in 2nd order matrix =");
    scanf("%d",&r);
    printf("enter the numbers of columns in 2nd order matrix =");
    scanf("%d",&c);
    printf("enter the elements of the 2nd matrix=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix multiplication is as follows=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    //printing result
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",mul[i][j]);
        }
    printf("\n");
        }
return 0;
    }