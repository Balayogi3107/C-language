#include<stdio.h>
int main() 
{
    int bud;
    printf("Enter your overall package budget (in INR): ");
    scanf("%d", &bud);
    if (bud < 100000) 
    {
        printf(" NOT ELIGIBLE FOR TOURIST VISITS.\n");
        printf(" Because Minimum required package  more than budget is Rs. 1,00,000.\n");
    } 
    else if (bud >= 100000 && bud < 200000) 
    {
        printf("Eligible for tourist visits \n");
        printf("1. Andhaman Island \n");
    }   
    else if (bud >= 200000 && bud < 300000) 
    {
        printf("Eligible for tourist visits \n");
        printf("1. Thailand\n");
        printf("2. Singapore \n");
    } 
    else if (bud >= 300000 && bud < 500000) 
    {
        printf("Eligible for tourist visits \n");
        printf("1. Andhaman Island \n");
        printf("2. Singapore\n");
        printf("3. Dubai / UAE \n");
    } 
    else if (bud >= 500000 && bud < 800000) 
    {
        printf("Eligible for tourist visits \n");
        printf("1. Andhaman Island \n");
        printf("2. Singapore\n");
        printf("3. Dubai / UAE\n");
        printf("4. France \n");
    } 
    else 
    {
        printf(" If Above 800000 then you can visit these places \n");        printf("Eligible Destinations (All Premium Packages Available):\n");
        printf("1. Thailand\n");
        printf("2. Singapore\n");
        printf("3. Dubai / UAE\n");
        printf("4. France\n");
        printf("5. Japan \n" );
    }
}