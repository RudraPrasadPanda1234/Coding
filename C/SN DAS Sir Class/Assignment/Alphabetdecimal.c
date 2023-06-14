#include <stdio.h>
// #define N 10
int main()
{
    char c;
    // printf("\n");
    for (c = 65; c <= 122; c++)
    {
        if (c > 90 && c < 97)
            continue;
        printf("\n %2d-->'%c' ", c, c);
    }
    return 0;
}
