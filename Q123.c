#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *f = fopen("input.txt","r");
    if(!f){ printf("Cannot open input.txt\n"); return 0; }
    int c;
    long long chars=0, words=0, lines=0;
    int inword=0;
    while((c=fgetc(f))!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(!isspace(c) && !inword){ inword=1; words++; }
        if(isspace(c)) inword=0;
    }
    fclose(f);
    printf("Characters=%lld Words=%lld Lines=%lld\n", chars, words, lines);
    return 0;
}