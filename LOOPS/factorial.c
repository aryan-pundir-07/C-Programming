#include <stdio.h>

int main() {
    int n;
    long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers does not exist\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %ld\n", n, fact);
    }

    return 0;
}
