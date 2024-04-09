//
// Created by huydo on 4/9/2024.
//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so X: ");
    scanf("%d", &x);
    printf("Nhap so N: ");
    scanf("%d", &n);
    int i=1;
    int sum=0;
    int T=0;
    do {
        T = T + i;

        i++;
    } while (i<=n);
    printf("Tong S(n) la: %d", sum);
    return 0;
}