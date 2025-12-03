#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int i=0;
    while(s[i] && s[i]!='\n'){
        int start=i;
        while(s[i] && s[i]!=' ' && s[i]!='\n') i++;
        for(int j=i-1;j>=start;j--) putchar(s[j]);
        if(s[i]==' ') putchar(' ');
        if(s[i]) i++;
    }
    putchar('\n');
    return 0;
}