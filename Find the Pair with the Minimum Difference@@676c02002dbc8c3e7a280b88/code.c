#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int x,y;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);
    }
    int s=100;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int m=a[i]-a[j];
            if(abs(m)<s)
            {
                s=m;
                x=a[i];
                y=a[j];
            }

        }
    }
    printf("%d %d",x,y);
}