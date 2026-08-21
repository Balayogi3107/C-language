#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee c[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Employee %d details:\n", i + 1);

        printf("ID: ");
        scanf("%d", &c[i].id);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Salary: ");
        scanf("%f", &c[i].salary);
    }

    printf("\n--- Employee Details ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", c[i].id);
        printf("Name   : %s\n", c[i].name);
        printf("Salary : %.2f\n", c[i].salary);
    }

    return 0;
}