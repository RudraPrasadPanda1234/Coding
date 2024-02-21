#include <stdio.h>
int selctionsort(int arr[], int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n-1; j++)
        {
            if (arr[i] <arr[j])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
    int arr[20], n, i;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the %d no of array element randomly:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selctionsort(arr, n);
    printf("Array after selction sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}