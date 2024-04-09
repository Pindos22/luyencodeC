//
// Created by huydo on 4/9/2024.
//Bài 10: Tính T(x, n) = x^n
#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so X: ");
    scanf("%d", &x);
    printf("Nhap so N: ");
    scanf("%d", &n);
    int i=1;
    int T=1;
    do {
        T = T*x;
        i++;
    } while (i<=n);
    printf("Tich T(x,n) la: %d", T);
    return 0;
}