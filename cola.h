#ifndef _Cola_H_

#define _Cola_H_

// Prototipos

struct nodo
{
    int ID;
    struct nodo *siguiente;
};

struct nodo *crear_nodo(int); // Reservar espacio de memoria para una instancia de una estructura de tipo struct nodo

void eliminar_nodo(struct nodo *); // Liberar la memoria de la direccion indicada

void insertar_nodo(struct nodo **, struct nodo *); // Agregar o insertar el nuevo nodo al final de la estructura

struct nodo *extraer_nodo(struct nodo **); // Extraer el primer elemento de la estructura

void imprimir_cola(struct nodo *); // Imprime la cola

void vaciar_cola(struct nodo **cola); // Vacia la cola y termina el programa

#endif