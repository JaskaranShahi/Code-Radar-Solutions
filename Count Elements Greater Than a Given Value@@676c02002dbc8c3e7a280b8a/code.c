#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int c;
    scanf("%d",&c);
    int x=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>c)
        {
            x=x+1;
        }
    }
    printf("%d",x);


}