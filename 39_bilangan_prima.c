#include <stdio.h>

int prima(int n) {
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    if(prima(n))
        printf("Bilangan prima");
    else
        printf("Bukan bilangan prima");

    return 0;
}
