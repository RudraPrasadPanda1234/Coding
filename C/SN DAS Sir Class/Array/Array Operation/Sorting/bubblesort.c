#include <stdio.h>
int bublesort(int arr[], int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
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
    int arr[20], n, i, p;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the %d no of array element randomly \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bublesort(arr, n);
    printf("Array after buble sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}