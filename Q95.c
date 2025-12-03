#include <stdio.h>
#include <string.h>
int main(){
    char a[1000], b[1000];
    if(!fgets(a,sizeof a,stdin)) return 0;
    if(!fgets(b,sizeof b,stdin)) return 0;
    int na=strcspn(a,"\n"), nb=strcspn(b,"\n");
    if(na!=nb){ printf("Not Rotation\n"); return 0; }
    a[na]='\0'; b[nb]='\0';
    char dbl[2005];
    strcpy(dbl,a); strcat(dbl,a);
    if (strstr(dbl, b)) printf("Rotation\n"); else printf("Not Rotation\n");
    return 0;
}