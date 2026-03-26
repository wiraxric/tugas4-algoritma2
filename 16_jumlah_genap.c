#include <stdio.h>

int main() {
    int n, jumlah = 0;

    printf("Masukkan batas: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            jumlah += i;
    }

    printf("Jumlah genap = %d\n", jumlah);
    return 0;
}
