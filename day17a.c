#include <stdio.h>
#include <math.h>
int main() {
    int n, sum=0, temp, digits=0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    if (n == sum)
        printf("%d is Armstrong\n", n);
    else
        printf("%d is Not Armstrong\n", n);

    return 0;
}