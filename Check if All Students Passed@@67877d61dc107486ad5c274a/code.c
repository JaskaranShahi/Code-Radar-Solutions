#include <stdio.h>

struct Student {
    int roll;
    char name[99];
    float marks;    
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    float k;
    scanf("%f", &k);

    int allPassed = 1;
    for(int s = 0; s < n; s++) {
        if(students[s].marks < k) {
            allPassed = 0;
            break;
        }
    }

    if(allPassed) {
        printf("All Passed");
    } else {
        printf("Not All Passed");
    }

    return 0;
}

