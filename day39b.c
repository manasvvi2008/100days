#include <stdio.h>
int main() {
    int a[10][10], n, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if(i == j) sum += a[i][j];
        }

    printf("Diagonal sum = %d", sum);
    return 0;
}