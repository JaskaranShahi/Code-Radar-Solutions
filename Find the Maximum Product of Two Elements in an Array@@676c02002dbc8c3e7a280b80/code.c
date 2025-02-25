#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n, max, p;
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
            if (a[j] > a[j + 1])  // Sort in increasing order
            {
                max = a[j];
                a[j] = a[j + 1];
                a[j + 1] = max;
            }
        }
    }

    p = a[n - 1] * a[n - 2];  // Product of two largest numbers
    int p2 = a[0] * a[1];      // Product of two smallest numbers

    if (p > p2)
    {
        printf("%d", p);  // Larger product
    }
    else
    {
        printf("%d", p2);  // Larger product
    }
}


