#include <stdio.h>

void main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("-1\n");
    } else
    {
        int p = 0;
        while ((a & 1) == 0)
        {
            a >>= 1;
            p++;
        }
        printf("%d\n", p);
    }
}
