#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

struct Student getTop(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > top.marks) top = s[i];
    return top;
}

int main() {
    struct Student s[3] = {
        {"A", 1, 50},
        {"B", 2, 90},
        {"C", 3, 80}
    };

    struct Student t = getTop(s, 3);
    printf("Top: %s %.2f\n", t.name, t.marks);

    return 0;
}