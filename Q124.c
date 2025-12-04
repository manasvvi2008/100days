#include <stdio.h>
int main(){
    char src[200], dst[200];
    scanf("%s %s", src, dst);
    FILE *fs = fopen(src,"r");
    if(!fs){ printf("Cannot open source\n"); return 0; }
    FILE *fd = fopen(dst,"w");
    if(!fd){ printf("Cannot open dest\n"); fclose(fs); return 0; }
    int c;
    while((c=fgetc(fs))!=EOF) fputc(c, fd);
    fclose(fs); fclose(fd);
    printf("Copied\n");
    return 0;
}