#include <stdio.h>
#include <stdlib.h>  

void main()
{
    int n;
    scanf("%d", &n);
    int a[n], max = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (abs(a[i]) % 2 == 0)  
        {
            if (a[i] > max || max == -1)  
            {
                max = a[i];
            }
        }
    }

    printf("%d", max);
}
