#include <stdio.h>

int main() {
    int n, i, posisi;
    int arr[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Hapus posisi ke: ");
    scanf("%d", &posisi);

    for(i = posisi-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    n--;

    printf("Array setelah dihapus:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
