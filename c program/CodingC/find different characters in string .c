#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch;
    char c[50];

    printf("Enter the string: ");
    fgets(c, sizeof(c), stdin);

    printf("\nEnter the character: ");
    ch = getchar();
    putchar(ch);

    int size, i, upper=0, lower=0, digit=0, space=0;

    size = strlen(c);

    for(i=0; i<size; i++)
    {
        if(isupper(c[i]))
            upper++;

        if(islower(c[i]))
            lower++;

        if(isdigit(c[i]))
            digit++;

        if(isspace(c[i]))
            space++;
    }

    printf("\nUpper case count: %d", upper);
    printf("\nLower case count: %d", lower);
    printf("\nDigit count: %d", digit);
    printf("\nSpace count: %d", space);

    return 0;
}