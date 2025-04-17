#include <stdio.h>
int main() {
    int n, tong = 0;
    printf("Nhap so: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        if (n % i == 0) tong += i;
    if (tong == n)
        printf("%d la so hoan hao.\n", n);
    else
        printf("%d khong la so hoan hao.\n", n);
    return 0;
}
