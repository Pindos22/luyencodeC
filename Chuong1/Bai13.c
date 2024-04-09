//
// Created by huydo on 4/9/2024.
//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so X: ");
    scanf("%d", &x);
    printf("Nhap so N: ");
    scanf("%d", &n);
    int i=1;
    int sum=0;
    int T=1;
    do {
        T = T*x*x;
        sum = sum + T;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %d", sum);
    return 0;
}