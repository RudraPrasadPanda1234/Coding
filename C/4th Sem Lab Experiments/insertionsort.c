#include <stdio.h>
#define size 20
int main()
{
    int arr[20], n, i, n1;
    printf("Enter the no. of elemnts");
    scanf("%d", &n);
    if (n < size)
    {
        printf("Enter %d elemnts in the array:", n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("The elments re as folows:");
        for (i = 0; i < n; i++)
            printf("arr[%d] :%d\n", i, arr[i]);
        printf("Enter the new item which you want to insert at begining");
        scanf("%d", &n1);
        if (n1 != size)
        {
            for (i = n; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[i] = n1;
            n++;
            for (i = 0; i < n; i++)
                printf("The new elemnts are %d\n", arr[i]);
        }
        else
            printf("The size has excedded");
    }
    else
    {
        printf("The size is exceeded");
    }
    return 0;
}