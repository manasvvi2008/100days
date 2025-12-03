#include <stdio.h>
int main() {
    int a[50], n, key, low = 0, high, mid;

    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        } else if(a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    printf("Not found");
    return 0;
}