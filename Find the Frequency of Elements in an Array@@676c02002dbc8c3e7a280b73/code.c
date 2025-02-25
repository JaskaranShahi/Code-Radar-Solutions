#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[n]);

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
        printf("%d %d",a[i],c);
        c=0;
        printf("\n");
    }
}