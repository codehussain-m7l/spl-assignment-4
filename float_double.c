#include<stdio.h>

int main() {
    float flo;
    double dou;

    scanf("%f %lf", &flo, &dou);
    printf("%.2f %.2lf", flo, dou);

    return 0;
}