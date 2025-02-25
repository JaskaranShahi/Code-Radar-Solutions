#include<stdio.h>
void main()
{
    int n;
    int max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        else
        {
            max=-1;
        }
    }
    printf("%d",max);

}