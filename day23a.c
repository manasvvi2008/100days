#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    int num = 2, den = 3;

    for(int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum = %.2f", sum);
    return 0;
}