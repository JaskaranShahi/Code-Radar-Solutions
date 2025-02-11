#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    int b= a & -a;
    printf("%d\n", b);
}