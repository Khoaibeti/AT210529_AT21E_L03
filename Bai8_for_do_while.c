#include <stdio.h>
int main() {
    int n;
    unsigned long long gt = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        gt *= i;
    printf("%d! = %llu\n", n, gt);
    return 0;
}
