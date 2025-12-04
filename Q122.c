#include <stdio.h>
int main(){
    FILE *f = fopen("info.txt","r");
    if(!f){ printf("Cannot open file\n"); return 0; }
    char line[500];
    while(fgets(line,sizeof line,f)) printf("%s", line);
    fclose(f);
    return 0;
}