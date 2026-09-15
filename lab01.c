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

    return 0;
}


// PARTE A: Definicion de la estructura struct Proceso
struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja)
};

// PARTE C: Prototipo de funcion que recibe el arreglo mediante un puntero
int buscarMayorPrioridad(struct Proceso *procesos, int n);

int main() {
