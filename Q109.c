#include <stdio.h>
int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long sum=0;
    for(int i=0;i<k;i++) sum+=a[i];
    long long best=sum;
    for(int i=k;i<n;i++){
        sum += a[i] - a[i-k];
        if(sum>best) best=sum;
    }
    printf("%lld\n", best);
    return 0;
}