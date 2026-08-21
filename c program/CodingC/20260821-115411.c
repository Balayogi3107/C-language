#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3]={{1,2,3},{2,-3,4},{7,8,10}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}