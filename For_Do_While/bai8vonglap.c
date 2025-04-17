#include <stdio.h>
int main (){
    int n;
    int x=1;
    printf("Nhap gia tri cua n: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
       x=x*i;
    }
    printf("Gia tri cua giai thua n! la: %d",x);
}
    
    