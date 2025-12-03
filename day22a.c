#include <stdio.h>

int fact(int x) {
    int f = 1;
    for(int i = 1; i <= x; i++)
        f *= i;
    return f;
}

int main() {
    int n, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += fact(digit);
        temp /= 10;
    }

    if(sum == n)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}