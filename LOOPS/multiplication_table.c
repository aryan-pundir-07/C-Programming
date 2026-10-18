#include <stdio.h>

int main() {
    int n, range;

    printf("Enter an integer to display its table: ");
    scanf("%d", &n);
    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
