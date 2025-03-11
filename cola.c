#include "cola.h"
#include "util.h"
#include <stdio.h>
#include <stdlib.h>

struct nodo *cola = NULL; // Definimos una cola global

// Funcion para crear nodo
struct nodo *crear_nodo(int ID)
{
    struct nodo *nodoap;
    nodoap = (struct nodo *)malloc(sizeof(struct nodo));
    if (nodoap != NULL)
    {
        nodoap->ID = ID;
        nodoap->siguiente = NULL;
    }

    return nodoap;
}

// Funcion para eliminar el nodo de la cola
void eliminar_nodo(struct nodo *nodo)
{
    free(nodo);
}

// Funcion para insertar nodo a la cola
void insertar_nodo(struct nodo **cola, struct nodo *nodo)
{
    struct nodo *actual;
    if (*cola == NULL)
    {
        *cola = nodo;
    }
    else
    {
        actual = *cola;
        while (actual->siguiente != NULL)
        {
            actual = actual->siguiente;
        }
        actual->siguiente = nodo;
    }
}

// Funcion para extraer nodo de la cola
struct nodo *extraer_nodo(struct nodo **cola)
{
    struct nodo *nodo;
    if (*cola == NULL)
        return NULL;

    nodo = *cola;
    *cola = (*cola)->siguiente;
    nodo->siguiente = NULL;
    return nodo;
}

// Funcion para imprimir cola
void imprimir_cola(struct nodo *cola)
{
    if (cola == NULL)
    {
        printf("->NULL. \n La cola esta vacia");
    }
    else
    {
        do
        {
            printf(" -> %d", cola->ID);
            cola = cola->siguiente;
        } while (cola != NULL);
        printf(" -> NULL \n");
    }
}

// Funcion para vaciar cola
void vaciar_cola(struct nodo **cola)
{
    struct nodo *temp;
    while (*cola != NULL)
    {
        temp = extraer_nodo(cola);
        printf("Nodo con ID %d ha sido eleminado correctamente. \n", temp->ID);
        eliminar_nodo(temp);
    }
    printf("Cola vaciada correctamente. \n");
}