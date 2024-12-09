#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Nh?p s? th? nh?t: ");
    scanf("%d", &num1);
    printf("Nh?p s? th? hai: ");
    scanf("%d", &num2);
    int result = sum(num1, num2);
    printf("T?ng là: %d\n", result);
    return 0;
}
