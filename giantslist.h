#ifndef _GIANGLIST_H
#define _GIANGLIST_H

#include <string.h>
#include <gmp.h>
#include <stdbool.h>

struct gigante {
	char *id;
	mpf_t gig;
	struct gigante *sig;
};

struct gigante *new_giant(void) {
    return malloc(sizeof(struct gigante));
}

void ver_gigantes(struct gigante *inicio) {
	struct gigante *aux = inicio;
	putchar('{');
	putchar('\n');
	while(aux != NULL) {
		printf("\t[%s] -> ", aux->id);
        gmp_printf("[%F.*f]\n", 30, aux->gig);
		aux = aux->sig;
	}
	putchar('}');
}

struct gigante *get_gigante(struct gigante **inicio, char *str_id) {
    struct gigante *aux = *inicio;
    while(aux != NULL) {
        if(strcmp(aux->id, str_id) == 0) {
            return aux;
        }
        aux = aux->sig;
    }
    return NULL;
}

_Bool isEmpty_g(struct gigante *inicio) {
    return (inicio == NULL);
}

void pop_l_g(struct gigante **inicio) {
    struct gigante *nuevo = new_giant();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
	free(nuevo->id);
    free(nuevo);
    /* Liberar los gigantes: */
    mpf_clear(nuevo->gig);
}

void liberar_gigantes(struct gigante **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmpty_g(*inicio))
        return;
    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmpty_g(*inicio))
        pop_l_g(&*inicio);
}

void push_l_g(struct gigante **inicio, char *str_id, char *str_valor) {
    struct gigante *nuevo = new_giant();
    nuevo->id = malloc(strlen(str_id) + 1);
    strcpy(nuevo->id, str_id);

    mpf_init(nuevo->gig);
    mpf_set_str(nuevo->gig, str_valor, 10);
    nuevo->sig = *inicio;
    *inicio = nuevo;
}

void push_r_g(struct gigante **inicio, char *str_id, char *str_valor) {
    /* Si la pila está vacía usamos el otro método que es más sencillo */
    if(*inicio == NULL) {
        push_l_g(&*inicio, str_id, str_valor);
        return;
    }
    struct gigante *aux = *inicio;
    /* Para quedarnos en el penúltimo elemento */
    while(aux->sig != NULL)
        aux = aux->sig;

    aux->sig = new_giant();
    aux->sig->id = malloc(strlen(str_id) + 1);
    strcpy(aux->sig->id, str_id);

    mpf_init(aux->sig->gig);
    mpf_set_str(aux->sig->gig, str_valor, 10);
}

_Bool buscar_gigante(struct gigante *inicio, char *s) {
    struct gigante *aux = inicio;
    while(aux != NULL) {
        if(strcmp(aux->id, s) == 0)
            return true;
        aux = aux->sig;
    }
    return false;
}

#endif
