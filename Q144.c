#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("%s %d %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s = {"Manas", 10, 89.5};
    printStudent(s);
    return 0;
}