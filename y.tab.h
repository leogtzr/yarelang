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
     INT_TYPE = 265,
     DECIMAL_TYPE = 266,
     BOOL_TYPE = 267,
     WHILE = 268,
     IF = 269,
     PRINT = 270,
     RAND = 271,
     INITRAND = 272,
     INCR = 273,
     DECR = 274,
     DO = 275,
     READ = 276,
     ASIGNACION_PASCAL = 277,
     LETSET = 278,
     TO = 279,
     MOVE = 280,
     MOVASM = 281,
     ADDASM = 282,
     SUBASM = 283,
     SWAP = 284,
     SHIFTLEFT = 285,
     SHIFTRIGHT = 286,
     PUTS = 287,
     STRLEN = 288,
     _SWAP_ID_VAR_ = 289,
     _SWAP_VAR_ID_ = 290,
     IFTHEN = 291,
     IFEND = 292,
     PRINTN = 293,
     PRASCII = 294,
     DECLARE = 295,
     DECLARE_AND_ASSIGN = 296,
     FUNCTION = 297,
     PAR = 298,
     ASIGN_ADD = 299,
     ASIGN_SUB = 300,
     ASIGN_MUL = 301,
     ASIGN_DIV = 302,
     ASIGN_MOD = 303,
     ASIGN_SHIFTLEFT = 304,
     ASIGN_SHIFTRIGHT = 305,
     ASIGN_AND = 306,
     ASIGN_OR = 307,
     ASIGN_POW = 308,
     XOROP = 309,
     _ASIGN_ADD_ = 310,
     _ASIGN_SUB_ = 311,
     _ASIGN_MUL_ = 312,
     _ASIGN_DIV_ = 313,
     _ASIGN_MOD_ = 314,
     _ASIGN_SHIFTLEFT_ = 315,
     _ASIGN_SHIFTRIGHT_ = 316,
     _ASIGN_AND_ = 317,
     _ASIGN_OR_ = 318,
     _ASIGN_PASCAL_ = 319,
     _LETSET_ = 320,
     _ASIGN_POW_ = 321,
     OPVAR = 322,
     OPVAR_ADD = 323,
     OPVAR_SUB = 324,
     OPVAR_MUL = 325,
     OPVAR_DIV = 326,
     OPVAR_POW = 327,
     FACE_HAPPY = 328,
     FACE_SAD = 329,
     FACE_NO = 330,
     _FACE_HAPPY_ = 331,
     _FACE_SAD_ = 332,
     _FACE_NO_ = 333,
     INITIALIZE_IDENTIFIER = 334,
     PRINCIPIO = 335,
     FUNCION = 336,
     PROC = 337,
     _ASIGNACION_ = 338,
     _READ_ = 339,
     _INITRAND_ = 340,
     CONCATENATE_DIGITS = 341,
     CONCATENATE_DIGITS_ID = 342,
     CONCATENATE_DIGITS_VAR = 343,
     _MOVE_ = 344,
     _MOVASM_ = 345,
     _ADDASM_ = 346,
     _SUBASM_ = 347,
     _SWAP_ = 348,
     _INCR_ = 349,
     _DECR_ = 350,
     _GT_ = 351,
     _LT_ = 352,
     BREAK = 353,
     CALL = 354,
     EXIT = 355,
     INCR_FUNC_ID = 356,
     INCR_FUNC_VAR = 357,
     DECR_FUNC_ID = 358,
     DECR_FUNC_VAR = 359,
     INCREMENTAR = 360,
     DECREMENTAR = 361,
     UNLESS = 362,
     FOR = 363,
     FOREACH = 364,
     FOREACH_ID = 365,
     FOR_MENOS = 366,
     FOR_MENOS_ID = 367,
     FOR_MAS = 368,
     FOR_MAS_ID = 369,
     FOR_MUL = 370,
     FOR_MUL_ID = 371,
     FOR_DIV = 372,
     FOR_DIV_ID = 373,
     FOR_POW = 374,
     FOR_POW_ID = 375,
     FOR_MOD = 376,
     FOR_MOD_ID = 377,
     FOR_SHIFTLEFTF = 378,
     FOR_SHIFTLEFTF_ID = 379,
     FOR_SHIFTRIGHT = 380,
     FOR_SHIFTRIGHT_ID = 381,
     FOR_OR = 382,
     FOR_OR_ID = 383,
     FOR_AND = 384,
     FOR_AND_ID = 385,
     ABS = 386,
     FACTORIAL = 387,
     SUMATORIA = 388,
     SQRT = 389,
     ACOS = 390,
     ASIN = 391,
     ATAN = 392,
     CEIL = 393,
     COS = 394,
     COSH = 395,
     EXP = 396,
     FLOOR = 397,
     LN = 398,
     SIN = 399,
     SINH = 400,
     TAN = 401,
     TANH = 402,
     VOID = 403,
     SYSTEM = 404,
     ARRAY = 405,
     DECLARE_ARRAY = 406,
     ARRAY_POS = 407,
     ARRAY_SIMPLE_ASIGN = 408,
     PUSH = 409,
     PUSH_VAR = 410,
     PUSH_ID = 411,
     PUSH_CONST = 412,
     POP = 413,
     POP_VAR = 414,
     POP_ID = 415,
     CLEAR_STACK = 416,
     PUSH_VARS = 417,
     POP_VARS = 418,
     EXPR_MAS = 419,
     EXPR_MENOS = 420,
     EXPR_DIV = 421,
     EXPR_MUL = 422,
     EXPR_NOT = 423,
     EXPR_ELEVADO = 424,
     EXPR_MENOR = 425,
     EXPR_MAYOR = 426,
     EXPR_MENORQUE = 427,
     EXPR_MAYORQUE = 428,
     IFX = 429,
     ELSE = 430,
     OR = 431,
     AND = 432,
     ORBITS = 433,
     ANDBITS = 434,
     NE = 435,
     EQ = 436,
     LE = 437,
     GE = 438,
     NEGACION = 439,
     UMINUS = 440
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
#define INT_TYPE 265
#define DECIMAL_TYPE 266
#define BOOL_TYPE 267
#define WHILE 268
#define IF 269
#define PRINT 270
#define RAND 271
#define INITRAND 272
#define INCR 273
#define DECR 274
#define DO 275
#define READ 276
#define ASIGNACION_PASCAL 277
#define LETSET 278
#define TO 279
#define MOVE 280
#define MOVASM 281
#define ADDASM 282
#define SUBASM 283
#define SWAP 284
#define SHIFTLEFT 285
#define SHIFTRIGHT 286
#define PUTS 287
#define STRLEN 288
#define _SWAP_ID_VAR_ 289
#define _SWAP_VAR_ID_ 290
#define IFTHEN 291
#define IFEND 292
#define PRINTN 293
#define PRASCII 294
#define DECLARE 295
#define DECLARE_AND_ASSIGN 296
#define FUNCTION 297
#define PAR 298
#define ASIGN_ADD 299
#define ASIGN_SUB 300
#define ASIGN_MUL 301
#define ASIGN_DIV 302
#define ASIGN_MOD 303
#define ASIGN_SHIFTLEFT 304
#define ASIGN_SHIFTRIGHT 305
#define ASIGN_AND 306
#define ASIGN_OR 307
#define ASIGN_POW 308
#define XOROP 309
#define _ASIGN_ADD_ 310
#define _ASIGN_SUB_ 311
#define _ASIGN_MUL_ 312
#define _ASIGN_DIV_ 313
#define _ASIGN_MOD_ 314
#define _ASIGN_SHIFTLEFT_ 315
#define _ASIGN_SHIFTRIGHT_ 316
#define _ASIGN_AND_ 317
#define _ASIGN_OR_ 318
#define _ASIGN_PASCAL_ 319
#define _LETSET_ 320
#define _ASIGN_POW_ 321
#define OPVAR 322
#define OPVAR_ADD 323
#define OPVAR_SUB 324
#define OPVAR_MUL 325
#define OPVAR_DIV 326
#define OPVAR_POW 327
#define FACE_HAPPY 328
#define FACE_SAD 329
#define FACE_NO 330
#define _FACE_HAPPY_ 331
#define _FACE_SAD_ 332
#define _FACE_NO_ 333
#define INITIALIZE_IDENTIFIER 334
#define PRINCIPIO 335
#define FUNCION 336
#define PROC 337
#define _ASIGNACION_ 338
#define _READ_ 339
#define _INITRAND_ 340
#define CONCATENATE_DIGITS 341
#define CONCATENATE_DIGITS_ID 342
#define CONCATENATE_DIGITS_VAR 343
#define _MOVE_ 344
#define _MOVASM_ 345
#define _ADDASM_ 346
#define _SUBASM_ 347
#define _SWAP_ 348
#define _INCR_ 349
#define _DECR_ 350
#define _GT_ 351
#define _LT_ 352
#define BREAK 353
#define CALL 354
#define EXIT 355
#define INCR_FUNC_ID 356
#define INCR_FUNC_VAR 357
#define DECR_FUNC_ID 358
#define DECR_FUNC_VAR 359
#define INCREMENTAR 360
#define DECREMENTAR 361
#define UNLESS 362
#define FOR 363
#define FOREACH 364
#define FOREACH_ID 365
#define FOR_MENOS 366
#define FOR_MENOS_ID 367
#define FOR_MAS 368
#define FOR_MAS_ID 369
#define FOR_MUL 370
#define FOR_MUL_ID 371
#define FOR_DIV 372
#define FOR_DIV_ID 373
#define FOR_POW 374
#define FOR_POW_ID 375
#define FOR_MOD 376
#define FOR_MOD_ID 377
#define FOR_SHIFTLEFTF 378
#define FOR_SHIFTLEFTF_ID 379
#define FOR_SHIFTRIGHT 380
#define FOR_SHIFTRIGHT_ID 381
#define FOR_OR 382
#define FOR_OR_ID 383
#define FOR_AND 384
#define FOR_AND_ID 385
#define ABS 386
#define FACTORIAL 387
#define SUMATORIA 388
#define SQRT 389
#define ACOS 390
#define ASIN 391
#define ATAN 392
#define CEIL 393
#define COS 394
#define COSH 395
#define EXP 396
#define FLOOR 397
#define LN 398
#define SIN 399
#define SINH 400
#define TAN 401
#define TANH 402
#define VOID 403
#define SYSTEM 404
#define ARRAY 405
#define DECLARE_ARRAY 406
#define ARRAY_POS 407
#define ARRAY_SIMPLE_ASIGN 408
#define PUSH 409
#define PUSH_VAR 410
#define PUSH_ID 411
#define PUSH_CONST 412
#define POP 413
#define POP_VAR 414
#define POP_ID 415
#define CLEAR_STACK 416
#define PUSH_VARS 417
#define POP_VARS 418
#define EXPR_MAS 419
#define EXPR_MENOS 420
#define EXPR_DIV 421
#define EXPR_MUL 422
#define EXPR_NOT 423
#define EXPR_ELEVADO 424
#define EXPR_MENOR 425
#define EXPR_MAYOR 426
#define EXPR_MENORQUE 427
#define EXPR_MAYORQUE 428
#define IFX 429
#define ELSE 430
#define OR 431
#define AND 432
#define ORBITS 433
#define ANDBITS 434
#define NE 435
#define EQ 436
#define LE 437
#define GE 438
#define NEGACION 439
#define UMINUS 440




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 56 "./sintactico.y"
 
	double iValue; 		/* integer value */
	char sIndex;		/* symbol table index */ 
	char cadena[1000];
	/* Id: */
	char identificador[100];
	/* El string que guarda el array */
	char idArray[100];
	char idgigante[100];
	char nameFunction[100];
	nodeType *nPtr; 	/* node pointer */
	short type_int;



/* Line 2068 of yacc.c  */
#line 436 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


