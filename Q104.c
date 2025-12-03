#include <stdio.h>
int main(){
    long long n; if(scanf("%lld",&n)!=1) return 0;
    long long total = n*(n+1)/2;
    for(long long x=1;x<=n;x++){
        long long left = x*(x+1)/2;
        long long right = total - (x*(x-1)/2);
        if(left==right){ printf("%lld\n", x); return 0; }
    }
    printf("-1\n");
    return 0;
}