#include <stdio.h>
//#include <string.h>
void revstr(char *str)
{
    int l, i;
    char t;
    for (l = 0; str[l] != '\0'; l++)
        ;
    printf("The length of the str=%d", l);
    for (i = 0; i < l / 2; i++)
    {
        t = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = t;
    }
    printf("\nThe revers string is =%s", str);
}
int main()
{
    char str[100], t;
    int i, l;
    printf("Enter any string:");
    scanf("%s", str);
    // strrev(str);
    revstr(str);
    return 0;
}