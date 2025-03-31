#include <stdio.h>
char selectionSort(char a[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i; 
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
    
        if(min != i)
        {
            char temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    
}
int printArray(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}