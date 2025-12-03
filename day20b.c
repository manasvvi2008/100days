#include <stdio.h>

int main() {
    char bin[100];
    printf("Enter a binary number: ");
    scanf("%s", bin);

    for(int i = 0; bin[i] != '\0'; i++) {
        if(bin[i] == '0') bin[i] = '1';
        else bin[i] = '0';
    }

    printf("1's Complement = %s", bin);
    return 0;
}