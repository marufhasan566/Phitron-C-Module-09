#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);
    for (int i = n + 1; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}