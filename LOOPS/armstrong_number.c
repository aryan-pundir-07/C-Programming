#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    int temp = n;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }

    if (result == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}
