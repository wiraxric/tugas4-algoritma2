#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Jumlah data: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array dibalik:\n");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
