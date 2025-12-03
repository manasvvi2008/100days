#include <stdio.h>
int main() {
    int a[10][10], r, c, rowsum[10];

    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++) {
        rowsum[i] = 0;
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowsum[i] += a[i][j];
        }
    }

    printf("Row sums:\n");
    for(int i = 0; i < r; i++)
        printf("%d ", rowsum[i]);
    return 0;
}