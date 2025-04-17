#include <stdio.h>
#include <math.h>
int main() {
	double a,b,c,S,C,q;
	printf("Do dai 3 canh la: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	q =(a+b+c)/2;
	if (a + b > c && a + c > b && b + c > a) {
		printf("Day la 3 canh cua tam giac ");
		if (a==b && b==c && c==a) {
			printf("deu\n");
            printf("Chu vi cua tam giac do la: %lf\n",a+b+c);
            printf("Dien tich cua tam giac do la: %lf",sqrt(q*(q-a)*(q-b)*(q-c)));
		} else if(a==b || b==c || c==a) {
			printf("can\n");
			printf("Chu vi cua tam giac do la: %lf\n",a+b+c);
            printf("Dien tich cua tam giac do la: %lf",sqrt(q*(q-a)*(q-b)*(q-c)));
		} else if(a*a==b*b + c*c || b*b==a*a + c*c || c*c==a*a + b*b) {
			printf("vuong\n");
			printf("Chu vi cua tam giac do la: %lf\n",a+b+c);
            printf("Dien tich cua tam giac do la: %lf",sqrt(q*(q-a)*(q-b)*(q-c)));
		} else if(a*a==b*c + b*c || b*b==a*c + a*c || c*c==a*b + a*b) {
			printf("vuong can\n");
			printf("Chu vi cua tam giac do la: %lf\n",a+b+c);
            printf("Dien tich cua tam giac do la: %lf",sqrt(q*(q-a)*(q-b)*(q-c)));
		} else {
			printf("thuong\n");
			printf("Chu vi cua tam giac do la: %lf\n",a+b+c);
            printf("Dien tich cua tam giac do la: %lf",sqrt(q*(q-a)*(q-b)*(q-c)));
		}
	} else {
		printf("Day khong phai 3 canh cua tam giac\n");
	}
}
