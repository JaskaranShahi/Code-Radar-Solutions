#include <stdio.h>
#include<ctype.h>
void main()
{
    int c;
    scanf("%d",&c);
    for(char i='A';i<='Z';i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf(" %c",j);
        }
        printf("\n");
    }
}