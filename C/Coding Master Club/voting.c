#include <stdio.h>
int main()
{
    int age;
    printf("Enter age to check wheter the person is eligible for voting or not");
    scanf("%d", &age);
    if (age > 18)
        printf("The person is eligible for voting");
    else
        printf("The person is not eligible for voting");
    return 0;
}