#include<stdio.h>
void main()
{
    int n;
    int c=0;
    int d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[n];j++)
        {
            if(a[i]%j==0)
            {
                c=c+1;
            }

        }
        if(c==2)
        {
            d=d+1;
        }
    }
    printf("%d",&d);
}