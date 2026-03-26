#include <stdio.h>

int main() {
    int n, i, cari, ketemu = 0;
    int arr[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Cari angka: ");
    scanf("%d", &cari);

    for(i = 0; i < n; i++) {
        if(arr[i] == cari) {
            printf("Data ditemukan di index %d\n", i);
            ketemu = 1;
        }
    }

    if(ketemu == 0) {
        printf("Data tidak ditemukan");
    }

    return 0;
}
