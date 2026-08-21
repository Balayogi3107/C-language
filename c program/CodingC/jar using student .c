#include <stdio.h>
int main()
{
    int jar =10,A=0,B=0,C=0;
    for (int i=1;i<=jar;i++)
    {
        if(i%3==1)
        {
            A++;
        }
        else if(i%3 == 2)
        {
            B++;
        }
        else
        {
            C++;
        }
    }
    printf("Student A got %d\n",A);
    printf("Student B got %d\n",B);
    printf("Student C got %d\n",C);
}   