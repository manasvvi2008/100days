#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    if(!fgets(s, sizeof s, stdin)) return 0;
    int n = 0;
    while (s[n] && s[n] != '\n') n++;
    for (int i = n-1; i>=0; --i) putchar(s[i]);
    putchar('\n');
    return 0;
}