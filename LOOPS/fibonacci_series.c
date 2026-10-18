#include <stdio.h>

int main() {
    int n;
    long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%ld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%ld ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%ld ", nextTerm);
    }
    printf("\n");

    return 0;
}
