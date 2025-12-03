#include <stdio.h>
int main() {
    int a[10][10], r, c, sum = 0;

    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

    printf("Total sum = %d", sum);
    return 0;
}