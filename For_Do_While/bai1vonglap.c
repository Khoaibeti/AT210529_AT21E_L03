#include <stdio.h>

int main() {
int n;
int t=0;
for (int i=0; i<100;i++){
    if (i==10) {
        break;
    }
    printf("Nhap gia tri cua so nguyen can tinh tong: ");
    scanf("%d",&n);
    t = t + n;
}
    printf("Tong = %d",t);
    return 0;
}