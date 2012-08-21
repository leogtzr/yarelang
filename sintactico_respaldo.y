/* @Añadir comentarios */
/* Añadir números decimales */
/* Ver si metemos a ncurses */
/* Soporte para strings */
/* Final para el programa */
/* Caracteres de escape */
/* Español? */
/* Variables de entorno */
/* Operador variable */
/* swap */

%{
	#include	<stdio.h>
	#include	<stdlib.h>
	#include	<stdarg.h>
	#include	"calc3.h"
	#include 	<string.h>
	
	/* prototypes */
	nodeType *opr(int oper, int nops, ...);
	nodeType *id(int i);
	nodeType *con(int value);
	nodeType *conStr(char value[], int type);
	void freeNode(nodeType *p);
	
	void yyerror(char *s); 
	int sym[26]; /* symbol table */
	char opVar[4];
%} 

%union { 
	int iValue; 		/* integer value */
	char sIndex;		/* symbol table index */ 
	char cadena[1000];
	nodeType *nPtr; 	/* node pointer */
}; 

%token <iValue> INTEGER
%token <sIndex> VARIABLE
%token <cadena> CADENA 
%token WHILE IF PRINT NOP RAND INITRAND INCR DECR DO READ ASIGNACION_PASCAL LETSET TO MOVE MOVASM ADDASM
%token	SUBASM SWAP SHIFTLEFT SHIFTRIGHT PUTS STRLEN 
/* Operadores de asignación abreviados */
%token ASIGN_ADD ASIGN_SUB ASIGN_MUL ASIGN_DIV ASIGN_MOD ASIGN_SHIFTLEFT ASIGN_SHIFTRIGHT ASIGN_AND ASIGN_OR
/* Opvar tokens: */
%token OPVAR OPVAR_ADD OPVAR_SUB OPVAR_MUL OPVAR_DIV OPVAR_POW 
/* Smileys */
%token FACE_HAPPY FACE_SAD FACE_NO
/* Tokens relacionados con la gramática */ 
%token PRINCIPIO 
%nonassoc IFX
%nonassoc ELSE

%left GE LE EQ NE '>' '<' AND OR ANDBITS ORBITS
%left '+' '-'
%left '*' '/'
%left '^'
%nonassoc UMINUS NEGACION 

%type <nPtr> stmt expr stmt_list 

%%

program:
	PRINCIPIO cuerpo '.'	{ exit(EXIT_SUCCESS); }
	;

cuerpo:
	cuerpo stmt		{ ex($2); freeNode($2); }
	| /* NULL */
	;

stmt:
	';'									{ $$ = opr(';', 2, NULL, NULL); }
	| expr ';' 							{ $$ = $1; }
	| PRINT	'(' expr ')'';' 			{ $$ = opr(PRINT, 1, $3); }
	| RAND	expr ';'					{ $$ = opr(RAND, 1, $2); }
	| NOP ';'							{ $$ = opr(NOP, 0); }
	| READ '(' VARIABLE ')'';'			{ $$ = opr(READ, 1, id($3)); 
/*	freopen("pedis", "r", stdin);*/
}
	| PUTS '(' CADENA ')'';'			{ $$ = opr(PUTS, 1, conStr($3,typeCadena)); }
	| VARIABLE '=' expr ';' 			{ $$ = opr('=', 2, id($1), $3); }
	| VARIABLE '=' '?'';'				{ $$ = opr(INITRAND, 1, id($1)); }
	| VARIABLE '=' FACE_HAPPY ';'		{ $$ = opr(FACE_HAPPY, 1, id($1)); }
	| VARIABLE '=' FACE_SAD ';'			{ $$ = opr(FACE_SAD, 1, id($1)); }
	| VARIABLE '=' FACE_NO ';'			{ $$ = opr(FACE_NO, 1, id($1)); }
	| VARIABLE ASIGN_ADD expr ';'		{ $$ = opr(ASIGN_ADD, 2, id($1), $3); }
	| VARIABLE ASIGN_SUB expr ';'		{ $$ = opr(ASIGN_SUB, 2, id($1), $3); }
	| VARIABLE ASIGN_MUL expr ';'       { $$ = opr(ASIGN_MUL, 2, id($1), $3); } 
	| VARIABLE ASIGN_DIV expr ';'		{ $$ = opr(ASIGN_DIV, 2, id($1), $3); }
	| VARIABLE ASIGN_MOD expr ';'		{ $$ = opr(ASIGN_MOD, 2, id($1), $3); }
	| VARIABLE ASIGN_SHIFTLEFT expr ';'	{ $$ = opr(ASIGN_SHIFTLEFT, 2, id($1), $3); }
	| VARIABLE ASIGN_SHIFTRIGHT expr ';'{ $$ = opr(ASIGN_SHIFTRIGHT, 2, id($1), $3); }
	| VARIABLE ASIGN_AND expr ';'		{ $$ = opr(ASIGN_AND, 2, id($1), $3); }
	| VARIABLE ASIGN_OR expr ';'		{ $$ = opr(ASIGN_OR, 2, id($1), $3); }
	| VARIABLE ASIGNACION_PASCAL expr ';' { $$ = opr(ASIGNACION_PASCAL, 2, id($1), $3); }
	| LETSET VARIABLE '=' expr ';'		{ $$ = opr(LETSET, 2, id($2), $4); }
	| LETSET VARIABLE TO expr ';'		{ $$ = opr(LETSET, 2, id($2), $4); }
	| MOVE expr TO VARIABLE ';'			{ $$ = opr(MOVE, 2, $2, id($4)); }
	| MOVASM VARIABLE ',' expr ';'		{ $$ = opr(MOVASM, 2, id($2), $4); }
	| ADDASM VARIABLE ',' expr ';'		{ $$ = opr(ADDASM, 2, id($2), $4); }
	| SUBASM VARIABLE ',' expr ';'		{ $$ = opr(SUBASM, 2, id($2), $4); }
	| VARIABLE SWAP VARIABLE ';'		{ $$ = opr(SWAP, 2, id($1), id($3)); }
	| OPVAR '=''+'';'					{ $$ = opr(OPVAR_ADD, 0); }
	| OPVAR '=''-'';'					{ $$ = opr(OPVAR_SUB, 0); }
	| OPVAR '=''*'';'					{ $$ = opr(OPVAR_MUL, 0); }
	| OPVAR '=''/'';'					{ $$ = opr(OPVAR_DIV, 0); }
	| OPVAR '=''^'';'					{ $$ = opr(OPVAR_POW, 0); }
	| VARIABLE '+''@'';'				{ $$ = opr(INCR, 1, id($1)); }
	| VARIABLE '-''@'';'				{ $$ = opr(DECR, 1, id($1)); }
	| WHILE	'(' expr ')' stmt			{ $$ = opr(WHILE, 2, $3, $5); }
	| IF '(' expr ')'	stmt %prec	IFX	{ $$ = opr(IF, 2, $3, $5); }
	| IF '(' expr ')' stmt ELSE stmt	{ $$ = opr(IF, 3, $3, $5, $7); }
	| '{' stmt_list	'}'					{ $$ = $2; }
	| DO '{' stmt_list '}' WHILE '(' expr ')'';' { $$ = opr(DO, 2, $3, $7); }
	;
	
stmt_list:
	stmt								{ $$ = $1; }			
	|	stmt_list stmt					{ $$ = opr(';', 2, $1, $2); }
	;

expr:
	INTEGER								{ $$ = con($1); }
	| CADENA							{ $$ = conStr($1, typeCadena); }
	| VARIABLE							{ $$ = id($1); }
	| '-' expr %prec UMINUS				{ $$ = opr(UMINUS, 1, $2); }
	| '!' expr %prec NEGACION			{ $$ = opr(NEGACION, 1, $2); }
	| '~' expr %prec NEGACION			{ $$ = opr(NEGACION, 1, $2); }
	| expr '+' expr						{ $$ = opr('+', 2, $1, $3); }
	| expr '-' expr						{ $$ = opr('-', 2, $1, $3); }
	| expr '*' expr						{ $$ = opr('*', 2, $1, $3); }
	| expr '/' expr						{ $$ = opr('/', 2, $1, $3); }
	| expr '<' expr						{ $$ = opr('<', 2, $1, $3); }
	| expr '>' expr						{ $$ = opr('>', 2, $1, $3); }
	| expr '^' expr						{ $$ = opr('^', 2, $1, $3); }
	| expr '%' expr						{ $$ = opr('%', 2, $1, $3); }
	| expr GE expr						{ $$ = opr(GE, 2, $1, $3); }
	| expr LE expr						{ $$ = opr(LE, 2, $1, $3); }
	| expr NE expr						{ $$ = opr(NE, 2, $1, $3); }
	| expr EQ expr						{ $$ = opr(EQ, 2, $1, $3); }
	| expr AND expr						{ $$ = opr(AND, 2, $1, $3); }
	| expr OR expr						{ $$ = opr(OR, 2, $1, $3); }
	| expr '&' expr						{ $$ = opr(ANDBITS, 2, $1, $3); }
	| expr '|' expr						{ $$ = opr(ORBITS, 2, $1, $3); }
	| expr SHIFTLEFT expr				{ $$ = opr(SHIFTLEFT, 2, $1, $3); }
	| expr SHIFTRIGHT expr				{ $$ = opr(SHIFTRIGHT, 2, $1, $3); }	/* OPVARS */
	| STRLEN '(' CADENA ')'				{ $$ = opr(STRLEN, 1, conStr($3, typeStrlen)); }
	| expr OPVAR expr 					{ 

					/* Comparaciones de operadores */
					printf("_%s_\n", opVar);
					if(strcmp(opVar, "+") == 0) {
						$$ = opr('+', 2, $1, $3);
					} else if(strcmp(opVar, "-") == 0) {
						$$ = opr('-', 2, $1, $3);
					} else if(strcmp(opVar, "*") == 0) {
						$$ = opr('*', 2, $1, $3);
					} else if(strcmp(opVar, "/") == 0) {
						$$ = opr('/', 2, $1, $3);
					} else if(strcmp(opVar, "^") == 0) {
						$$ = opr('^', 2, $1, $3);
					} 
										}	
	| '(' expr ')'						{ $$ = $2; }
	;
%%

nodeType *con(int value) {
	nodeType *p;
	/* allocate node */
	if((p = malloc(sizeof(conNodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeCon;
	p->con.value = value;
	return p;
}

nodeType *conStr(char value[], int type) {
	nodeType *p;
	if((p = malloc(sizeof(conNodeType))) == NULL) {
		yyerror("No hay memoria, vato");
	}
	/* Asignamos el tipo */
	p->type = type;
	strcpy(p->con.cadena, value);
	return p;
}

nodeType *id(int i) {
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(idNodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeId;
	p->id.i = i;
	return p;
}

nodeType *opr(int oper, int nops, ...) {
	va_list ap;
	nodeType *p;
	size_t size;
	int i;
	/* allocate node */
	size = sizeof(oprNodeType) + (nops - 1) * sizeof(nodeType*);
	if ((p = malloc(size)) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = nops;


	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->opr.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;
}

void freeNode(nodeType *p) {
	int i;
	if (!p) 
		return;
	if (p->type == typeOpr) {
		for (i = 0; i < p->opr.nops; i++)
			freeNode(p->opr.op[i]);
	}
	free (p);
}

void yyerror(char *s) {
	fprintf(stdout, "%s\n", s);
}

int main(int argc, char **argv) {

	if(argc > 1) {
		printf("Usando el archivo : %s\n", argv[1]);
		stdin = fopen(argv[1], "r");
	} else {
		return EXIT_SUCCESS;
	}
	yyparse();
	return 0;
}

