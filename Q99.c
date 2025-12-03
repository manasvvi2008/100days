#include <stdio.h>
#include <string.h>
int main(){
    char s[50];
    if(!fgets(s,sizeof s,stdin)) return 0;
    int d,m,y;
    if(sscanf(s,"%d/%d/%d",&d,&m,&y)!=3){ printf("Invalid\n"); return 0; }
    const char *mon[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    if(m<1||m>12) { printf("Invalid\n"); return 0; }
    printf("%02d-%s-%04d\n", d, mon[m], y);
    return 0;
}