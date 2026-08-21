#include<stdio.h>
int main()
{
    int i,j,jar[3]={10,20,30};
    int A=0,B=0,C=0;
    for(i=0;i<=3;i++){
        for(j=0;j<jar[i];j++)
    { 
        if(j%3==0)
        {
            A++;
        }
        else if(j%3==2)
        {
            B++;
        }
        else
        {
            C++;
        }
    } 
    }
    printf("A got choco:%d\n",A);
    printf("B got choco:%d\n",B);
    printf("c got choco:%d\n",C);
    
}