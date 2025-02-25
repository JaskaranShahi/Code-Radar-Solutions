#include<stdio.h>

void main()
{
    int n;
    int max = -1;
    scanf("%d", &n);
    int a[100];  // Assuming n won't exceed 100

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            if(a[i] > max)
            {
                max = a[i];
            }
        }
    }
    
    printf("%d", max);
}
