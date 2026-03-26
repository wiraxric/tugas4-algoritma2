#include <stdio.h>

int main() {
    char str[100];
    int i, panjang = 0;

    printf("Masukkan string: ");
    gets(str);

    while(str[panjang] != '\0') {
        panjang++;
    }

    printf("String dibalik: ");
    for(i = panjang - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
