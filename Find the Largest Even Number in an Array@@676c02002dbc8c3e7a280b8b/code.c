#include<stdio.h>
void main()
{
    int n;
    int max=0;
    scanf("%d",&n);
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i]>max)
            {
                max=a[i];
                c++;
            }
        }
        if(c>0)
        (
            max=max;
        )
        else
        {
            max=-1;
        }
    }
    printf("%d",max);

}