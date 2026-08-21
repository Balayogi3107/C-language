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
        if (i==17)
        {
            break;
        }
        printf(" %d\n",i);
    }
    
}