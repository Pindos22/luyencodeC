//
// Created by huydo on 4/9/2024.
//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=1;
    float sum=0;
    do {
        sum = sum + 1/i;
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %0.2f", sum);
    return 0;
}
