#include <stdio.h>
int main (){
    int n;
    float sum=0.0;
    printf("Nhap gia tri cua n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum += (1.0/i);
    } printf("Tong cua day so da cho la:%.2lf ",sum);
}
    
    
        