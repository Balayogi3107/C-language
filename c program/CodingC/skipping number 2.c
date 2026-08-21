#include<stdio.h>
int main()
{
    int i;
    for (int i=1;i<=20;i++)
    {
        if (i==15)
        {
            continue;
        }
        if (i==16)
        {
            break;
        }
        if (i>=5 && i<=10)
        {
            continue;
        }
        printf(" %d\n",i);
    }
    
}