#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan 3 angka: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Terbesar: %d\n", a);
    else if (b >= a && b >= c)
        printf("Terbesar: %d\n", b);
    else
        printf("Terbesar: %d\n", c);

    return 0;
}
