#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    for(int i=0; s[i] && s[i]!='\n'; ++i) {
        if (islower((unsigned char)s[i])) s[i] = toupper((unsigned char)s[i]);
        else if (isupper((unsigned char)s[i])) s[i] = tolower((unsigned char)s[i]);
    }
    printf("%s", s);
    return 0;
}