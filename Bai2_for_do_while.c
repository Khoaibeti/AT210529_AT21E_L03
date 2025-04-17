#include <stdio.h>
int main() {
    int n, i, p = 1;
    printf("Nhap so: ");
    scanf("%d", &n);
    if (n <= 1) p = 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            p = 0;
            break;
        }
    }
    if (p)
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai so nguyen to.\n", n);
    return 0;
}
