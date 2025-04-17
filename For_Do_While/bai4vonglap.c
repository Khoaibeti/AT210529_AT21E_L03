
#include <stdio.h>

int main()
{
    int tong=0;
    printf("Tổng các số lẻ từ 1 đến 100 là; ");
    for ( int i=1; i<100;i+=2 ){
        tong = tong +i;
    } 
    printf("%d",tong);
}