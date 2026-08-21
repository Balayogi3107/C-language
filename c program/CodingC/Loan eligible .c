#include<stdio.h>
int main()
{
    int age;
    float salary;
    char gender;
    printf("Enter the gender (M/F):\n");
    scanf(" %c", &gender);
    printf("Enter the age:\n");
    scanf("%d", &age);
    printf("Enter the salary:\n");
    scanf("%f", &salary);
    if(gender=='M' || gender=='m')
    {
         if (salary >= 150000)
           {
               if (age >= 30)
                 {
                     printf("Loan is approved");
                 }
               else
                 {
                      printf("Loan is declined because of age");
                 }
            }
        else
            {
                if (age < 30)
                 {
                       printf("Loan is declined because of both salary and age");
                 }
                else
                 {
                       printf("Loan is declined because of salary");
                 }
            }   
        
    }
    else (gender=='F'|| gender =='f');
      {
                 if (salary >= 50000)
           {
               if (age >= 50)
                 {
                     printf("Loan is approved");
                 }
               else
                 {
                      printf("Loan is declined because of age");
                 }
            }
        else
            {
                if (age < 30)
                 {
                       printf("Loan is declined because of both salary and age");
                 }
                else
                 {
                       printf("Loan is declined because of salary");
                 }
            }
      }
         
}