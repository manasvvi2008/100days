#include <stdio.h>
int main() {
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);
    if (per >= 90)
        printf("Grade A\n");
    else if (per >= 80)
        printf("Grade B\n");
    else if (per >= 70)
        printf("Grade C\n");
    else if (per >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");
    return 0;
}