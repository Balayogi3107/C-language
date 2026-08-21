#include <stdio.h>

int findIndex(int arr[], int n, int target)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, target, index;

    printf("Enter target element: ");
    scanf("%d", &target);

    index = findIndex(arr, n, target);

    if(index != -1)
        printf("Target found at index %d", index);
    else
        printf("Target element not found");

    return 0;
}