#include <stdio.h>

int main() 
{
    enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    enum Day d;

    for (d = SUNDAY; d <= SATURDAY; d++)
        printf("%d\n", d);

    return 0;
}