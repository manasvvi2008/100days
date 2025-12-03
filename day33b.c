#include <stdio.h>
int main() {
    int a[50], n, x, i;

    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    i = n - 1;
    while(i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;

    printf("New array:\n");
    for(i = 0; i <= n; i++) printf("%d ", a[i]);
    return 0;
}