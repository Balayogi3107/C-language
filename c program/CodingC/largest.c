#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},max=a[0], nar=a[0];
    int n=sizeof(a) / sizeof(int);
    for (int i=0;i<n;i++)
    {
        if(a[i] > max)
        {
            max =a[i];
        }
        for(int i=0;i<n-1;i++){
        if(a[i]>nar){
            nar=a[i];
        }
        }
    }
    printf("largest:%d\n",max);
    printf("second large:%d", nar);
}