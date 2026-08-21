#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, sum = 0, i = 0;

    scanf("%d", &n);

    while(i < n)
    {
        sum = sum + a;
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    printf("%d", sum);

    return 0;
}