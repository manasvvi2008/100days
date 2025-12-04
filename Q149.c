#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));

    scanf("%s %d", s->name, &s->roll);
    printf("%s %d\n", s->name, s->roll);

    free(s);
    return 0;
}