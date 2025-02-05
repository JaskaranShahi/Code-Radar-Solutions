#include <stdio.h>
void main()
{
    int n;
    int a[];
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        a[i]=scanf("%d",&a);
    }
    for(int i =0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}