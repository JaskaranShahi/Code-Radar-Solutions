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
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
    }
    
    int r;
    scanf("%d", &r);
    int found = 0; 

    for(int i = 0; i < n; i++)
    {
        if(r == st[i].roll)
        {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", st[i].roll, st[i].name, st[i].marks);
            found = 1; 
            break; 
        }
    }

    if (!found)  
    {
        printf("Student not found\n");
    }

    return 0;
}
