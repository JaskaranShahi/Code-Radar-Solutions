#include<stdio.h>
struct Student
{
    int roll;
    char name[100];
    float marks;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct Student st[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&st[i].roll,st[i].name,&st[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %s %f",st[i].roll,st[i].name,st[i].marks);
        printf("\n");
    }
}