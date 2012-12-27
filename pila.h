#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include <stdbool.h>

struct pila {
    double x;
    struct pila *sig;
};

struct pila *new_stack_element(void) {
    return malloc(sizeof(struct pila));
}

void ver_pila(struct pila *inicio) {
    putchar('\n');
    putchar('{');
    struct pila *aux = inicio;
    unsigned int n = 0;
    while(aux != NULL) {
        printf("\t%u: %lf\n", n++, aux->x);
        aux = aux->sig;
    }
    putchar('}');
    putchar('\n');
}

void push_l_element(struct pila **inicio, double valor) {
    struct pila *nuevo = new_stack_element();
    nuevo->x = valor;
    nuevo->sig = *inicio;
    *inicio = nuevo;
}

void push_r_element(struct pila **inicio, double valor) {
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

double *getCima(struct pila **inicio) {
    if(*inicio != NULL) {
        struct pila *aux = *inicio;
        while(aux->sig != NULL)
            aux = aux->sig;

        return &aux->x;

    } else
        return NULL;
}

void pop_l_element(struct pila **inicio) {
    struct pila *nuevo = new_stack_element();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
    free(nuevo);
}

double pop_r_element(struct pila **inicio) {

    if((*inicio)->sig == NULL)
        return (*inicio)->x;

    struct pila *ultimo = NULL;
    struct pila *aux = *inicio;

    while(aux->sig != NULL) {
        ultimo = aux;
        aux = aux->sig;
    }

    double r = aux->x;

    ultimo->sig = NULL;
    free(ultimo->sig);
    return r;

}

_Bool isEmpty_stack(struct pila *inicio) {
    return (inicio == NULL) ? true : false;
}

void liberar_pila(struct pila **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmpty_stack(*inicio))
        return;
    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmpty_stack(*inicio))
        pop_l_element(&*inicio);
}

#endif // PILA_H_INCLUDED
