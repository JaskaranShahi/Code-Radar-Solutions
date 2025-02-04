#include <stdio.h>
void main()
{
    int c;
    scanf("%d",&c);
    for(char i='A';i<=c;i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf(" %c",j);
        }
        printf("\n");
    }
}