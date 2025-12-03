#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int i=0;
    while(s[i] && s[i]==' ') i++;
    if (s[i]) { putchar(toupper((unsigned char)s[i])); putchar('.'); }
    while(s[i] && s[i]!='\n'){
        if (s[i]==' '){
            while(s[i]==' ') i++;
            if(s[i] && s[i]!='\n') { putchar(toupper((unsigned char)s[i])); putchar('.'); }
        } else i++;
    }
    putchar('\n');
    return 0;
}