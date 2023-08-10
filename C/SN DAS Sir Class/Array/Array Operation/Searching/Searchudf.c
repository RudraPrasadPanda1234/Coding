#include <stdio.h>
#define size 20
int item(int arr[], int n, int search)
{
    int f = 0, i, pos = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            pos = i;
            break;
        }
    }
    return (i, pos);
}
int main()
{
    int arr[20], n, i, search, s;
    printf("Enter the no of elemnts");
    scanf("%d", &n);
    if (n <= size)
    {
        printf("Enter %d elemnts in the array", n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("The elments re as folows:");
        for (i = 0; i < n; i++)
            printf("arr[%d] :%d\n", i, arr[i]);
        printf("Enter the elemnts u want to serach");
        scanf("%d", &search);
        s = item(arr, n, search);
        //     for (i = 0; i < n; i++)
        //     {
        //         if (arr[i] == search)
        //         {
        //             printf("the itsem is present at %d pos\n", i + 1);
        //             f = 1;
        //             break;
        //         }
        //     }
        if (s == -1)
            printf("Search is unsucessful");
        else
            printf("Search sucessful at %d", s+1);
    }
    else
    printf("Size exceeded");
    return 0;
}