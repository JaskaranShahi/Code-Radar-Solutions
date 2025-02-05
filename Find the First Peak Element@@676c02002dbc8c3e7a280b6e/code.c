#include <stdio.h>
void main()
{
    int n;
    int max=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int i =0;i<n;i++)
    {
        if(a[i]>a[n+1])
        {
            b[i]=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",&b[i]);
    }

    
}