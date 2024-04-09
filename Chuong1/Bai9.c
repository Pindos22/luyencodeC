//
// Created by huydo on 4/9/2024.
//Bài 9: Tính T(n) = 1 x 2 x 3…x N
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=1;
    float T=1;
    do {
        T = T * i;
        i++;
    } while (i<=n);
    printf("Tich T(n) la: %.0f", T);
    return 0;
}