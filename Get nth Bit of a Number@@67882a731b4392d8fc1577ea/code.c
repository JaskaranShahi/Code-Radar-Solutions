#include <stdio.h>

void main() {
    int a,b, bit;
    scanf("%d", &a);
    scanf("%d", &b);
    bit = (a >> b) & 1;
    printf("%d\n", bit);
}