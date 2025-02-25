#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    int max=0;
    int c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        if(abs(a[i])%2==0)
        {
            if(a[i]>max)
            {
                max=a[i];
                c++;
            }
        }
        else
        {
            max=-1;
        }
    }
    if(c>0)
    {
        max=max;
    }
    printf("%d",max);

} 