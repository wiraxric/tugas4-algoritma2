#include <stdio.h>

int main() {
    int n, jumlah = 0;

    printf("Masukkan n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        jumlah += i;
    }

    printf("Jumlah = %d\n", jumlah);
    return 0;
}
