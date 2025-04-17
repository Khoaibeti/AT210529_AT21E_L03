#include <stdio.h>
int main() {
    int N;
    double S = 0;
    printf("Nhap N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        S += 1.0 / i;
    printf("Tong S = %.4lf\n", S);
    return 0;
}
