#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        int c=(n+1)/2;
        printf("%d",a[c-1]);
    }
    if(n%2==0)
    {
        int m=n/2;
        int c=(a[m-1]+a[m])/2;
        printf("%d",c);
    }
}