#include<stdio.h>
int main()
{
    int day = 30;
    if (day == 1)
    {
        printf("no fine");
    }
    else if (day>=2 && day<=5)
    {
        printf("Fine 50 rs");
    }
    else if (day>=6 && day<=10)
    {
        printf("fine 100 rs");
    }
    else if (day>=11 && day<=30)
    {
        printf("");
    }
}