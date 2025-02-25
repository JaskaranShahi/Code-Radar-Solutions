#include<stdio.h>
void main()
{
    int n;
    int s=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        while(num!=0)
        {
            int z=num%10;
            s=s+z;
            num=num/10;
        }
        b[i]=s;
        s=0;
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}