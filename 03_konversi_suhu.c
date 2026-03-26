#include <stdio.h>

int main() {
    float c, f, r, k;

    printf("Masukkan suhu Celcius: ");
    scanf("%f", &c);

    f = (9.0/5.0) * c + 32;
    r = (4.0/5.0) * c;
    k = c + 273;

    printf("Fahrenheit = %.2f\n", f);
    printf("Reamur = %.2f\n", r);
    printf("Kelvin = %.2f\n", k);

    return 0;
}
