#include<stdio.h>
void main()
{
    int n,x;
    scanf("%d", &n);
    int a[n];
    int m;
    int c=0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        while(a[i]>0)
        {
            m=0;
            x=a[i];
            int z=a[i]%10;
            m=m*10+z;
            a[i]=a[i]/10;
        }
        if(m==x)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}