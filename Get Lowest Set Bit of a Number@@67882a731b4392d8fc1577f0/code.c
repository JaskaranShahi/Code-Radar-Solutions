#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b = a & -a;
    printf("%d\n", b);
    return 0;
}
