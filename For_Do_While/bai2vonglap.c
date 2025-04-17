#include <stdio.h>

int main() {
int n;
int dem=0;
printf("Nhap gia tri cua n: ");
scanf("%d",&n);
for (int i=1; i<=n; i++){
    
    if  (n % i == 0){
        dem++;
    } 
}
if (dem==2){
        printf("Day la so nguyen to");
        
    } else {
        printf("Day khong phai so nguyen to");
    }
}