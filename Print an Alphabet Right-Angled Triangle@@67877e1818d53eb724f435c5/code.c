#include <stdio.h>
void main() 
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}
