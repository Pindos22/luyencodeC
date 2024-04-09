//
// Created by huydo on 4/9/2024.
//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=1;
    float sum=0;
    float T=1;
    do {
        T = T * i;
        sum = sum + T;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %.0f", sum);
    return 0;
}