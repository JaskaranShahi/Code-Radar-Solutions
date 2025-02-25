#include<stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int inc = 0, dec = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i+1]) 
            inc = 1;
        else if(a[i] > a[i+1])
            dec = 1;
    }
    
    if(inc && dec)
        printf("NO");
    else
        printf("YES");
}
