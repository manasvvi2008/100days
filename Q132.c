#include <stdio.h>

int main() 
{
    enum Signal {RED, YELLOW, GREEN};
    enum Signal s = RED;

    if (s == RED) printf("Stop\n");
    else if (s == YELLOW) printf("Wait\n");
    else printf("Go\n");

    return 0;
}