#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c=c+1;
        }
        
    }
    printf("%d",c);
}