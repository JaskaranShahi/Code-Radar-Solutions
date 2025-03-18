#include <stdio.h>
#include <string.h>

int main() {
    char str[100], x[100];
    int length, i, j;
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string (if any)
    str[strcspn(str, "\n")] = '\0';

    // Find the length of the string
    length = strlen(str);

    // Reverse the string
    j = 0; // Index for the reversed string
    for(i = length - 1; i >= 0; i--) {
        x[j] = str[i]; // Store each character in reverse order
        j++;
    }

    x[j] = '\0'; // Add null terminator to the reversed string

    // Output the reversed string
    printf("%s", x);

    return 0;
}
