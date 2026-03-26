#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    switch(op) {
        case '+': printf("Hasil = %.2f\n", a + b); break;
        case '-': printf("Hasil = %.2f\n", a - b); break;
        case '*': printf("Hasil = %.2f\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Hasil = %.2f\n", a / b);
            else
                printf("Tidak bisa dibagi nol\n");
            break;
        default:
            printf("Operator tidak valid\n");
    }

    return 0;
}
