//
// Created by huydo on 4/16/2024.
//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
#include "stdio.h"
#include "math.h"

int main() {
    float n, x;
    printf("Nhap hai so x va n: ");
    scanf("%f%f", &x,&n);
    float tong = 1;
    float t, m = 1;
    for (int i = 0; i <= n; ++i) {
        t = 2*i + 1;
        for (int j = 1; j <= t; ++j) {
            m = m * j;
        }
        tong = tong + pow(x, t/m);
    }
    printf("Tong S(n) la: %f", tong);

    getchar();
}