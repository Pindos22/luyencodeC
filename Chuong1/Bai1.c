//
// Created by huydo on 4/9/2024.
//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    int i=1;
    int sum=0;
    do {
        sum = sum + i;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %d", sum);
    return 0;
}