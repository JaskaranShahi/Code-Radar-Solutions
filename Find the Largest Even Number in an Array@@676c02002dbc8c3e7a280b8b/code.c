#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
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