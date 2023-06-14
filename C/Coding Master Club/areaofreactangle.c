#include <stdio.h>
int main()
{
    double area, length, breadth;
    printf("Enter the length of the reactangle:");
    scanf("%lf", &length);
    printf("Enter the breadth of the reactangle:");
    scanf("%lf", &breadth);
    area = (length * breadth);
    printf("The area of the reactangle is:%lf", area);
    return 0;
}