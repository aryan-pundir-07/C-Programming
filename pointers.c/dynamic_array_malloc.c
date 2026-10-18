#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
        sum += *(arr + i);
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);

    free(arr);

    return 0;
}
