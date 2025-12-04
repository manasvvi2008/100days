#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *in = fopen("input.txt","r");
    if(!in){ printf("Cannot open input.txt\n"); return 0; }
    FILE *out = fopen("output.txt","w");
    if(!out){ fclose(in); printf("Cannot open output.txt\n"); return 0; }
    int c;
    while((c=fgetc(in))!=EOF) fputc(toupper((unsigned char)c), out);
    fclose(in); fclose(out);
    printf("Written to output.txt\n");
    return 0;
}