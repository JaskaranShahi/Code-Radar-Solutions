#include<stdio.h>
void main()
{
    int n;int c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(a[i]<a[j])
            {
                c=c+1;
            }
        }
    }
    if(c==n)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}