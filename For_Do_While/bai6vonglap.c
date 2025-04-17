#include <stdio.h>
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int BCNN(int a, int b) {
    return (a / UCLN(a, b)) * b;
}

int main() {
    int a, b;
    printf("Nhập hai số: ");
    scanf("%d %d", &a, &b);
    int ucln = UCLN(a, b);
    int bcnn = BCNN(a, b);
    printf("ƯCLN của %d và %d là: %d\n", a, b, ucln);
    printf("BCNN của %d và %d là: %d\n", a, b, bcnn);
    return 0;
}