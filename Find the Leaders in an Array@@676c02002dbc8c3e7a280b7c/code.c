#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    int y = 0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                c = 0;
                break;
            }
        }
        if (c!=0)
        {
            b[y] = a[i];
            y++;
        }
    }

    for (int i = 0; i < y; i++)
    {
        printf("%d ", b[i]);
    }
}
