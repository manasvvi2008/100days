#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isupper(ch))
        printf("Uppercase Alphabet\n");
    else if (islower(ch))
        printf("Lowercase Alphabet\n");
    else if (isdigit(ch))
        printf("Digit\n");
    else
        printf("Special Character\n");
    return 0;
}