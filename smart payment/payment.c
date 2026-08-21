// smart payment wallet system
#include<stdio.h>
#include<string.h>

struct Payment
{
    int transactionID;
    char name[100];
    float amount;
    int type;


union
{
    char upiID[30];
    char cardNum[30];
    float cashAmount;
}payment;
};

int main()
{
    struct Payment p;

    printf("*****SMART PAYMENT WALLET*****\n\n");

    printf("\nEnter the transaction ID  :");
    scanf("%d",&p.transactionID);

    printf("\nEnter the customer name :");
    scanf("%s",&p.name);

    printf("\nEnter the amount :");
    scanf("%f",&p.amount);

    printf("\nEnter the payment type\n");
    printf("1.UPI\n");
    printf("2.Credit card\n");
    printf("3.case on deleviry:\n");

    printf("\nEnter the type :");
    scanf("%d",&p.type);

    switch(p.type)
    {
        case 1:
        printf("enter the UPI id :");
        scanf("%s",&p.payment.upiID);
        break;

        case 2:
        printf("Enter the cardNumber :");
        scanf("%s",&p.payment.cardNum);
        break;

        case 3:
        p.payment.cashAmount = p.amount;
        break;

        default :
        printf("invalid payment method :");
        return 0;
    }
    printf("\n\n=====Payment Receipt=====\n\n");
    printf("\n");

    printf("\nTransaction ID :%d\n",p.transactionID);

    printf("\ncustomer Name %s\n",p.name);


    printf("\nAmount :%.2f\n",p.amount);


    switch(p.type)
    {
    case 1:
        printf("\nPayment Type  :UPI\n");
        printf("UPI ID :%s\n",p.payment.upiID);
        break;

    case 2:
        printf("\nPayment Type  :CARD\n");
        printf("Card Number:%s\n",p.payment.cardNum);
        break;

    case 3:
        printf("\nPayment Type  :CASH\n");
        printf("CASH :%f\n",p.payment.cashAmount);
        break;
    }
    return 0;
}
