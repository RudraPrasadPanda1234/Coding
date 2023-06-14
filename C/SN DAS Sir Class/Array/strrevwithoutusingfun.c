#include <stdio.h>
//#include <string.h>
int main()
{
    char str[100],t;
    int l,i;
    printf("Enter a string:");
    gets(str);
    for(l=0;str[l]!='\0';l++);
    printf("the length is:%d",l);
    for(i=0;i<l/2;i++)
    {
        t=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=t;
    }
    //strrev(str);
    printf("\n%s", str);
    return 0;
}