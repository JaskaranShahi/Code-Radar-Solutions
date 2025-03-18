#include <stdio.h>
#include <string.h>

int main() {
    char str[100], x[100];
    int length, i, j;
    fgets(str, sizeof(str), stdin);
    //str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    j = 0;
    for(i = length - 1; i >= 0; i--)
    {
        x[j] = str[i];
        j++;
    }

    x[j] = '\0'; 
    printf("%s", x);

    return 0;
}
