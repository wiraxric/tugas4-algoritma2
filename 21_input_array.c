#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Input data ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Isi array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
