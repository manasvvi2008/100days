#include <stdio.h>

struct Employee {
    char name[20];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Rahul", 1, 50000}, e2;
    FILE *fp = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("%s %d %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}