#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if (a == 0) {
        printf("No set bits\n");
    } else {
        int b = a & -a;
        printf("%d\n", b);
    }

    return 0;
}
