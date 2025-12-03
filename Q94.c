#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int bestL=0, bestIdx=0, i=0;
    while (s[i] && s[i]==' ') i++;
    int idx=0;
    while(s[i] && s[i]!='\n'){
        int start=i;
        while(s[i] && s[i]!=' ' && s[i]!='\n') i++;
        int len = i-start;
        if (len>bestL){ bestL=len; bestIdx=start; }
        while(s[i] && s[i]==' ') i++;
    }
    if (bestL==0) { printf("\n"); return 0; }
    for(int k=0;k<bestL;k++) putchar(s[bestIdx+k]);
    putchar('\n');
    return 0;
}