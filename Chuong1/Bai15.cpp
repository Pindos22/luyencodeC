//
// Created by huydo on 4/9/2024.
//Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=1;
    float sum=0;
    float T=0;
    do {
        T = T + i;
        sum = sum + 1/T;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %.2f", sum);
    return 0;
}