#include <stdio.h>
void main()
{
    int n;
    int e=0;
    int o=0;
    int a[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i]=scanf("%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
    }
    printf("%d %d",e,o);
}