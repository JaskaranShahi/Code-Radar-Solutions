#include<stdio.h>

void main()
{
    int n, max;
    scanf("%d", &n);
    int a[n];
    
    if (n == 1)
    {
        printf("-1");
        return;
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
    int m = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            m = 0;
            break;
        }
    }
    if (m)
    {
        printf("-1");
    }
    else
    {
        if (a[0] == a[1])
        {
            printf("%d", a[2]);
        }
        else
        {
            printf("%d", a[1]);
        }
    }
}
