#include <stdio.h>

// fungsi faktorial rekursif
int faktorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    int n, r, hasil;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    if(r > n) {
        printf("Error: r tidak boleh lebih besar dari n");
    } else {
        hasil = faktorial(n) / (faktorial(r) * faktorial(n - r));
        printf("Hasil nCr = %d", hasil);
    }

    return 0;
}
