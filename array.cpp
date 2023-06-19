#include <stdio.h>
int main()
{
    int arr[] = {5, 2, 36, 18, 25, 30};
    
    int i, small, large;
    int N = sizeof(arr)/sizeof(arr[0]);
    small = arr[0];
    large = arr[0];
    for (i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d\n", small);
    return 0;
}

