//Write a C program to create methods for operations insertion and display on 1d array of elements using UDF
#include <stdio.h>
// int display(int a[],int n);
// int insert(int a[],int n);
int display(int a[], int n)
{
    int i;
    printf("The array after inserting the new element is:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]:%d \n", i, a[i]);
    }
}
int insert(int a[], int n)
{
    int pos=5, i, item=99;
    printf("Enter the postion where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the item into the postion: ");
    scanf("%d", &item);
    for (i = n-1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = item;
    n = n + 1;
    display(a, n);
}
int main()
{
    int a[40], pos, i, n, item;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("a[%d]: %d \n", i, a[i]);
    }
    insert(a, n);
    return 0;
}