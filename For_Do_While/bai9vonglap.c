#include <stdio.h>
int main (){
    int n;
    int x=1;
    float sum=0;
    printf("Nhap gia tri cua n: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
       x=x*i;
       sum+= 1.0/x;
    }
    printf("Gia tri cua giai thua n! la: %d\n",x);
    printf("Tong cua phuong trinh da cho la: %f ",sum);
}
    
    