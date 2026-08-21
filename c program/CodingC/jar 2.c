#include <stdio.h>

int main()
{
    int jars[3] = {10, 20, 30};
    int A[3];
    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        if(i == 0)
            A[i] = 4;
        else if(i == 1)
            A[i] = 7;
        else if(i == 2)
            A[i] = 10;

        sum = sum + A[i];
    }

    printf("Output: %d", sum);

    return 0;
}