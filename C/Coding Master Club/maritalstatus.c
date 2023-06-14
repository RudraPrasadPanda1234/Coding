#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b;
    printf("Enter the name of the girl:");
    gets(a);
    //scanf("%[^\n]s",a);
    printf("Enter m if she is maarried and n is she is not married:");
    scanf("%c",&b);
    if(b=='m')
    printf("The name of the girl is: Mrs %s",a);
    else
    printf("The name of the girl is:Miss %s",a);
    return 0;
}