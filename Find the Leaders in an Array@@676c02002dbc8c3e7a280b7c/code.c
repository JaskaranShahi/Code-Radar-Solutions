#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int x=0;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int c=n-i;
            if(a[i]>a[j])
            {
               x=x+1; 
            }
            if(x==c)
            {
                b[y]=a[i];
                y++;
            }
            x=0;
            if(c==0)
            {
                b[y]a[n-1];
            }
        }
    }
    for(int i=0;i<y+1;i++)
    {
        printf("%d ",b[i]);
    }
}