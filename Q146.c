#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Employee {
    char name[20];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"Rohan", 101, {5, 11, 2024}};
    printf("%s %d %02d-%02d-%d\n", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}