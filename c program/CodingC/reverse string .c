#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int n=sizeof(a) / sizeof(int);
    printf("size: %d \n",n);
    for (int i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}