#include <stdio.h>
int main()
{
    char s[100];
    int words = 0, newline = 0, characters = 0, space = 0;
    printf("Enter the string and press 0 when completed");
    scanf("%[^0]", &s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            words++;
            space++;
        }
        else if (s[i] == '\n')
        {
            newline++;
            words++;
        }
        else if (s[i] != ' ' && s[i] != '\n')
        {
            characters++;
        }
    }

    // if (characters > 0)
    // {
    //     words++;
    //     newline++;
    // }
    printf("Total number of words : %d\n", words);
    printf("Total number of lines : %d\n", newline);
    printf("Total number of characters : %d\n", characters);
    printf("Total number of spaces : %d\n", space);
    return 0;
}