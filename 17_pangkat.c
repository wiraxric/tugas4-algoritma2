#include <stdio.h>

int main() {
    int a, b;
    long long hasil = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &a);
    printf("Masukkan pangkat: ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        hasil *= a;
    }

    printf("Hasil = %lld\n", hasil);
    return 0;
}
