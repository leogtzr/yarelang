#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include <stdbool.h>

struct stack {
    /* FIXME Hay que cambiar el tipo de dato */
    long long x;
    struct stack *sig;
};

struct stack *new_element(void) {
    return malloc(sizeof(struct stack));
}

void push_l_element(struct stack **inicio, long long valor) {
    struct stack *nuevo = new_element();
    nuevo->x = valor;
    nuevo->sig = *inicio;
    *inicio = nuevo;
}

void push_r_element(struct stack **inicio, long long valor) {
    /* Si la pila está vacía usamos el otro método que es más sencillo */
    if(*inicio == NULL) {
        push_l_element(&*inicio, valor);
        return;
    }

    struct stack *aux = *inicio;

    /* Para quedarnos en el penúltimo elemento */
    while(aux->sig != NULL)
        aux = aux->sig;

    aux->sig = new_element();
    aux->sig->x = valor;
}

void pop_l_element(struct stack **inicio) {
    struct stack *nuevo = new_element();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
    free(nuevo);
}

long long pop_r_element(struct stack **inicio) {

    if(*inicio == NULL)
        return 0;
    else if((*inicio)->sig == NULL) {
        long long r = (*inicio)->x;
        pop_l_element(&*inicio);
        return r;
    }

    struct stack *ultimo = NULL;
    struct stack *aux = *inicio;

    while(aux->sig != NULL) {
        ultimo = aux;
        aux = aux->sig;
    }

    long long r = aux->x;

    ultimo->sig = NULL;
    free(ultimo->sig);
    return r;

}

_Bool isEmpty_stack(struct stack *inicio) {
    return (inicio == NULL) ? true : false;
}

void liberar_stack(struct stack **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmpty_stack(*inicio))
        return;
    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmpty_stack(*inicio))
        pop_l_element(&*inicio);
}

void ver_pila(struct stack *pila) {
	struct stack *aux = pila;

	while(aux != NULL) {
		printf("[%lld]", aux->x);
		aux = aux->sig;
	}
}

#endif // PILA_H_INCLUDED
