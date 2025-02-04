#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf(" ");
        }
        for(int k=i;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}