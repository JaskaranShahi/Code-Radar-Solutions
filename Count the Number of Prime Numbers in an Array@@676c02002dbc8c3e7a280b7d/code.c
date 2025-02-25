#include<stdio.h>

void main() {
    int n, c, d = 0;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        c = 0;
        for(int j = 1; j <= a[i]; j++)
        {
            if(a[i] % j == 0) {
                c++;
            }
        }
        if(c == 2)
        {  
            d++;
        }
    }
    
    printf("%d", d);  
}
