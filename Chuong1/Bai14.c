//
// Created by huydo on 4/9/2024.
//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so X: ");
    scanf("%d", &x);
    printf("Nhap so N: ");
    scanf("%d", &n);
    int i=0;
    int sum=0;
    int T=x;
    do {
        sum = sum + T;
        T = T*x*x;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %d", sum);
    return 0;
}