#include<stdio.h>
int main()
{
    double miles,distance,lit,gallon,fuel,p,mileage;
    printf("Enter the quantity of the fuel in litre:");
    scanf("%lf",&fuel);
    printf("Distance in km coverd till the tank goes nill:");
    scanf("%lf",&distance);
    p=(fuel/distance)*100;
    miles=distance*0.6214;
    gallon=fuel*0.2642;
    mileage=miles/gallon;
    printf("The fuel consuption in Indian approch is :%.2lf",p);
    printf("\nThe fuel consuption in US approch is :%.2lf",mileage);
    return 0;
}