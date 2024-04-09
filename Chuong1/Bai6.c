//
// Created by huydo on 4/9/2024.
//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    float i=1;
    float sum=0;
    do {
        sum = sum + 1/(i*(i+1));
        i++;
    } while (i<=n);
    printf("Tong S(n) la: %0.2f", sum);
    return 0;
}