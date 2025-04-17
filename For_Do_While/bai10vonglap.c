#include <stdio.h>

long long fibonacci_iterative(int n) {
    long long a = 0, b = 1, temp;
    for (int i = 0; i < n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    printf("So Fibonacci thu %d la: %lld\n", n, fibonacci_iterative(n));
    return 0;
}

