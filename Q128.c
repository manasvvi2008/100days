#include <stdio.h>
#include <ctype.h>
int isv(char c){ c=tolower((unsigned char)c); return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }
int main(){
    FILE *f = fopen("input.txt","r");
    if(!f){ printf("Cannot open input.txt\n"); return 0; }
    int c;
    long long vowels=0, consonants=0;
    while((c=fgetc(f))!=EOF){
        if(isalpha(c)){
            if(isv(c)) vowels++; else consonants++;
        }
    }
    fclose(f);
    printf("Vowels=%lld Consonants=%lld\n", vowels, consonants);
    return 0;
}