#include <stdio.h>
int main()
{
    double fara, cel;
    printf("Enter temp in farahenit:");
    scanf("%lf", &fara);
    cel = (fara - 32) * 5 / 9;
    printf("Celsius is %lf", cel);
    printf("\nEnter temp in celsius");
    scanf("%lf", &cel);
    fara = (cel * 9 / 5) + 32;
    printf("\nFaranehit is %lf", fara);
    return 0;
}