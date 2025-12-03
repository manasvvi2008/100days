#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    long long a[n], tot=0;
    for(int i=0;i<n;i++){ scanf("%lld",&a[i]); tot+=a[i]; }
    long long left=0;
    for(int i=0;i<n;i++){
        if(left == tot - left - a[i]){ printf("%d\n", i); return 0; }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}