#include <stdio.h>
int main() {
    int a[10][10], n;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Main diagonal:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i][i]);

    printf("\nSecondary diagonal:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i][n - i - 1]);

    return 0;
}