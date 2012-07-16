#ifndef WRITE_FUN_STRS_H_INCLUDED
#define WRITE_FUN_STRS_H_INCLUDED

struct cadenas {
    struct cadenas *sig;
    char *s;
};

struct cadenas *new_str(void) {
    return malloc(sizeof(struct cadenas));
}

void push_l_str(struct cadenas **inicio, char *valor) {
    struct cadenas *nuevo = new_str();
    nuevo->s = malloc(strlen(valor) + 1);
    strcpy(nuevo->s, valor);
    nuevo->sig = *inicio;
    *inicio = nuevo;
}

void pop_l_str(struct cadenas **inicio) {
    struct cadenas *nuevo = new_str();
    nuevo = *inicio;
    *inicio = (*inicio)->sig;
	free(nuevo->s);
    free(nuevo);
}

_Bool isEmpty_str(struct cadenas *inicio) {
    return inicio == NULL;
}

void liberar_str(struct cadenas **inicio) {
    /* Primero checar que la pila no esté vacía */
    if(isEmpty_str(*inicio))
        return;
    /* Si no está vacía, utilizar un método para eliminar cada nodo */
    /* Eliminamos por la izquierda todos los nodos */
    while(!isEmpty_str(*inicio))
        pop_l_str(&*inicio);
}

void write_strings(struct cadenas *inicio) {
	struct cadenas *aux = inicio;
	while(aux != NULL) {
		printf("%s", aux->s);
		aux = aux->sig;
	}
}

#endif
