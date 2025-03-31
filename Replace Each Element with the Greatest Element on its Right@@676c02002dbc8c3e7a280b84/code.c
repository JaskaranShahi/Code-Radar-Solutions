#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int max = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
            }
        }
        a[i] = max;
    }
    a[n - 1] = -1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

