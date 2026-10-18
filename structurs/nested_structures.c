#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date dob;
};

int main() {
    struct Person p;

    printf("Enter person name: ");
    scanf("%49s", p.name);
    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &p.dob.day, &p.dob.month, &p.dob.year);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Date of Birth: %02d/%02d/%04d\n", p.dob.day, p.dob.month, p.dob.year);

    return 0;
}
