#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0;
    int d=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])
        {
            d=1;
        }
        else if(a[i]<=a[i+1])
        {
            i=1;
        }
        
    }
    if(i && d)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}