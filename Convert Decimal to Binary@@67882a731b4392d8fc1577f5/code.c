#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int l = 1;

    for (int i = 31; i >= 0; i--) {
        int bit = (a >> i) & 1;
        if (bit == 1) {
            l = 0;  
        }
        if (!l) {
            printf("%d", bit);
        }
    }

    if (l) {
        printf("0");
    }

    printf("\n");
}

