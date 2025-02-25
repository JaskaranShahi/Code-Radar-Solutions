#include<stdio.h>

void main() {
    int n, c = 0, m = -1;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        c = 0;
        for(int j = 0; j < n; j++) {
            if(a[i] == a[j]) {
                c++;
            }
        }
        if(c > n/2) {
            if(m == -1) {
                m = a[i];
            } else if(m != a[i]) {
                printf("-1");
                return;
            }
        }
    }

    printf("%d", m);
}

