#include<stdio.h>
int binarySearch(int a,int n,int t)
{
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(num==a[mid]){
            return mid;
        }
        else if(num<a[mid]){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
}