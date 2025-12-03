#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long left[n];
    left[0]=1;
    for(int i=1;i<n;i++) left[i]=left[i-1]*a[i-1];
    long long right=1;
    long long ans[n];
    for(int i=n-1;i>=0;i--){
        ans[i]=left[i]*right;
        right *= a[i];
    }
    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%lld", ans[i]);
    }
    printf("\n");
    return 0;
}