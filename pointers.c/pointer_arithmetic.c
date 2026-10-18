#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        printf("Element %d: Address = %p, Value = %d\n", i, (void *)ptr, *ptr);
        ptr++;
    }

    return 0;
}
