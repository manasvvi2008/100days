#include <stdio.h>
int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<=n-k;i++){
        int mx=a[i];
        for(int j=i+1;j<i+k;j++) if(a[j]>mx) mx=a[j];
        if(i) printf(" ");
        printf("%d", mx);
    }
    printf("\n");
    return 0;
}