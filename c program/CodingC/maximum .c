#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},max=a[0];
    int n=sizeof(a) / sizeof(int);
    for (int i=0;i<n;i++)
    {
        if (a[i] > max)
        {
            max=a[i];
        }
    }
    printf("maximum num is %d",max);
}