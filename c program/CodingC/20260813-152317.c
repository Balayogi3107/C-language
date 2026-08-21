#include<stdio.h>
int main ()
{
    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp, "CSE-A students are good manners");
    fclose(fp);
    return 0;
}