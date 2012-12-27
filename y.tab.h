/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     VARIABLE = 259,
     FUNCNAME = 260,
     CADENA = 261,
     ID = 262,
     ID_GIGANTE = 263,
     ID_ARRAY = 264,
     GIGANTE = 265,
     INT_TYPE = 266,
     DECIMAL_TYPE = 267,
     BOOL_TYPE = 268,
     WHILE = 269,
     IF = 270,
     PRINT = 271,
     RAND = 272,
     INITRAND = 273,
     INCR = 274,
     DECR = 275,
     DO = 276,
     READ = 277,
     ASIGNACION_PASCAL = 278,
     LETSET = 279,
     TO = 280,
     MOVE = 281,
     MOVASM = 282,
     ADDASM = 283,
     SUBASM = 284,
     SWAP = 285,
     SHIFTLEFT = 286,
     SHIFTRIGHT = 287,
     PUTS = 288,
     STRLEN = 289,
     _SWAP_ID_VAR_ = 290,
     _SWAP_VAR_ID_ = 291,
     IFTHEN = 292,
     IFEND = 293,
     PRINTN = 294,
     PRASCII = 295,
     DECLARE = 296,
     DECLARE_AND_ASSIGN = 297,
     FUNCTION = 298,
     PAR = 299,
     ASIGN_ADD = 300,
     ASIGN_SUB = 301,
     ASIGN_MUL = 302,
     ASIGN_DIV = 303,
     ASIGN_MOD = 304,
     ASIGN_SHIFTLEFT = 305,
     ASIGN_SHIFTRIGHT = 306,
     ASIGN_AND = 307,
     ASIGN_OR = 308,
     ASIGN_POW = 309,
     XOROP = 310,
     _ASIGN_ADD_ = 311,
     _ASIGN_SUB_ = 312,
     _ASIGN_MUL_ = 313,
     _ASIGN_DIV_ = 314,
     _ASIGN_MOD_ = 315,
     _ASIGN_SHIFTLEFT_ = 316,
     _ASIGN_SHIFTRIGHT_ = 317,
     _ASIGN_AND_ = 318,
     _ASIGN_OR_ = 319,
     _ASIGN_PASCAL_ = 320,
     _LETSET_ = 321,
     _ASIGN_POW_ = 322,
     OPVAR = 323,
     OPVAR_ADD = 324,
     OPVAR_SUB = 325,
     OPVAR_MUL = 326,
     OPVAR_DIV = 327,
     OPVAR_POW = 328,
     FACE_HAPPY = 329,
     FACE_SAD = 330,
     FACE_NO = 331,
     _FACE_HAPPY_ = 332,
     _FACE_SAD_ = 333,
     _FACE_NO_ = 334,
     ELIPSIS = 335,
     PUSH = 336,
     VER_PILA = 337,
     POP = 338,
     POP_EMPTY = 339,
     POP_ID = 340,
     POP_VAR = 341,
     INITIALIZE_IDENTIFIER = 342,
     FUNCION = 343,
     PROC = 344,
     _ASIGNACION_ = 345,
     _READ_ = 346,
     _INITRAND_ = 347,
     CONCATENATE_DIGITS = 348,
     CONCATENATE_DIGITS_ID = 349,
     CONCATENATE_DIGITS_VAR = 350,
     _MOVE_ = 351,
     _MOVASM_ = 352,
     _ADDASM_ = 353,
     _SUBASM_ = 354,
     _SWAP_ = 355,
     _INCR_ = 356,
     _DECR_ = 357,
     _GT_ = 358,
     _LT_ = 359,
     BREAK = 360,
     CALL = 361,
     EXIT = 362,
     INCR_FUNC_ID = 363,
     INCR_FUNC_VAR = 364,
     DECR_FUNC_ID = 365,
     DECR_FUNC_VAR = 366,
     INCREMENTAR = 367,
     DECREMENTAR = 368,
     UNLESS = 369,
     FOR = 370,
     FOREACH = 371,
     FOREACH_ID = 372,
     FOR_MENOS = 373,
     FOR_MENOS_ID = 374,
     FOR_MAS = 375,
     FOR_MAS_ID = 376,
     FOR_MUL = 377,
     FOR_MUL_ID = 378,
     FOR_DIV = 379,
     FOR_DIV_ID = 380,
     FOR_POW = 381,
     FOR_POW_ID = 382,
     FOR_MOD = 383,
     FOR_MOD_ID = 384,
     FOR_SHIFTLEFTF = 385,
     FOR_SHIFTLEFTF_ID = 386,
     FOR_SHIFTRIGHT = 387,
     FOR_SHIFTRIGHT_ID = 388,
     FOR_OR = 389,
     FOR_OR_ID = 390,
     FOR_AND = 391,
     FOR_AND_ID = 392,
     ABS = 393,
     FACTORIAL = 394,
     SUMATORIA = 395,
     SQRT = 396,
     ACOS = 397,
     ASIN = 398,
     ATAN = 399,
     CEIL = 400,
     COS = 401,
     COSH = 402,
     EXP = 403,
     FLOOR = 404,
     LN = 405,
     SIN = 406,
     SINH = 407,
     TAN = 408,
     TANH = 409,
     VOID = 410,
     SYSTEM = 411,
     ARRAY = 412,
     DECLARE_ARRAY = 413,
     ARRAY_POS = 414,
     ARRAY_SIMPLE_ASIGN = 415,
     EXPR_MAS = 416,
     EXPR_MENOS = 417,
     EXPR_DIV = 418,
     EXPR_MUL = 419,
     EXPR_NOT = 420,
     EXPR_ELEVADO = 421,
     EXPR_MENOR = 422,
     EXPR_MAYOR = 423,
     EXPR_MENORQUE = 424,
     EXPR_MAYORQUE = 425,
     DECLARE_G = 426,
     IFX = 427,
     ELSE = 428,
     OR = 429,
     AND = 430,
     ORBITS = 431,
     ANDBITS = 432,
     NE = 433,
     EQ = 434,
     LE = 435,
     GE = 436,
     NEGACION = 437,
     UMINUS = 438
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define VARIABLE 259
#define FUNCNAME 260
#define CADENA 261
#define ID 262
#define ID_GIGANTE 263
#define ID_ARRAY 264
#define GIGANTE 265
#define INT_TYPE 266
#define DECIMAL_TYPE 267
#define BOOL_TYPE 268
#define WHILE 269
#define IF 270
#define PRINT 271
#define RAND 272
#define INITRAND 273
#define INCR 274
#define DECR 275
#define DO 276
#define READ 277
#define ASIGNACION_PASCAL 278
#define LETSET 279
#define TO 280
#define MOVE 281
#define MOVASM 282
#define ADDASM 283
#define SUBASM 284
#define SWAP 285
#define SHIFTLEFT 286
#define SHIFTRIGHT 287
#define PUTS 288
#define STRLEN 289
#define _SWAP_ID_VAR_ 290
#define _SWAP_VAR_ID_ 291
#define IFTHEN 292
#define IFEND 293
#define PRINTN 294
#define PRASCII 295
#define DECLARE 296
#define DECLARE_AND_ASSIGN 297
#define FUNCTION 298
#define PAR 299
#define ASIGN_ADD 300
#define ASIGN_SUB 301
#define ASIGN_MUL 302
#define ASIGN_DIV 303
#define ASIGN_MOD 304
#define ASIGN_SHIFTLEFT 305
#define ASIGN_SHIFTRIGHT 306
#define ASIGN_AND 307
#define ASIGN_OR 308
#define ASIGN_POW 309
#define XOROP 310
#define _ASIGN_ADD_ 311
#define _ASIGN_SUB_ 312
#define _ASIGN_MUL_ 313
#define _ASIGN_DIV_ 314
#define _ASIGN_MOD_ 315
#define _ASIGN_SHIFTLEFT_ 316
#define _ASIGN_SHIFTRIGHT_ 317
#define _ASIGN_AND_ 318
#define _ASIGN_OR_ 319
#define _ASIGN_PASCAL_ 320
#define _LETSET_ 321
#define _ASIGN_POW_ 322
#define OPVAR 323
#define OPVAR_ADD 324
#define OPVAR_SUB 325
#define OPVAR_MUL 326
#define OPVAR_DIV 327
#define OPVAR_POW 328
#define FACE_HAPPY 329
#define FACE_SAD 330
#define FACE_NO 331
#define _FACE_HAPPY_ 332
#define _FACE_SAD_ 333
#define _FACE_NO_ 334
#define ELIPSIS 335
#define PUSH 336
#define VER_PILA 337
#define POP 338
#define POP_EMPTY 339
#define POP_ID 340
#define POP_VAR 341
#define INITIALIZE_IDENTIFIER 342
#define FUNCION 343
#define PROC 344
#define _ASIGNACION_ 345
#define _READ_ 346
#define _INITRAND_ 347
#define CONCATENATE_DIGITS 348
#define CONCATENATE_DIGITS_ID 349
#define CONCATENATE_DIGITS_VAR 350
#define _MOVE_ 351
#define _MOVASM_ 352
#define _ADDASM_ 353
#define _SUBASM_ 354
#define _SWAP_ 355
#define _INCR_ 356
#define _DECR_ 357
#define _GT_ 358
#define _LT_ 359
#define BREAK 360
#define CALL 361
#define EXIT 362
#define INCR_FUNC_ID 363
#define INCR_FUNC_VAR 364
#define DECR_FUNC_ID 365
#define DECR_FUNC_VAR 366
#define INCREMENTAR 367
#define DECREMENTAR 368
#define UNLESS 369
#define FOR 370
#define FOREACH 371
#define FOREACH_ID 372
#define FOR_MENOS 373
#define FOR_MENOS_ID 374
#define FOR_MAS 375
#define FOR_MAS_ID 376
#define FOR_MUL 377
#define FOR_MUL_ID 378
#define FOR_DIV 379
#define FOR_DIV_ID 380
#define FOR_POW 381
#define FOR_POW_ID 382
#define FOR_MOD 383
#define FOR_MOD_ID 384
#define FOR_SHIFTLEFTF 385
#define FOR_SHIFTLEFTF_ID 386
#define FOR_SHIFTRIGHT 387
#define FOR_SHIFTRIGHT_ID 388
#define FOR_OR 389
#define FOR_OR_ID 390
#define FOR_AND 391
#define FOR_AND_ID 392
#define ABS 393
#define FACTORIAL 394
#define SUMATORIA 395
#define SQRT 396
#define ACOS 397
#define ASIN 398
#define ATAN 399
#define CEIL 400
#define COS 401
#define COSH 402
#define EXP 403
#define FLOOR 404
#define LN 405
#define SIN 406
#define SINH 407
#define TAN 408
#define TANH 409
#define VOID 410
#define SYSTEM 411
#define ARRAY 412
#define DECLARE_ARRAY 413
#define ARRAY_POS 414
#define ARRAY_SIMPLE_ASIGN 415
#define EXPR_MAS 416
#define EXPR_MENOS 417
#define EXPR_DIV 418
#define EXPR_MUL 419
#define EXPR_NOT 420
#define EXPR_ELEVADO 421
#define EXPR_MENOR 422
#define EXPR_MAYOR 423
#define EXPR_MENORQUE 424
#define EXPR_MAYORQUE 425
#define DECLARE_G 426
#define IFX 427
#define ELSE 428
#define OR 429
#define AND 430
#define ORBITS 431
#define ANDBITS 432
#define NE 433
#define EQ 434
#define LE 435
#define GE 436
#define NEGACION 437
#define UMINUS 438




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 57 "./sintactico.y"
 
	double iValue; 		/* integer value */
	char sIndex;		/* symbol table index */ 
	char cadena[1000];
	char cadena_gigante[1000];

	/* Id: */
	char identificador[100];
	/* El string que guarda el array */
	char idArray[100];
	char idgigante[100];
	char nameFunction[100];
	nodeType *nPtr; 	/* node pointer */
	short type_int;



/* Line 2068 of yacc.c  */
#line 434 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


