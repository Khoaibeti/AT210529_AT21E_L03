#include <stdio.h>

int main() {
    int i = 1, tong = 0;

    while (i < 100) {
        if (i % 2 != 0) {
            tong += i;
        }
        i++;
    }

    printf("Tong cac so le < 100 la: %d\n", tong);
    return 0;
}
