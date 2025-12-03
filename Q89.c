#include <stdio.h>
int main() {
    char s[1000];
    int cnt=0;
    if (!fgets(s,sizeof s,stdin)) return 0;
    int c = getchar();
    if (c==EOF) c='\n';
    for(int i=0; s[i] && s[i]!='\n'; ++i) if (s[i]==(char)c) cnt++;
    printf("%d\n", cnt);
    return 0;
}