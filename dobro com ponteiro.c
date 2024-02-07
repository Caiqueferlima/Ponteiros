#include <stdio.h>

int main() {
    float a, *pta;
    scanf("%f", &a);
    pta = &a;
    *pta *= 2;
    printf("%.1f", *pta);
}