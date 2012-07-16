#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

#include <string.h>
#include <stdlib.h>

struct _arrays {
    char *id_array;
    unsigned int n_size;
    double *arrayValue;
    struct _arrays *sig;
};

struct _arrays *new_array(void) {
    return malloc(sizeof(struct _arrays));
}

/* Crear el array e inicializar */
void create_array(struct _arrays **inicio, char *s, unsigned int n) {

    struct _arrays *nuevo = new_array();
    nuevo->id_array = malloc(strlen(s) + 1);
    strcpy(nuevo->id_array, s);

    nuevo->n_size = n;
    nuevo->arrayValue = malloc(sizeof(double) * n);
    if(nuevo->arrayValue == NULL) {
        fprintf(stderr, "No hay espacio suficiente en memoria.");
        exit(EXIT_FAILURE);
    }

    unsigned i;
    for(i = 0; i < n; i++) {
        nuevo->arrayValue[i] = 0.0f;
	}	

    nuevo->sig = *inicio;
    *inicio = nuevo;
}

double *getElement(struct _arrays *inicio, char *s, int position) {
	struct _arrays *auxp = inicio;

	while(auxp != NULL) {
		if(strcmp(s, auxp->id_array) == 0) {
			/*printf("Obtenido %lf\n", auxp->arrayValue[position]);*/
			return auxp->arrayValue;
		}
		auxp = auxp->sig;
	}
	return NULL;
}

unsigned getMaxSize(struct _arrays *inicio, char *s) {
    struct _arrays *aux = inicio;

    while(aux != NULL) {
        if(strcmp(inicio->id_array, s) == 0)
            return aux->n_size;
        aux = aux->sig;
    }

    return 0;

}

void pop_l_array(struct _arrays **inicio) {
    struct _arrays *nuevo = new_array();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
	free(nuevo->id_array);
	free(nuevo->arrayValue);
    free(nuevo);
}

_Bool isEmptyArrays(struct _arrays *inicio) {
    return (inicio == NULL);
}

void liberar_array(struct _arrays **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmptyArrays(*inicio))
        return;

    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmptyArrays(*inicio))
        pop_l_array(&*inicio);
}

void ver_arrays(struct _arrays *inicio) {

    struct _arrays *aux = inicio;

    while(aux != NULL) {
        printf("'%s'->{\n\t", aux->id_array);
        unsigned i;
        for(i = 0; i < aux->n_size; i++)
            printf("[%lf]", aux->arrayValue[i]);
        putchar('\n');
        putchar('}');
        putchar('\n');
        aux = aux->sig;
    }
}

double *asign_array(struct _arrays **inicio, char *s, unsigned pos, double val) {
    struct _arrays *aux_ = *inicio;
    while(aux_ != NULL) {
        if(strcmp(aux_->id_array, s) == 0) {
			return aux_->arrayValue;
        }
        aux_ = aux_->sig;
    }
	return NULL;
}

double getValueArray(struct _arrays *inicio, char *s, unsigned pos) {
    struct _arrays *aux = inicio;

    while(aux != NULL) {
        if(strcmp(aux->id_array, s) == 0) {
			double pedos = aux->arrayValue[pos];
			/*printf("Devolver %lf\n", pedos);*/
            return pedos;
		}
        aux = aux->sig;
    }

    return 0.0f;
}

double array_pos(struct _arrays *inicio, char *s, unsigned pos) {
	struct _arrays *aux = inicio;

	double result = 0.0f;

	while(aux != NULL) {
		if(strcmp(aux->id_array, s) == 0) {
			result = aux->arrayValue[pos];
			val_temp = result;
			printf("|%lf|\n", val_temp);
			break;
		}
		aux = aux->sig;
	}	
	return val_temp;
}

unsigned short buscarArray(struct _arrays *inicio, char *s) {
    struct _arrays *aux = inicio;
    while(aux != NULL) {
        if(strcmp(inicio->id_array, s) == 0)
            return 1;
        aux = aux->sig;
    }
    return 0;
}

void ver_arreglos(struct _arrays *inicio) {
	struct _arrays *aux = inicio;
	putchar('\n');
	while(aux != NULL) {
		printf("{%s|%u}", aux->id_array, aux->n_size);
		aux = aux->sig;
	}
	putchar('\n');
}

#endif

