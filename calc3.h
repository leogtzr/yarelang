#ifndef CALC3_H_INCLUDED
#define CALC3_H_INCLUDED

#include "data_types.h"

typedef enum { 
	typeCon, 
	typeId,
	typeId2, 
	typeArray,			/* Tipo arreglo */
	typeOpr, 
	typeCadena,
	typeStrlen,			/* Regresa la longitud de una cadena */
	typeCall,
	typeSystem 			/* system("command"); */
} nodeEnum;

/* constants */
typedef struct {
	nodeEnum type;		/* type of node */
	double value;			/* value of constant */
	char cadena[1000];			/* value of constat string */
} conNodeType;

/* identifiers */
typedef struct {
	nodeEnum type;		/* type of node */
	/* La variable i puede ser de cualquier otro tipo, lo ponemos char para
		ahorrar espacio */
	char i;				/* subscript to ident array */
	/* FIXME Por ahora solo identificadores de no menos de 100 id's */
	char idArray[100];
	char identificador[100];
} idNodeType;

/* operators */
typedef struct {
	nodeEnum type;		/* type of node */
	int oper;			/* operator */
	short nops;			/* number of operands */
	union nodeTypeTag *op[5];	/* operands (expandable) */
} oprNodeType;

typedef union nodeTypeTag {
	nodeEnum type;			/* type of node */
	conNodeType con;		/* constants */
	idNodeType id;			/* identifiers */
	oprNodeType opr;		/* operators */
	enum data_type tipoDato;
} nodeType;

extern double sym[26];
extern char opVar[4];
extern struct palabras *identificadores;
extern struct funciones *idFunciones;
extern struct cadenas *writeStrings;
extern struct stack *pila;
extern struct _arrays *arreglos;
extern double val_temp;

#endif
