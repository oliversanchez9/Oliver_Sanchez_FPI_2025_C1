#include <stdio.h>
#include <math.h>

int main(void) {
    int T, P, N;
    printf("Ingrese los valores de T, P y N: ");
    scanf("%d %d %d", &T, &P, &N);
    if (P != 0) {
        if (pow(T / P, N) == pow(T, N) / pow(P, N))
            printf("Se comprueba la igualdad\n");
        else
            printf("No se comprueba la igualdad\n");
    } else {
        printf("P debe ser diferente de cero\n");
    }
    return 0;
}
