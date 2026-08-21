#include<stdio.h>
int main()
{
    int i,j,row;
    printf("enter the rows: ");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("\t %d ",i);
        }
        printf("\n");
    }
}