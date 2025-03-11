#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int menu(void)
{

    int opcion;

    // Menu
    printf("\n============================\n");
    printf("         MENU PRINCIPAL     \n");
    printf("============================\n");
    printf(" 1. Agregar nodo            \n");
    printf(" 2. Quitar nodo             \n");
    printf(" 3. Imprimir cola           \n");
    printf(" 4. Salir                   \n");
    printf("============================\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}