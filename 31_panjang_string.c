#include <stdio.h>

int main() {
    char str[100];
    int i, panjang = 0;

    printf("Masukkan string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        panjang++;
    }

    printf("Panjang string = %d", panjang);

    return 0;
}
