#include <stdio.h>

int main()
{
    int i,j,k,row;
    printf("Enter the rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i==1 || i==3 || i==5 || j==1 && 
            i<3|| j==5 && i>3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
    
    
         printf("     ");
        
        for(j=1;j<=row;j++)
        {
            if(i==1 || i==3 || j==1 || j==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf(" ");
        printf("\n");
    }

}