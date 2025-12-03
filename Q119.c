#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    // Use frequency map simple O(n) extra memory
    int maxv = a[0];
    for(int i=1;i<n;i++) if(a[i]>maxv) maxv=a[i];
    int size = maxv+1;
    if(size < 1000000){
        int *freq = (int*)calloc(size, sizeof(int));
        for(int i=0;i<n;i++){
            if(++freq[a[i]]==2){ printf("%d\n", a[i]); free(freq); return 0; }
        }
        free(freq);
    }
    // fallback O(n^2)
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if(a[i]==a[j]){ printf("%d\n", a[i]); return 0; }
    return 0;
}