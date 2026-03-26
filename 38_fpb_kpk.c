#include <stdio.h>

int fpb(int a, int b) {
    if(b == 0)
        return a;
    else
        return fpb(b, a % b);
}

int main() {
    int a, b, hasil_fpb, hasil_kpk;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    hasil_fpb = fpb(a, b);
    hasil_kpk = (a * b) / hasil_fpb;

    printf("FPB = %d\n", hasil_fpb);
    printf("KPK = %d", hasil_kpk);

    return 0;
}
