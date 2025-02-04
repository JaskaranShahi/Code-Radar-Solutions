#include <stdio.h>
void main()
{
    int n;
    int g=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d",g);
            g++;
        }
        printf("\n");
    }
}