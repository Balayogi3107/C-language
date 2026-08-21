#include<stdio.h>
int main()
{
    int hage,wage;
    float hsalary,wsalary;
    printf("enter the husband salary :");
    scanf("%f",&hsalary);
    printf("enter the wife salary :");
    scanf("%f",&wsalary);
    printf("enter the husband age :");
    scanf("%d",&hage);
    printf("enter the wife age :");
    scanf("%d",&wage);
    
    if (hsalary>=100000 && wsalary>=50000 && hage>=30 && wage>=25)
    {
        printf("loan is sanctioned");
    }
    else
    {
        if (hsalary<=100000)
        {
            printf("\nloan is declined because of hsalary");
        }
        if (wsalary<=50000)
        {
            printf("\nloan is declined because of wsalary");
        }
        if (hage < 30)
        {
            printf("\nloan is declined because of hage");
        }
        if (wage < 25)
        {
            printf("\nloan is declined because of wage");
        }
    }
}