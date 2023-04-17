#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
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
    for (int i = 0; i < m; i++)
    {
        arr3[j] = arr2[i];
        j++;
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}