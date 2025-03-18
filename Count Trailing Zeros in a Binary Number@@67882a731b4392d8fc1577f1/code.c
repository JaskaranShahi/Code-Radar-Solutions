#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int count = 0;
    if (a == 0)
    {
        count = 32;
    }
    else
    {
        while ((a & 1) == 0)
        {
            count++;
            a >>= 1; 
        }
    }

    printf("%d\n", count);

    return 0;
}

