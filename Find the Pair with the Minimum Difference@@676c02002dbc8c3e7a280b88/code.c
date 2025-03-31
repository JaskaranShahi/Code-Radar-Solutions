#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 1;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int s = abs(a[0] - a[1]); // Initialize with the first two elements' difference
    int x = a[0], y = a[1];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int m = abs(a[i] - a[j]);
            if (m < s) {
                s = m;
                x = a[i];
                y = a[j];
            }
        }
    }

    printf("%d %d\n", x < y ? x : y, x > y ? x : y);
    return 0;
}

