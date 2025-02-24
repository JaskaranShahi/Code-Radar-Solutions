#include<stdio.h>
void main()
{
    int n,z;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int num;
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            z=i;
        }
        else
        {
            z=-1;
        }
    }
    printf("%d",z);
}