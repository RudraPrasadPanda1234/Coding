#include <stdio.h>
int main()
{
    int n, s_item, totalnumber;
    int a[50];
    printf("Enter the number of elemnts:");
    scanf("%d", &totalnumber);
    printf("Enter the elemnts");
    for (int i = 0; i <= totalnumber; i++)
        scanf("%d", a[i]);
    printf("The elments re as folows:");
    for (int i = 0; i < totalnumber; i++)
    printf("arr[%d] :%d\n", i, arr[i]);
     printf("Enter the elemnt u want to serach");
        scanf("%d", &s_item);
        int p=linearsearch(a,totalnumber,s_item);
        

}
