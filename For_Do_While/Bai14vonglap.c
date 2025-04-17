#include <stdio.h>

int main() {
    double gdp2014, rate, gdp;
    int year = 2014;
    printf("Nhap GDP nam 2014 (ty USD): ");
    scanf("%lf", &gdp2014);
    printf("Nhap toc do tang truong hang nam (%%): ");
    scanf("%lf", &rate);
    printf("\n%-10s%-10s\n", "Nam", "GDP");
    gdp = gdp2014;
    while (gdp <= 2 * gdp2014) {
        printf("%-10d%.2lf\n", year, gdp);
        gdp += gdp * rate / 100.0;
        year++;
    }
    return 0;
}
