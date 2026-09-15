#include <stdio.h>

// PARTE A: Definicion de la estructura struct Proceso
struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja)
};
int main() {
    int n = 5;
    struct Proceso procesos[5];

    printf("===================================================\n");
    printf("   SISTEMAS OPERATIVOS IS-380 - SIMULADOR SCHEDULER\n");
    printf("   Estudiante: Fredy de la Cruz Huaraca\n");
    printf("===================================================\n\n");

    return 0;
}
