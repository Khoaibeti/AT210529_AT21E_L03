#include <stdio.h>

int main() {
    int thang,nam;
    printf("Nhap lan luot gia tri cua thang va nam:"); 
    scanf("%d %d",&thang,&nam);
    if (nam % 4 ==0){
        if (thang == 1){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 2){
        printf( "Thang %d Nam %d co 29 ngay",thang,nam );
        } else if (thang == 3){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 4){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 5){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 6){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 7){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 8){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 9){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 10){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 11){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 12){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else {
            printf("So thang khong hop le vui long nhap lai");
        }
    } else {
   if (thang == 1){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 2){
        printf( "Thang %d Nam %d co 28 ngay",thang,nam );
        } else if (thang == 3){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 4){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 5){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 6){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 7){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 8){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 9){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 10){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else if (thang == 11){
        printf( "Thang %d Nam %d co 30 ngay",thang,nam );
        } else if (thang == 12){
        printf( "Thang %d Nam %d co 31 ngay",thang,nam );
        } else {
            printf("So thang khong hop le vui long nhap lai");
        }
    }
    
    return 0;
}