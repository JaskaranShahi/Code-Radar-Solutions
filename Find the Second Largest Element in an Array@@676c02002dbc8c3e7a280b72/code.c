#include<stdio.h>

void main()
{
    int n, max;
    scanf("%d", &n);
    int a[n];
    if (n == 1)
    {
        printf("-1");
        break;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                max = a[j];
                a[j] = a[j + 1];
                a[j + 1] = max;
            }
        }
    }
    if (a[0] == a[n - 1])
    {
        printf("-1");
    } else
    {
        printf("%d", a[n - 2]);
    }
}

