#include <stdio.h>
int main() {
    int a[50], n, pos;

    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position to delete (0-based): ");
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    printf("New array:\n");
    for(int i = 0; i < n - 1; i++) printf("%d ", a[i]);
    return 0;
}