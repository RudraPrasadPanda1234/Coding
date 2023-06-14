/*Assignment WAP to print all the prime factors of a number 
Take a number and check wheter it is a prime number or not and if its is prime number display it's factor*/
//Incomplete
#include<stdio.h>
#include<math.h>
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
int prime(int n)
{
    int k;
 for (int i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            k++;
            break;
        }
    }
    if (k == 0)
        return 1;//printf("Prime");
    else
        //printf("Not a prime");
    return 0;
}
int main()
{
    int n,f;
    printf("Enter a number");
    scanf("%d",&n);
    f=fact(n);
    int p=prime(f);
    if(p==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}