#include <stdio.h>

int main() {
    float r, luas, keliling;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;

    printf("Luas lingkaran = %.2f\n", luas);
    printf("Keliling lingkaran = %.2f\n", keliling);

    return 0;
}
