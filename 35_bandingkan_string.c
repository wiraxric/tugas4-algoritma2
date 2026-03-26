#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, sama = 1;

    printf("Masukkan string pertama: ");
    gets(str1);

    printf("Masukkan string kedua: ");
    gets(str2);

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            sama = 0;
            break;
        }
        i++;
    }

    if(sama == 1)
        printf("Kedua string sama");
    else
        printf("Kedua string berbeda");

    return 0;
}
