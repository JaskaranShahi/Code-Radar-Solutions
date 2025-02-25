#include<stdio.h>

void main() {
    int n, j, k;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);
    
    // Shifting elements
    for(int i = 0; i < n; i++) {
        j = (i + k) % n;  // Shift the index by k positions, wrapping around using modulo
        printf("%d ", a[j]);
    }
}
