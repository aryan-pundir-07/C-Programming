#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    printf("Enter principal, rate, and time in years: ");
    scanf("%f %f %f", &principal, &rate, &time);

    interest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %.2f\n", interest);
    printf("Total Amount = %.2f\n", principal + interest);

    return 0;
}
