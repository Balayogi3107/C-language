#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int i,j,row,col;
    
    printf("enter the rows ");
    scanf("%d",&row);
    printf("enter the coloum ");
    scanf("%d",&col);
    printf("enter the matrix A\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("enter the matrix B\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of two matrix \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
