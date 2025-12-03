#include <stdio.h>
int main() {
    int n, rev=0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }

    if (n == rev)
        printf("%d is Palindrome\n", n);
    else
        printf("%d is Not Palindrome\n", n);
    return 0;
}