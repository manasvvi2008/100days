#include <stdio.h>
int main() {
    int num, digit, freq[10] = {0}, max = 0, ans = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }

    printf("Digit occurring most: %d", ans);
    return 0;
}