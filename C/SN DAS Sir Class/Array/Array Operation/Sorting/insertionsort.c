#include <stdio.h>
void insertionsort(int a[], int n)
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j = j - 1;
        }
    }
}
int main()
{
    int arr[100],n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the %d no of array element randomly: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    insertionsort(arr, n);
    printf("\nArray after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}