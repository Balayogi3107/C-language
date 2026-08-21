#include<stdio.h>

int main() {
    int jar = 10,jar2=20,jar3=30,A=0, B=0, C=0;
    for(int i=1;i<=jar;i++){
        if(i%3==1){
            A++;
        }
        else if(i%3==2){
            B++;
        }
        else{
            C++;
        }
        }
       for(int i=1;i<=jar2;i++){
        if(i%3==1){
            A++;
        }
        else if(i%3==2){
            B++;
        }
        else{
            C++;
        }
       }
     for(int i=1;i<=jar3;i++){
        if(i%3==1){
            A++;
        }
        else if(i%3==2){
            B++;
        }
        else{
            C++;
        }
    }
    printf( "a got:%d\n", A);
    printf(" b got:%d\n", B);
    printf(" c got:%d\n",C);
}