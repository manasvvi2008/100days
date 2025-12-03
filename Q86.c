#include <stdio.h>
int main() {
    char s[1000];
    if(!fgets(s, sizeof s, stdin)) return 0;
    int n=0;
    while(s[n] && s[n]!='\n') n++;
    int i=0,j=n-1;
    int pal=1;
    while(i<j) {
        if(s[i]!=s[j]) { pal=0; break; }
        i++; j--;
    }
    printf(pal? "Palindrome\n":"Not Palindrome\n");
    return 0;
}