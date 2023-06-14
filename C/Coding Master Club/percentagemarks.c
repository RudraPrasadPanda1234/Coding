#include <stdio.h>
int main()
{
    double marks, percentage;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter marks of the subject :");
        scanf("%lf", &marks);
    }
    double totalmark = marks + marks + marks;
    percentage = (totalmark / 300) * 100;
    printf("The percentage is %.2lf", percentage);
    if (percentage > 90 && percentage < 100)
        printf("A+ grade");
    else if (percentage > 80 && percentage <= 90)
        printf("\nA garde");
    else if (percentage > 70 && percentage <= 80)
        printf("\nB grade");
    else if (percentage > 60 && percentage <= 40)
        printf("\nC grade");
    else
        printf("\nThe grade is D");
    return 0;
}