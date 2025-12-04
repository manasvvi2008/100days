#include <stdio.h>

int main() 
{
    enum Role {ADMIN, USER, GUEST};
    enum Role r = USER;

    if (r == ADMIN) printf("Welcome Admin\n");
    else if (r == USER) printf("Welcome User\n");
    else printf("Welcome Guest\n");

    return 0;
}