//
// Created by huydo on 4/9/2024.
//Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=1;
    float sum=0;
    do {
        sum = sum + i/(i+1);
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %0.2f", sum);
    return 0;
}