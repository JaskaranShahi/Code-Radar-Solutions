#include<stdio.h>
int selectionSort(int a[],int n)
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
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
int printArray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}