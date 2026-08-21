#include <stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter the rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if( j==1||
            (i==1 && j<=4)||(i==3 && j<=4)||(i==5 && j<=4)||(j==5 &&(i==2 || i==4)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("   ");

        for(j=1;j<=row;j++)
        {
            if( j==3 && i == 1 ||  j==2 && i == 2 ||  j==4 && i == 2 ||  j==1 && i == 3 || j==5 && i ==3 ||  j==2 && i==4 ||  j==3 && i == 4 ||  j==4 && i == 4 ||  j==1 && i == 4 ||  j==5 && i == 4 ||  j==1 && i == 5 ||  j==5 && i == 5 )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("    ");

        for(j=1;j<=row;j++)
        {
            if(j==1|| i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("       ");

        for(j=1;j<=row;j++)
        {
            if( j==3 && i == 1 ||  j==2 && i == 2 ||  j==4 && i == 2 ||  j==1 && i == 3 || j==5 && i ==3 ||  j==2 && i==4 ||  j==3 && i == 4 ||  j==4 && i == 4 ||  j==1 && i == 4 ||  j==5 && i == 4 ||
            j==1&& i==5||j==5 && i==5)
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
            if( j==1 && i==1||j==5 && i==1||j==2 && i==2||
            j==4 && i==2 ||j==3 && i==3||j==3 && i==4 ||
            j==3 &&i==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("    ");


        for(j=1;j<=row;j++)
        {
            if( j==2&&i==1||j==3&&i==1||j==4&&i==1||
            j==1&&i==2|| j==1&&i==3||j==1&&i==4||j==2&&i==5||
            j==3&&i==5|| j==4&&i==5|| j==5&&i==2||j==5&&i==3||
            j==5&&i==4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("   ");

        for(j = 1; j <= row; j++)
        {
            if(i == 1 || i == 5 || j == 1 ||
               (i == 3 && j >= 3) ||
               (j == 5 && i >= 3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("  ");




        for(j = 1; j <= row; j++)
        {
            if(i == 1 || i == 5 || j == 3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("  ");
        printf("\n");


    }
}
