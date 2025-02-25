#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        j=i+3;
        if(j>n)
        {
            j=j-n;
            a[j]=a[i];
        }
        else
        {
            a[j]=a[n];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[n]);
    }
}