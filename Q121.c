#include <stdio.h>
int main(){
    char name[200]; int age;
    printf("Enter name: ");
    if(!fgets(name,sizeof name,stdin)) return 0;
    name[strcspn(name,"\n")] = '\0';
    printf("Enter age: ");
    if(scanf("%d",&age)!=1) return 0;
    FILE *f = fopen("info.txt","w");
    if(!f){ perror("fopen"); return 0; }
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("Data saved to info.txt\n");
    return 0;
}