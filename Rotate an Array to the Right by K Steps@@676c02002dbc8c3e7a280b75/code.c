#include<stdio.h>

void main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Input number of rotations
    scanf("%d", &k);
    
    // Normalize k to avoid unnecessary full rotations
    k = k % n;  // If k is larger than n, reduce it
    
    // Array rotation logic: Print the rotated array
    for(int i = 0; i < n; i++) {
        // Calculate the new index after rotation
        int newIndex = (i + k) % n;
        printf("%d ", a[newIndex]);
    }
}

