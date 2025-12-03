#include <stdio.h>
int main() {
    int a[50], n, k, temp;

    printf("Enter size: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;

    while(k--) {
        temp = a[n - 1];
        for(int i = n - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = temp;
    }

    printf("Rotated array:\n");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}