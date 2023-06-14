#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    double perimeter, area, radius;
    printf("Enter the radius of the circle:");
    scanf("%lf", &radius);
    area = PI * pow(radius, 2);
    perimeter = 2 * PI * radius;
    printf("The perimeter of the cricle is:%.2lf", perimeter);
    printf("\nThe area of the circle is:%.2lf", area);
    return 0;
}