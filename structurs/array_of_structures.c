#include <stdio.h>

struct Book {
    int id;
    char title[50];
    float price;
};

int main() {
    int n;
    struct Book books[50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter book %d ID: ", i + 1);
        scanf("%d", &books[i].id);
        printf("Enter book %d title: ", i + 1);
        scanf("%49s", books[i].title);
        printf("Enter book %d price: ", i + 1);
        scanf("%f", &books[i].price);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("ID: %d\n", books[maxIndex].id);
    printf("Title: %s\n", books[maxIndex].title);
    printf("Price: %.2f\n", books[maxIndex].price);

    return 0;
}
