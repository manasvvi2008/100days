#include <stdio.h>
int main() {
    int a[10][10], n, flag = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i][i] == a[j][j])
                flag = 0;

    if(flag) printf("Distinct");
    else printf("Not distinct");
    return 0;
}