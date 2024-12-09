#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    unsigned long long result = factorial(number);
    if (result == 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
    } else {
        printf("Giai thua cua %d la: %llu\n", number, result);
    }

    return 0;
}
