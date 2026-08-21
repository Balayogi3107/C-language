#include<stdio.h>
int main()
{
    int age;
    char Marital,gender;
    printf("enter the material status M/U:");
    scanf("%s",& Marital);
    if (Marital=='U'|| Marital=='u')
    { 
        if (Marital=='U' || Marital=='U')
       {
            printf("Enter the age");
            scanf ("%d",& age);
            printf("enter the gender M/F:");
            scanf("%s",&age);
            if((gender=='M'||gender=='m')&&age>=30)
            {
                printf("eligible for insurance");
            }
            else
            {
                printf("not eligible for insurance");
            }
       }
    }
    else
    {
        if(Marital=='M' || Marital=='m')
        {
            printf("Eligible for the insurance");
        }
        else
        {
            printf("Enter the data correctly ");
        }
    }
}
    
    