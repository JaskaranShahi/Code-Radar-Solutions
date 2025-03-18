#include <stdio.h>
#include <string.h>

int main() {
    char str[100], x[100];
    int length, i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    j = 0;
    for(i = length - 1; i >= 0; i--) {
        x[j] = str[i]; 
        j++;
    }

    x[j] = '\0';
    printf("Reversed string: %s\n", x);

    return 0;
}
