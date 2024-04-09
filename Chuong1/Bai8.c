//
// Created by huydo on 4/9/2024.
//Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=0;
    float sum=0;
    do {
        sum = sum + ((2*i) + 1)/((2*i) + 2);
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %0.2f", sum);
    return 0;
}