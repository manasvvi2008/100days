#include <stdio.h>
#include <string.h>
int main(){
    char s[1000], t[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    if(!fgets(t,sizeof t,stdin)) return 0;
    int cnt[26]={0};
    for(int i=0; s[i] && s[i]!='\n'; ++i) cnt[s[i]-'a']++;
    for(int i=0; t[i] && t[i]!='\n'; ++i) cnt[t[i]-'a']--;
    for(int i=0;i<26;i++) if(cnt[i]!=0){ printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}