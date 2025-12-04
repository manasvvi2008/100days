#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student s1 = {"A", 1};
    struct Student s2 = {"A", 1};

    if (strcmp(s1.name, s2.name)==0 && s1.roll == s2.roll)
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}