#include <stdio.h>

int main() {
    int n, arr[100], key;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("Not found");
    return 0;
}