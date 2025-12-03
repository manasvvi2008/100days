#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); sum+=a[i]; }
    long long total = (long long)n*(n+1)/2;
    printf("%lld\n", total - sum);
    return 0;
}