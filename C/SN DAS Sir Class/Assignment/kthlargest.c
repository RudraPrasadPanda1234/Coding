#include <stdio.h>
int kthlargestelement(int arr[], int n, int k)
{
    return arr[k - 1];
    // return arr[n - k + 1];
}
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
    int arr[20], n, i, p, k;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the %d no of array element randomly \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bublesort(arr, n);
    printf("Enter the kth position to find the largest number");
    scanf("%d", &k);
    // printf("Array after buble sort:\n");
    // for (i = 0; i < n; i++)
    // {
    //     //p=arr[i];
    //    printf("%d\t",arr[i]);
    // }
    printf("%d largest number is:%d", k, kthlargestelement(arr, n, k));
}

// #include <stdio.h>
// int kthsmallestelement(int arr[], int n, int k)
// {
//     return arr[k - 1];
//     return arr[n - k + 1];
// }
// int bublesort(int arr[], int n)
// {
//     int i, j, t;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 t = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = t;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[20], n, i, p, k;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     printf("Enter the %d no of array element randomly \n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     bublesort(arr, n);
//     printf("Enter the kth position to find the smallest number");
//     scanf("%d", &k);
//     // printf("Array after bubble sort:\n");
//     // for (i = 0; i < n; i++)
//     // {
//     //     //p=arr[i];
//     //    printf("%d\t",arr[i]);
//     // }
//     printf("%d smallest number is:%d", k, kthsmallestelement(arr, n, k));
// }