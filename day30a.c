#include <stdio.h>

int main() {
    int n, arr[100], e = 0, o = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) e++;
        else o++;
    }

    printf("Even = %d, Odd = %d", e, o);
    return 0;
}