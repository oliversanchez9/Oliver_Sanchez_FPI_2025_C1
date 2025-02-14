#include <stdio.h>

int main(void) {
    float X, Y;
    printf("Ingrese el valor de Y: ");
    scanf("%f", &Y);
    if (Y < 0)
        X = 3 * Y + 5;
    else if (Y < 10)
        X = Y * Y + 2 * Y - 3;
    else
        X = Y + 6;
    printf("Para Y = %.2f, X = %.2f\n", Y, X);
    return 0;
}
