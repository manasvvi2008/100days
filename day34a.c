#include <stdio.h>
int main() {
    int a[50], n, pos, x;

    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position (0-based): ");
    scanf("%d", &pos);
    printf("Enter element: ");
    scanf("%d", &x);

    for(int i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = x;

    printf("New array:\n");
    for(int i = 0; i <= n; i++) printf("%d ", a[i]);
    return 0;
}