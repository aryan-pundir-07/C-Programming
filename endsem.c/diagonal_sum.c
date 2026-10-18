#include <stdio.h>

int main() {
    int n;
    int a[10][10];
    int mainDiag = 0, antiDiag = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        mainDiag += a[i][i];
        antiDiag += a[i][n - 1 - i];
    }

    printf("Sum of main diagonal elements = %d\n", mainDiag);
    printf("Sum of anti-diagonal elements = %d\n", antiDiag);

    return 0;
}
