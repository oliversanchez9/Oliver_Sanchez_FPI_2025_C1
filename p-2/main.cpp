#include <iostream>
#include <stdio.h>

int main(void)
 {
    float precio;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    if (precio < 1500.0)
        precio *= 1.11;
    else
        precio *= 1.08;
    printf("El nuevo precio del producto es: %.2f\n", precio);
    return 0;
}
