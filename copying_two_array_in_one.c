#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n + m];
    for (int i = 0; i < n + m; i++)
    {
        arr3[i] = arr[i];
    }
    int j = n;
    // printf("Size of array3 - %d \n", sizeof(arr3) / 4);
    // printf("1. n - %d \n", n);
    for (int i = 0; i < m; i++)
    {
        arr3[j] = arr2[i];
        j++;
        // arr3[n] = arr2[i];
        // n++;
    }
    // printf("2. n - %d \n", n);
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}