#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},min=a[0];
    int n=sizeof(a) / sizeof(int);
    printf("size: %d \n",n);
    for (int i=0;i<n;i++)
    {
        if (a[i] < min)
        {
            min=a[i];
        }
    }
    printf("minimium num is %d",min);
}