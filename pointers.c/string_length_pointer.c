#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int len = stringLength(str);
    printf("Length of string \"%s\" is %d\n", str, len);

    return 0;
}
