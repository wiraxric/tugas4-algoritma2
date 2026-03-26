#include <stdio.h>

int main() {
    int tahun;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
        printf("Tahun Kabisat\n");
    else
        printf("Bukan Tahun Kabisat\n");

    return 0;
}
