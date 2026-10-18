#include <stdio.h>

int main() {
    int n1, n2, num1, num2, remainder, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    num1 = n1;
    num2 = n2;

    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    hcf = num1;
    lcm = (n1 * n2) / hcf;

    printf("HCF/GCD of %d and %d = %d\n", n1, n2, hcf);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);

    return 0;
}
