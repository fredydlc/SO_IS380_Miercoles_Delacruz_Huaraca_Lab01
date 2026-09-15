#include <stdio.h>

// PARTE A: Definicion de la estructura struct Proceso
struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja)
};

// PARTE C: Prototipo de funcion que recibe el arreglo mediante un puntero
int buscarMayorPrioridad(struct Proceso *procesos, int n);

int main() {
    int n = 5;
    struct Proceso procesos[5];

    printf("===================================================\n");
    printf("   SISTEMAS OPERATIVOS IS-380 - SIMULADOR SCHEDULER\n");
    printf("   Estudiante: Fredy de la Cruz huaraca\n");
    printf("===================================================\n\n");

    // PARTE B: Registro por consola de los procesos
    for (int i = 0; i < n; i++) {
        printf("--- Registro del Proceso [%d/5] ---\n", i + 1);
        printf("Ingrese PID: ");
        scanf("%d", &procesos[i].pid);
        printf("Ingrese Nombre del Proceso: ");
        scanf("%s", procesos[i].nombre);
        printf("Ingrese Prioridad (1: Alta - 5: Baja): ");
        scanf("%d", &procesos[i].prioridad);
        printf("\n");
    }

    // Invocacion de la funcion por puntero (Parte C)
    int idxGanador = buscarMayorPrioridad(procesos, n);

    // PARTE D: Presentacion ordenada del proceso ganador
    printf("===================================================\n");
    printf("  PROCESO GANADOR SELECCIONADO PARA EJECUTARSE (CPU)\n");
    printf("===================================================\n");
    printf("  - PID       : %d\n", procesos[idxGanador].pid);
    printf("  - Nombre    : %s\n", procesos[idxGanador].nombre);
    printf("  - Prioridad : %d (Mayor Prioridad)\n", procesos[idxGanador].prioridad);
    printf("===================================================\n");

    return 0;
}

// PARTE C: Logica de busqueda del proceso de mayor prioridad usando punteros
int buscarMayorPrioridad(struct Proceso *procesos, int n) {
    int indiceGanador = 0;
    for (int i = 1; i < n; i++) {
        if ((procesos + i)->prioridad < (procesos + indiceGanador)->prioridad) {
            indiceGanador = i;
        }
    }
    return indiceGanador;
}
