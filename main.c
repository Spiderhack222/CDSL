// Instalar extension de visual GDB
// Se hizo mas visual la salida

// Para indentar el codigo en visual studio code se usa la combinacion de teclas: Alt + Shift + F
#include <stdio.h>
#include "util.h"
#include "cola.h"

int main(void)
{

    int opcion, ID;
    struct nodo *cola = NULL, *nodo = NULL;

    do
    {
        opcion = menu();

        // Evaluar la opcion:

        /*
        1. Agregar
        2. Quitar
        3. Imprimir
        4. Salir,    Vaciar/Salir
        */

        // Imprimir opcion: Agregar la opcion
        // si pone una opcion diferente mayor que 4 poner opcion invalida

        switch (opcion)
        {
        case 1:
            printf("\n--- Insertar Nodo ---\n");
            scanf("%d", &ID);

            nodo = crear_nodo(ID);
            if (nodo == NULL)
            {
                printf("No se pudo reservar memoria para crear el nodo. \n");
            }
            else
            {
                insertar_nodo(&cola, nodo);
                printf("Nodo con ID %d ha sido agregado. \n", ID); // Imprime el nodo agregado
            }

            break;
        case 2:
            printf("\n--- Extraer Nodo ---\n");
            nodo = extraer_nodo(&cola);
            if (nodo == NULL)
            {
                printf("La cola esta vacia. No hay nodos para extraer. \n");
            }
            else
            {
                printf("Nodo con ID %d extraido. \n", nodo->ID); // Imprime el nodo extraido
            }
            eliminar_nodo(nodo);
            break;
        case 3:
            printf("\n--- Imprimir Cola ---\n");
            imprimir_cola(cola);
            break;
        case 4: // Funcion de vaciar cola a la hora de salir
            printf("\nVaciando la cola y saliendo...\n");
            vaciar_cola(&cola); // Llama a la funcion vaciar_cola de cola.c
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion no valida. Intente de nuevo.\n");
        }

    } while (opcion != 4); // Cambiar el valor de opciones

    return 0;
}
