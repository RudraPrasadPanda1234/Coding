#include <stdio.h>
#define size 20
int main()
{
    int arr[20], n, i, search, f = 0;
    printf("Enter the no of elemnts");
    scanf("%d", &n);
    if (n < size)
    {
        printf("Enter %d elemnts in the array", n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("The elments re as folows:");
        for (i = 0; i < n; i++)
            printf("arr[%d] :%d\n", i, arr[i]);
        printf("Enter the elemnts u want to serach");
        scanf("%d", &search);
        for (i = 0; i < n; i++)
        {
            if (arr[i] == search)
            {
                printf("the itsem is present at %d pos\n", i + 1);
                f = 1;
                break;
            }
        }
        if (f == 1)
            printf("Search is sucessful");
        else
            printf("Search not sucessful");
    }
    return 0;
}