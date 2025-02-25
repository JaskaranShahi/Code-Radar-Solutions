#include<stdio.h>
void main()
{
    int n;
    int s=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        b[i]=s;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}