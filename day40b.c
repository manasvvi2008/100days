#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q;

    printf("Enter rows & columns of A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows & columns of B: ");
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("Multiplication not possible");
        return 0;
    }

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < p; i++)
        for(int j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < q; j++) {
            c[i][j] = 0;
            for(int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Product:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}