#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {
        char name[20];
        enum Gender g;
    };

    struct Person p = {"Rahul", MALE};

    printf("%s - %s\n", p.name, p.g == MALE ? "Male" : "Female");

    return 0;
}