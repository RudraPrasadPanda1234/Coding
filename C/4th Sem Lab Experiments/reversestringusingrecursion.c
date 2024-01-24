#include<stdio.h>
//#include<string.h>
/*void revstr(char *str)

{
    int l,i;
    char t;
    for (l= 0;str[l]!='\0'; l++);
    printf("The length of the str=%d",l);
    for ( i = 0; i < l/2; i++)
    {
        t=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=t;
    }
    printf("\nThe revers string is =%s",str);
}*/
void revstr(char *str1)
{
    if(*str1)
    {
        revstr(str1+1);
        printf("%c",*str1);
    }
}
int main()
{
    char str[200/2],t;
    //int i,l;
    printf("Enter any string:");
    scanf("%[^\n]s",str);
   // strrev(str);
   revstr(str);
    return 0;

}