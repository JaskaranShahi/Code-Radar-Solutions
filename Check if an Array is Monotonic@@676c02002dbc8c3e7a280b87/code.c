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
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1] || a[i]<a[i+1])
        {
            c=c+1;
        }
    }
    if(c==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}