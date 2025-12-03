#include <stdio.h>
#include <ctype.h>
int main(){
    char a[1000], b[1000];
    if (!fgets(a,sizeof a,stdin)) return 0;
    if (!fgets(b,sizeof b,stdin)) return 0;
    int cnt[256]={0};
    for(int i=0; a[i] && a[i]!='\n'; ++i) cnt[(unsigned char)a[i]]++;
    for(int i=0; b[i] && b[i]!='\n'; ++i) cnt[(unsigned char)b[i]]--;
    for(int i=0;i<256;i++) if(cnt[i]!=0){ printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}