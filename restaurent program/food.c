#include <stdio.h>

int main()
{
    int ch, qnt;
    int bill = 0, total = 0;
    char again;

    do {
        printf("\n CHANDRU RESTAURANT (PURE NON - VEG)\n");
        printf("MENU CARD\n");
        printf("1. CHICKEN MANCHURIAN \n");
        printf("2. CHICKEN BIRIYANI\n");
        printf("3. CHICKEN CURRY DOSA (2 pieces)\n");
        printf("4. MUTTON BIRIYANI\n");
        printf("5. SPECIAL DRINK \n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("How much quantity you need this dish: ");
            scanf("%d", &qnt);
            bill = qnt * 170;
            break;
        case 2:
            printf("How much quantity you need this dish: ");
            scanf("%d", &qnt);
            bill = qnt * 250;
            break;
        case 3:
            printf("How much quantity you need this dish: ");
            scanf("%d", &qnt);
            bill = qnt * 210;
            break;
        case 4:
            printf("How much quantity you need this dish: ");
            scanf("%d", &qnt);
            bill = qnt * 300;
            break;
        case 5:
            printf("How much quantity you need this dish: ");
            scanf("%d", &qnt);
            bill = qnt * 120;
            break;
        default:
            printf("Enter the choice only between 1 to 5\n");
            bill = 0;
            break;
        }

        total = total + bill;

        printf("Do you want to order again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\nTotal bill amount = %d\n", total);

    return 0;
}
