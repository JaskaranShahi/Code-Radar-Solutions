#include <stdio.h>
#include <string.h>

void selectionSort(char str[],int m) {
    int n = strlen(str); 
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (str[j] < str[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            char temp = str[i];
            str[i] = str[minIndex];
            str[minIndex] = temp;
        }
    }
}
int printArray(char str[],int n)
{
    for(int i=0;i<n;i++){
    printf("%s ",str[n]);
    }
}
