#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int i=0;
    while(s[i] && s[i]==' ') i++;
    if(s[i]) s[i] = toupper((unsigned char)s[i]);
    for(int j=i+1; s[j] && s[j]!='\n'; ++j) s[j] = tolower((unsigned char)s[j]);
    printf("%s", s);
    return 0;
}