#include<stdio.h>

int main() {
    int a, b, c;
    printf("Nhap du lieu cua ngay, thang va nam: ")
    scanf("%d %d %d", &a, &b, &c);
    if (a==29 && b==2 && c%4!=0){
        printf("So ngay khong hop le vui long nhap lai");
    } else if (a== 0 || b==0){
        printf("So ngay khong hop le vui long nhap lai");
    } else if (a>=32 && b>=13){
         printf("So ngay khong hop le vui long nhap lai");
    } else if (a>=30 && b==2){
         printf("So ngay khong hop le vui long nhap lai");
    } else {
    printf("Hom nay la ngay: %d/%d/%d", a, b, c);
}
}
