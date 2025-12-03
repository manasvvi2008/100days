#include <stdio.h>
int main() {
    int a[10][10], n, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                flag = 0;

    if(flag) printf("Symmetric");
    else printf("Not symmetric");

    return 0;
}