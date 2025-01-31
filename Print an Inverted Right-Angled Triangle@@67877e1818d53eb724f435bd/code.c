#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=n;i--)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
    printf("\n");
    }
}