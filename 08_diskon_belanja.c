#include <stdio.h>

int main() {
    float total, diskon, bayar;

    printf("Masukkan total belanja: ");
    scanf("%f", &total);

    if (total > 100000)
        diskon = 0.1 * total;
    else
        diskon = 0;

    bayar = total - diskon;

    printf("Diskon = %.2f\n", diskon);
    printf("Total bayar = %.2f\n", bayar);

    return 0;
}
