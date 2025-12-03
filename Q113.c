#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){ return (*(int*)a - *(int*)b); }
int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof a[0],cmp);
    if(k>=1 && k<=n) printf("%d\n", a[k-1]); else printf("Invalid\n");
    return 0;
}