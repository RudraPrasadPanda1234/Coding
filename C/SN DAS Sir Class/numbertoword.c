#include <stdio.h>
void printdigit(int rn)
{
    while (rn != 0)
    {
        switch (rn % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        rn = rn / 10;
    }
}
int rev(int n)
{
    int d, rn = 0, i;
    for (i = n; i > 0; i = i / 10)
    {
        d = i % 10;
        rn = (rn * 10) + d;
    }
    printdigit(rn);
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    rev(n);
    return 0;
}