#include<stdio.h>

int main() {
    float r;
    printf("Nhap gia tri cua ban kinh: );
    scanf("%f", &r);
    if (r<0){
        printf("Gia tri ban kinh khong hop le vui long nhap lai");
    } else {
    printf("S = %f\n", 4 * 3.14 * r * r);
    printf("V = %f", 4 / 3 * 3.14 * r * r * r);
    }
}

