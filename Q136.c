#include <stdio.h>

int main()
 {
    enum Menu {ADD=1, SUBTRACT, MULTIPLY};
    int choice = MULTIPLY, a = 5, b = 3;

    switch (choice) {
        case ADD: printf("Sum = %d\n", a+b); break;
        case SUBTRACT: printf("Difference = %d\n", a-b); break;
        case MULTIPLY: printf("Product = %d\n", a*b); break;
    }

    return 0;
}