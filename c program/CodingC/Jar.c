#include <stdio.h>

int main()
{
    int jars[] = {10, 20, 30};
    int n = 3;
    int A[3];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        A[i] = jars[i] / (i + 2) + (2 * i - 1);
        sum += A[i];
    }

    printf("Jar values: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", jars[i]);
    }

    printf("\nA values: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nOutput: %d", sum);

    return 0;
}