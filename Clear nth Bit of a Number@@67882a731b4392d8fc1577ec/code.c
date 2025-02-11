#include <stdio.h>

void main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    a= a & ~(1 << b);
    printf("%d\n", a);
}