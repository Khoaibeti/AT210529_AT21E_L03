#include <stdio.h>
int main (){
    int n;
    int sum=0;
    scanf("%d",&n);
    if (n>0){
    for (int uoc=1;uoc<=n;uoc++){
        if (n % uoc == 0){
            sum += uoc;
        }
    }
    if (sum == n*2 ){
        printf("Day la so hoan hao");
    } else {
        printf("Day deo phai so hoan hao");
    }
} else {
    printf("Ngu");
}
}
