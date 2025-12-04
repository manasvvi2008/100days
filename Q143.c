#include <stdio.h>

struct Student 
{
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s[5], top;
    top.marks = -1;

    for(int i=0;i<5;i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks > top.marks)
            top = s[i];
    }

    printf("Topper: %s %.2f\n", top.name, top.marks);

    return 0;
}