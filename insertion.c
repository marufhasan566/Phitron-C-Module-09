#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);
    for (int i = n; i >= position; i--)
    {
        array[i] = array[i - 1];
    }
    array[position - 1] = value;
    // Print
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}