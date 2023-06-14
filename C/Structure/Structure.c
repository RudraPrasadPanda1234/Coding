#include <stdio.h>
int main()
{
    typedef struct book
    {
        char name[50];
        int noofpages;
        float price;
        int bookid;
    } book;
    book arr[3];
    printf("Enter book details \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter book name:");
        scanf("%s", arr[i].name);
        printf("Enter no. of pages:");
        scanf("%d", &arr[i].noofpages);
        printf("Enter book price:");
        scanf("%f", &arr[i].price);
        printf("Enter book id:");
        scanf("%d", &arr[i].bookid);
    }
    printf("Output:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Book name = %s \n", arr[i].name);
        printf("No. of pages = %d \n", arr[i].noofpages);
        printf("Book price = %f \n", arr[i].price);
        printf("Book id = %d \n", arr[i].bookid);
    }
    return 0;
}
