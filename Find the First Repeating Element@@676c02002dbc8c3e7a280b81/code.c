#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c;
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
                c=a[i];
                break;
            }
        }
    }
    printf("%d",&c);
}