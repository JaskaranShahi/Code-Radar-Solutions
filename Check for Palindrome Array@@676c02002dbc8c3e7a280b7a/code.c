#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[n-1])
        {
            printf("YES");
        }
    }
}