#include<stdio.h>
int main()
{
    int p,c;
    float b=5000,a;

    printf("Enter PIN: ");
    scanf("%d",&p);

    if(p==7171)
    {
        do{
            printf("\n1.Balance  2.Deposit  3.Withdraw  4.Exit\n");
            scanf("%d",&c);

            switch(c)
            {
                case 1: printf("Balance=%.2f",b); break;
                case 2: printf("Amount: "); scanf("%f",&a); b+=a; break;
                case 3: printf("Amount: "); scanf("%f",&a);
                        if(a<=b) b-=a;
                        else printf("Insufficient Balance");
                        break;
                case 4: printf("Thank you!");
            }
        }while(c!=4);
    }
    else
        printf("Wrong PIN");

    return 0;
}