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
            printf("[%d:%d] ",i,j);
        }
        printf("\n");
    }

}