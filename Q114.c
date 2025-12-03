#include <stdio.h>
int max(int a,int b){return a>b?a:b;}
int main(){
    char s[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int last[256]; for(int i=0;i<256;i++) last[i]=-1;
    int start=0, best=0;
    for(int i=0; s[i] && s[i]!='\n'; ++i){
        if(last[(unsigned char)s[i]] >= start) start = last[(unsigned char)s[i]] + 1;
        last[(unsigned char)s[i]] = i;
        best = max(best, i-start+1);
    }
    printf("%d\n", best);
    return 0;
}