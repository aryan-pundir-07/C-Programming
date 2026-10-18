#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Valid Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Valid Isosceles Triangle\n");
        } else {
            printf("Valid Scalene Triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
