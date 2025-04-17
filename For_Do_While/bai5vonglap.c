
#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số cần tìm ước: ");
    scanf("%d",&n);
    printf("Ước của số đã cho là: ");
    for (int i=1; i<=n; i++){
        if (n % i == 0){
            
            printf("%d ",i);
    }
    }
}
