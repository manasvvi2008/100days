#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char s[200];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int n=strcspn(s,"\n"); s[n]='\0';
    int start=0, lastStart=-1;
    for(int i=0;i<=n;i++){
        if(i==0 || (s[i-1]==' ' && s[i]!=' ')) start=i;
        if(i==n || s[i]==' ') {
            lastStart=start;
        }
    }
    // print initials for all but last word
    int i=0;
    while(i<lastStart){
        if(s[i]!=' '){
            putchar(toupper((unsigned char)s[i])); putchar('.');
            while(i<lastStart && s[i]!=' ') i++;
            if(i<lastStart && s[i]==' ') i++;
        } else i++;
    }
    // print surname
    printf(" %s\n", s+lastStart);
    return 0;
}