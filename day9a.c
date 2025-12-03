 #include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Two Real and Distinct Roots: %.2f and %.2f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2*a);
        printf("Two Equal Roots: %.2f and %.2f\n", root1, root1);
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        printf("Complex Roots: %.2f+%.2fi and %.2f-%.2fi\n", real, imag, real, imag);
    }
    return 0;
}