#include<stdio.h>

int factorial(int n)
 {
    
    if (n == 0 || n == 1) {
        return 1;
    }
   
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter the no.: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined.\n");
    } else {
        
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}