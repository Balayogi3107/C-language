#include <stdio.h>

int main()
{
    int i,j,k,row,letter=65;
    printf("Enter the rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t %c",letter);
            letter+=3;
        }
        printf("\n");
    }

}