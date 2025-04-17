#include <stdio.h>

int main() {
    double A, tien;
    int thang = 0;
    printf("Nhap so tien ban dau (VND): ");
    scanf("%lf", &A);
    tien = A;
    while (tien <= 2 * A) {
        tien += tien * 0.0045;  // 0.45% mỗi tháng
        thang++;
    }
    printf("Sau %d thang, tien tiet kiem > 2 lan so tien ban dau.\n", thang);
    printf("So tien luc do: %.2lf VND\n", tien);
    return 0;
}
