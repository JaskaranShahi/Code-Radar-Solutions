#include<stdio.h>

struct Student
{
    int roll;
    char name[100];
    float marks;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Student st[n];
    float avg = 0;
    float s;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        avg=avg+st[i].marks;
        
    }
    s=avg/n;
    printf("Total Marks: %.2f\n",avg);
    printf("Average Marks: %.2f",s);

    return 0;
}