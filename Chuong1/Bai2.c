//
// Created by huydo on 4/9/2024.
//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    int i=1;
    int sum=0;
    do {
        sum = sum + i*i;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %d", sum);
    return 0;
}