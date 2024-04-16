//
// Created by huydo on 4/16/2024.
//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
#include <stdio.h>
#include "math.h"

int main() {
    float n, x;
    printf("Nhap so X: ");
    scanf("%f", &x);
    printf("Nhap so N: ");
    scanf("%f", &n);
    float sum=1;
    float y=1;

    for (int i=1; i <= n; i++){
        for (int j = 1; j <= 2*i ; ++j) {
            y = y * j;
        }
        sum = sum + pow(x, 2*i/y);
    }
    printf("Tong S(n) la: %f", sum);
    return 0;
}