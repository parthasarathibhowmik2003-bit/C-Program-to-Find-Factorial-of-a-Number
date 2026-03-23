#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("=== Find Factorial of a Number ===\n\n");

    printf("Enter a Non-Negative Integer: ");
    scanf("%d", &n);

    // Validation
    if (n < 0) {
        printf("\nError: Factorial of Negative Number doesn't exist!\n");
        return 1;
    }

    // Calculate Factorial using for loop
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("\n=== Result ===\n");
    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
