#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    float total = 0, rata;

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    rata = total / n;

    printf("Rata-rata = %.2f", rata);

    return 0;
}
