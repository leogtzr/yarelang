#ifndef SYMBOLS_H_INCLUDED
#define SYMBOLS_H_INCLUDED

#include <string.h>

struct palabras {
    /* El Identificador o nombre */
    char *id;
    /* El valor que contendrá el identificador */
    double longValue;

    struct palabras *sig;
	enum data_type tipoDato;
	/* FIXME:
		Se tiene que saber si la variable está definida dentro de
		una función */
	_Bool inFunction;

};

struct palabras *new(void) {
    return malloc(sizeof(struct palabras));
}

void push_l(struct palabras **inicio, char *valor) {
    struct palabras *nuevo = new();
    nuevo->id = malloc(strlen(valor) + 1);
    strcpy(nuevo->id, valor);
    nuevo->sig = *inicio;
    *inicio = nuevo;
}

void push_r(struct palabras **inicio, char *valor) {
    /* Si la pila está vacía usamos el otro método que es más sencillo */
    if(*inicio == NULL) {
        push_l(&*inicio, valor);
        return;
    }
    struct palabras *aux = *inicio;
    /* Para quedarnos en el penúltimo elemento */
    while(aux->sig != NULL)
        aux = aux->sig;
    aux->sig = new();
    aux->sig->id = malloc(strlen(valor) + 1);
    strcpy(aux->sig->id, valor);
}

void pop_l(struct palabras **inicio) {
    struct palabras *nuevo = new();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
	free(nuevo->id);
    free(nuevo);
}

_Bool isEmpty(struct palabras *inicio) {
    return (inicio == NULL);
}

void liberar(struct palabras **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmpty(*inicio))
        return;

    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmpty(*inicio))
        pop_l(&*inicio);
}

/* La siguiente función devuelve un 0 si el char *identificador s
    encuentra en la lista dada */
short int buscar(struct palabras *inicio, char *s) {
    struct palabras *aux = inicio;
    while(aux != NULL) {
        if(strcmp(aux->id, s) == 0)
            return 1;
            aux = aux->sig;
    }
    return 0;
}

/* La siguiente función asigna un valor (long double) al identificador indicado
    regresa un 1 si se asignó correctamente, un 0 sino se encontró
    el identificador indicado */
int asignar(struct palabras **inicio, char *s, double value) {
    struct palabras *aux = *inicio;
    while(aux != NULL) {
        /* Si los identificadores coinciden */
        if(strcmp(aux->id, s) == 0) {
            aux->longValue = value;
            return value;
        }
        aux = aux->sig;
    }
    return -1;
}

/*	La siguiente función asigna el tipo de dato indicado al 
	enumerador "tipoDato" 
*/
int asignarTipo(struct palabras **inicio, const char *s, short tipo) {
	struct palabras *aux = *inicio;
	while(aux != NULL) {
		/* Si los identificadores coinciden */
        if(strcmp(aux->id, s) == 0) {
			aux->tipoDato = tipo;
            return tipo;
        }
		aux = aux->sig;
	}
	return 0;
}

double getValue(struct palabras *inicio, char *s) {
    struct palabras *aux = inicio;
    while(aux != NULL) {
        if(strcmp(aux->id, s) == 0)
            return aux->longValue;
        aux = aux->sig;
    }
    return -1.0;
}

void delete(struct palabras **inicio, char *s) {
    if(strcmp((*inicio)->id, s) == 0) {
        struct palabras *temp = *inicio;
        *inicio = (*inicio)->sig;
		free(temp->id);
        free(temp);
        return;
    }

    struct palabras *hold = *inicio;
    while(hold->sig->sig != NULL) {
        if(strcmp(hold->sig->id, s) == 0) {
            struct palabras *temp = hold->sig;
            hold->sig = temp->sig;
            free(temp);
            return;
        }
        hold = hold->sig;
    }

    if(strcmp(hold->sig->id, s) == 0) {
        struct palabras *temp = hold->sig;
        free(temp);
        hold->sig = NULL;
        return;
    }
    puts("Data not found.");
}

#endif // SYMBOLS_H_INCLUDED

