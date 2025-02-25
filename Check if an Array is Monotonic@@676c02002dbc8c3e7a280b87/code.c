#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1] || a[i]<a[i+1])
        {
            c=c+1;
        }
    }
    if(c==n-1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}