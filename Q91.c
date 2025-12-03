#include <stdio.h>
#include <ctype.h>
int isv(char c){ c = tolower((unsigned char)c); return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}
int main(){
    char s[1000], out[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int j=0;
    for(int i=0; s[i] && s[i]!='\n'; ++i) if(!isv(s[i])) out[j++]=s[i];
    out[j]='\0';
    printf("%s\n", out);
    return 0;
}