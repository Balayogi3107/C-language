#include<stdio.h>
int main()
{
    int arr[5]={1,-1,1,-1,1},i,c=0;
    int n=sizeof(arr)/sizeof(int);
    for (i=0;i<n;i++)
    {
        if(arr[i]== -1)
        {
            c++;
        }
    }
    printf("%d",c);
}