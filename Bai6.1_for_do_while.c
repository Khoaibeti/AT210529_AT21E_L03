#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);
    int gcd = ucln(a, b);
    int lcm = a * b / gcd;
    printf("UCLN = %d\nBCNN = %d\n", gcd, lcm);
    return 0;
}
