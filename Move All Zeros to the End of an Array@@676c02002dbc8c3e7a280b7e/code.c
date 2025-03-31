#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
    
    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
