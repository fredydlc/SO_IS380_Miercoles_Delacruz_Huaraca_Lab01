#include <stdio.h>

// Version A: Sin puntero (Paso por valor)
void intercambiarValor(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Version B: Con puntero (Paso por referencia)
void intercambiarPuntero(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Antes: x = %d, y = %d\n", x, y);

    intercambiarValor(x, y);
    printf("Sin puntero (Valor): x = %d, y = %d (NO cambio)\n", x, y);

    intercambiarPuntero(&x, &y);
    printf("Con puntero (Referencia): x = %d, y = %d (SI cambio)\n", x, y);

    return 0;
}
