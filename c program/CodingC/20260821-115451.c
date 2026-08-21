#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3]={{2,4,},{7,8,10},{1,2,}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
        if(a[i][j] !=0)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}