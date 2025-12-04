#include <stdio.h>

int main() 
{
    enum Num {A=10, B, C, D};

    printf("%d %d %d %d\n", A, B, C, D);

    return 0;
}