//Write a C program to create methods for operations deletion and display on 1d array of elements using UDF
#include<stdio.h>
int display(int a[],int n)
{
    int i;
    printf("\n The resulant array is:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]: %d \n",i,a[i]);
    }
}
int delete(int a[],int n)
{
    int pos,i;
    printf("Define the position of the array element where you want to delete:\n");
    scanf("%d",&pos);
    for(i=pos-1;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    display(a,n);
}
int main()
{
    int a[40],pos,i,n;

    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("a[%d]: %d \n",i,a[i]);
    }
    delete(a,n);
    return 0;
}