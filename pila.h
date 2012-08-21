#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include <stdbool.h>

struct pila {
    /* FIXME Hay que cambiar el tipo de dato */
    long long x;
    struct pila *sig;
};

struct pila *new_stack_element(void) {
    return malloc(sizeof(struct pila));
}

void push_l_element(struct pila **inicio, long long valor) {
    struct pila *nuevo = new_stack_element();
    nuevo->x = valor;
    nuevo->sig = *inicio;
    *inicio = nuevo;
}

void push_r(struct pila **inicio, long long valor) {
    /* Si la pila está vacía usamos el otro método que es más sencillo */
    if(*inicio == NULL) {
        push_l_element(&*inicio, valor);
        return;
    }

    struct pila *aux = *inicio;

    /* Para quedarnos en el penúltimo elemento */
    while(aux->sig != NULL)
        aux = aux->sig;

    aux->sig = new_stack_element();
    aux->sig->x = valor;
}

void pop_l_element(struct pila **inicio) {
    struct pila *nuevo = new_stack_element();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
    free(nuevo);
}

long long pop_r_element(struct pila **inicio) {

    if((*inicio)->sig == NULL)
        return (*inicio)->x;

    struct pila *ultimo = NULL;
    struct pila *aux = *inicio;

    while(aux->sig != NULL) {
        ultimo = aux;
        aux = aux->sig;
    }

    long long r = aux->x;

    ultimo->sig = NULL;
    free(ultimo->sig);
    return r;

}

_Bool isEmpty_stack(struct pila *inicio) {
    return (inicio == NULL) ? true : false;
}

void liberar_stack(struct pila **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmpty_stack(*inicio))
        return;
    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmpty_stack(*inicio))
        pop_l_element(&*inicio);
}

#endif // PILA_H_INCLUDED
