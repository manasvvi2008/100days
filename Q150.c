#include <stdio.h>
struct Student 
{
    int roll;
    float marks;
};
int main() 
{
    struct Student s;
    struct Student *ptr = &s;
    ptr->roll = 101;
    ptr->marks = 89.5;
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}