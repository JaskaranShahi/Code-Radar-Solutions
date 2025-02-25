#include<stdio.h>
void main()
{
    int n,x;
    int c=0;
    int max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
        if(c>=max)
        {
            max=c;
            x=a[i];
            c=0;
        }
    }
    printf("%d",x);
}