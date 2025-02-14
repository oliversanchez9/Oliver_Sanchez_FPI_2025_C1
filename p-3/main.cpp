#include <iostream>
#include <stdio.h>

int main(void) {
    int distancia, dias;
    float precio_billete;
    printf("Ingrese la distancia entre las ciudades (en km): ");
    scanf("%d", &distancia);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &dias);
    precio_billete = distancia * 2 * 0.19;
    if (dias > 10 && distancia * 2 > 500)
        precio_billete *= 0.8;
    printf("El precio del billete es: %.2f\n", precio_billete);
    return 0;
}
