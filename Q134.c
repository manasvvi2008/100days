#include <stdio.h>

int main()
 {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status s = TIMEOUT;

    switch (s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }

    return 0;
}