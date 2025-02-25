#include<stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int c = 1; // Start with 1 because the current element is counted
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                c++;
                a[j] = -1; // Mark the element as counted so we don't count it again
            }
        }
        
        if(a[i] != -1) {
            printf("%d %d\n", a[i], c);
        }
    }
}

