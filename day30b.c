#include <stdio.h>

int main() {
    int n, arr[100], p=0, ne=0, z=0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) p++;
        else if(arr[i] < 0) ne++;
        else z++;
    }

    printf("Pos=%d Neg=%d Zero=%d", p, ne, z);
    return 0;
}