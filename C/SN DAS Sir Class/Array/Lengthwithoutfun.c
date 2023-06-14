#include <stdio.h>
int main()
{
    char s[100]; // varibale declartion
    int i;
    // accepting input
    printf("enter the string");
    scanf("%[^\n]s", s);
    //gets(s);

    // initializing for loop
    for (i = 0; s[i] != '\0'; i++)
        ;
    printf("Length of the string: %d", i); // printing length
    return 0;
}