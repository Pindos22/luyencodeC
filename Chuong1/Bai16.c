//
// Created by huydo on 4/9/2024.
//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
#include <stdio.h>
#include "math.h"

int main() {
    float n, x;
    printf("Nhap so X: ");
    scanf("%f", &x);
    printf("Nhap so N: ");
    scanf("%f", &n);
    float i=1;
    float sum=0;
    float T=0;
    float y;

    for (i=1; i<= n; i++){
        T = T + i;
        y = i / T;
        sum = sum + pow(x, y);
    }
    printf("Tong S(n) la: %f", sum);
    return 0;
}