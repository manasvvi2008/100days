#include <stdio.h>
int main(){
    char fname[200];
    if(!scanf("%s", fname)) return 0;
    FILE *f = fopen(fname,"r");
    if(!f){ printf("Error: File does not exist\n"); return 0; }
    int c;
    while((c=fgetc(f))!=EOF) putchar(c);
    fclose(f);
    return 0;
}