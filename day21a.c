#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = log10(n);
    first = n / pow(10, digits);

    int swapped = last * pow(10, digits) + (n % (int)pow(10, digits) - last) + first;

    printf("Swapped number = %d", swapped);
    return 0;
}