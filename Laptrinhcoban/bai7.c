
#include <stdio.h>

int main(){
 double n;
 printf("Nhap diem so cua hoc sinh: ");
 scanf("%lf",&n);
 if (n<0 || n>10) {
     printf("Diem khong hop le vui long nhap lai diem");
 } else {
     if (n<5){
     printf("Xep loai: Hoc luc yeu");
     } else if (n >= 5 && n < 7) {
     printf("Xep loai: Hoc luc trung binh");
     } else if (n >= 7 && n < 8) {
     printf("Xep loai: Hoc luc kha");
     } else if (n >= 8 && n < 9) {
     printf("Xep loai: Hoc luc gioi");
     } else if (n >= 9 && n <= 10) {
     printf("Xep loai: Xuat sac");
     }
 }
}