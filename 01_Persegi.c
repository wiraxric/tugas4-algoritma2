#include <stdio.h>

int main() {
    float sisi, luas, keliling;

    // Input
    printf("Masukkan panjang sisi: ");
    scanf("%f", &sisi);

    // Proses
    luas = sisi * sisi;
    keliling = 4 * sisi;

    // Output
    printf("Luas persegi = %.2f\n", luas);
    printf("Keliling persegi = %.2f\n", keliling);

    return 0;
}
