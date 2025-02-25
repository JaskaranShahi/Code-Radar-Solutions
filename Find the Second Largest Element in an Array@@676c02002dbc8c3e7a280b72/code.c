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
        for(int j=1;j<i;j++)
        {
            if(a[i]>a[j])
            {
                max=a[i];
                a[i]=a[j];
                a[j]=max;

            }
        }
    }
    printf("%d",a[n-2]);
}