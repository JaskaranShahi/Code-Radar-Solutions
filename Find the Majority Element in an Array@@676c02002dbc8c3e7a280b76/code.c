#include<stdio.h>

void main()
{
    int n, c = 0, m;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        c = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                c++;
            }
        }
        if(c > n/2)
        {
            m = a[i];
            break;
        }
    }

    printf("%d", m);
}
