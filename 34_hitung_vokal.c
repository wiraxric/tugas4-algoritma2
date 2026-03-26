#include <stdio.h>

int main() {
    char str[100];
    int i, vokal = 0;

    printf("Masukkan string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o'||
           str[i]=='A'||str[i]=='I'||str[i]=='U'||str[i]=='E'||str[i]=='O') {
            vokal++;
        }
    }

    printf("Jumlah huruf vokal = %d", vokal);

    return 0;
}
