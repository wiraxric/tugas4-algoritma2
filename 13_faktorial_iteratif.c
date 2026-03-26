#include <stdio.h>

int main() {
    int n;
    long long faktorial = 1;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    printf("Faktorial = %lld\n", faktorial);
    return 0;
}
