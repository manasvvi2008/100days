#include <stdio.h>
int ceilIndex(int a[],int n,int x){
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]>=x){ ans=m; r=m-1; }
        else l=m+1;
    }
    return ans;
}
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x; scanf("%d",&x);
    int idx = ceilIndex(a,n,x);
    if(idx==-1) printf("-1\n"); else printf("%d\n", idx);
    return 0;
}