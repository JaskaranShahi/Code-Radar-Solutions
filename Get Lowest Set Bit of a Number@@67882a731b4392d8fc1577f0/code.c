#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int lowestSetBit = a & -a;

    printf("%d\n", lowestSetBit);

    return 0;
}

