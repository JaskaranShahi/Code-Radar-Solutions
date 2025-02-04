#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            for(int k=1;k<2*i;k++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}