#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int count = 0;

    // Handle case when the number is zero (which has 32 trailing zeros in binary representation)
    if (a == 0)
    {
        count = 32;
    }
    else
    {
        // Count the trailing zeros by checking the least significant bits
        while ((a & 1) == 0)
        {
            count++;
            a >>= 1;  // Right shift the number to examine the next bit
        }
    }

    printf("%d\n", count);

    return 0;
}

