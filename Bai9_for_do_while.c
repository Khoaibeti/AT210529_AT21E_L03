#include <stdio.h>

int main() {
    int n;
    double S = 1.0, giaiThua = 1.0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
        S += 1.0 / giaiThua;
    }
    printf("Tong S = %.6lf\n", S);
    return 0;
}
