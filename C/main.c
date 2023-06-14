/***************************************************************************************************
While loop
WAP to find sum of all the digits of a number
Sample input = 876
Sample output = 21
Explanation : 8+7+6=21
***************************************************************************************************/

#include <stdio.h>
int main()
{
    int n,r,s=0;                 //n for storing entered value,r for storing remainder,s for storing sum
    printf("Enter a number: ");       //asking user to enter a number
    scanf("%d",&n);                       //entered value is stored in n
    while(n>0)                      //staring of while loop
{
    r=n%10;                   //remainder is calculated & stored
    s=s+r;                        //sum is calculated & stored
    n=n/10;                     //quotient is calculated & stored
}                           //end of while loop
    printf("%d ",s);         //sum is printed 
    return 0;              //used for termination of int main() 
}
