#include <stdio.h>

int main() {
    char str[100];
    int i, panjang = 0, cek = 1;

    printf("Masukkan string: ");
    gets(str);

    while(str[panjang] != '\0') {
        panjang++;
    }

    for(i = 0; i < panjang / 2; i++) {
        if(str[i] != str[panjang - i - 1]) {
            cek = 0;
            break;
        }
    }

    if(cek == 1)
        printf("Palindrome");
    else
        printf("Bukan palindrome");

    return 0;
}
