#include<stdio.h>
void main()
{
    int n,max;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int i=1;i<i;i++)
        {
            if(a[i]>a[j])
            {
                max=a[i];
                a[i]=a[i+1];
                a[i+1]=max;

            }
        }
    }
    printf("%d",a[n-2]);
}