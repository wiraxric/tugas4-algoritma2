#include <stdio.h>

int main() {
    float n1, n2, n3, rata;

    printf("Masukkan 3 nilai: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    rata = (n1 + n2 + n3) / 3;

    printf("Rata-rata = %.2f\n", rata);

    return 0;
}
