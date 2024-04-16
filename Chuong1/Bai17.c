//
// Created by huydo on 4/16/2024.
//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
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
    float y=1;

    for (i=1; i<= n; i++){
        for (int j = 1; j <= i ; ++j) {
            y = y * j;
        }
        sum = sum + pow(x, i/y);
    }
    printf("Tong S(n) la: %f", sum);
    return 0;
}