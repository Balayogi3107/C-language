#include<stdio.h>
int main()
{
    int i,sum=0,num;
    for (i=1;i<=10;i++)
    {
        printf("\nEnter a number:");
        scanf("%d",&num);
        if(num<0)
        {
            continue ;
        }
        sum +=num;
        printf("sum :%d",sum);
    }
}