#include <stdio.h>
void main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    a = a | (1<<n);
    printf("%d\n", a);
}
