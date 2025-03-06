/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    
    printf("Hay nhap gia tri lan luot cua a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) {
        printf("Phuong trinh co vo so nghiem\n");
        return 0;
    }

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh co mot nghiem: x = %lf\n", -c / b);
        }
        return 0;
    }
    delta = b * b - 4 * a * c;
    printf("Delta = %lf\n", delta);
    if (delta > 0) {
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %lf\n", (-b + sqrt(delta)) / (2 * a));
        printf("x2 = %lf\n", (-b - sqrt(delta)) / (2 * a));
    } else if (delta == 0) {
        printf("Phuong trinh co nghiem kep: x = %lf\n", -b / (2 * a));
    } else {
        printf("Phuong trinh vo nghiem\n");
    }

    return 0;
}