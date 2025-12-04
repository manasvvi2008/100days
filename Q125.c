#include <stdio.h>
int main(){
    char line[500];
    fgets(line, sizeof line, stdin); // extra newline from input
    if(!fgets(line,sizeof line,stdin)) return 0;
    FILE *f = fopen("input.txt","a");
    if(!f){ printf("Cannot open file\n"); return 0; }
    fprintf(f, "%s\n", line[strlen(line)? strlen(line):0] ? line : "");
    // simpler: fprintf(f,"%s", line);
    fprintf(f, "%s", line);
    fclose(f);
    printf("Appended\n");
    return 0;
}