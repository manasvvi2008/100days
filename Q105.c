#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int cand=0,count=0;
    for(int i=0;i<n;i++){
        if(count==0){ cand=a[i]; count=1; }
        else if(a[i]==cand) count++; else count--;
    }
    int freq=0;
    for(int i=0;i<n;i++) if(a[i]==cand) freq++;
    if(freq > n/2) printf("%d\n", cand); else printf("-1\n");
    return 0;
}