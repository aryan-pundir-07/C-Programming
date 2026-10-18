#include <stdio.h>

int main() {
    int m, n, zeroCount = 0;
    int a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if (zeroCount > (m * n) / 2) {
        printf("The matrix is a Sparse Matrix\n");
    } else {
        printf("The matrix is not a Sparse Matrix\n");
    }

    return 0;
}
