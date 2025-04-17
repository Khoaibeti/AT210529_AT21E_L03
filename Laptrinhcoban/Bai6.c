/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, d, e, f, x, y;
	char OK,ok,Ok;
	printf ("Nhap cac gia tri cua phuong trinh tuyen tinh:\n");
	printf ("a = ");
	scanf ("%lf", &a);
	printf ("b = ");
	scanf ("%lf", &b);
    printf ("c = ");
    scanf ("%lf", &c);
    printf ("d = ");
    scanf ("%lf", &d);
    printf ("e = ");
    scanf ("%lf", &e);
    printf ("f = ");
    scanf ("%lf", &f);
    printf ("Xac nhan phuong trinh:\n %.2lfx + %.2lfy = %.2lf \n %.2lfx + %.2lfy = %.2lf\n",a,b,c,d,e,f);
    printf ("Gia tri cua x la: %.2lf\n",(c * e - b * f)/(a * e - b * d));
    printf ("Gia tri cua y la: %.2lf\n",(a * f - c * d)/(a * e - b * d));
}

