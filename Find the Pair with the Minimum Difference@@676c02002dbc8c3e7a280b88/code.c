#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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

    sort(a, n); // Sort the array first

    int s = abs(a[1] - a[0]);
    int x = a[0], y = a[1];

    for (int i = 1; i < n - 1; i++) {
        int m = abs(a[i + 1] - a[i]);
        if (m < s) {
            s = m;
            x = a[i];
            y = a[i + 1];
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}


