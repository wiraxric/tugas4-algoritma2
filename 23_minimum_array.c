#include <stdio.h>

int main() {
    int n, i, min;
    int arr[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Nilai minimum = %d", min);

    return 0;
}
