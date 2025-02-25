#include <stdio.h>
void main()
{
    int n;
    int max;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            max=a[i];
            break;
        }
         if(a[i]==a[i+1])
        {
            max=-1;
            break;
        }
    }
    printf("%d",max);

    

    
}