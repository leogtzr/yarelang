/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 22 "./sintactico.y"

	#include	<stdio.h>
	#include	<stdlib.h>
	#include	<stdarg.h>
	#include	"estructuras.h"
	#include 	<string.h>
	#include 	"data_types.h"
	#include 	"write_fun_strs.h"
	#include 	"arreglos.h"
	
	/* prototypes */
	nodeType *opr(int oper, unsigned short nops, ...);
	nodeType *id(char i);
	nodeType *idS(char *s);
	nodeType *idWithType(char *s, short type);
	nodeType *con(double value);
	nodeType *conStr(char value[], short type);
	nodeType *idArray(char value[]);
	void freeNode(nodeType *p);
	void yyerror(char *s); 
	/* TODO Cambiar por una lista de identificadores */
	double sym[26]; /* symbol table for virtual vars */
	char opVar[4];
	struct palabras *identificadores = NULL;
	struct funciones *idFunciones = NULL;
	struct cadenas *writeStrings = NULL;
	struct stack *pila = NULL;
	struct _arrays *arreglos = NULL;
	unsigned int lineno;
	size_t argsInFunction = 0;
	double val_temp;
	/* Gigantes: */
	struct gigante *gigantes = NULL;


/* Line 268 of yacc.c  */
#line 107 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     INITIALIZE_IDENTIFIER = 335,
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
     DECLARE_G = 429,
     IFX = 430,
     ELSE = 431,
     OR = 432,
     AND = 433,
     ORBITS = 434,
     ANDBITS = 435,
     NE = 436,
     EQ = 437,
     LE = 438,
     GE = 439,
     NEGACION = 440,
     UMINUS = 441
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
#define INITIALIZE_IDENTIFIER 335
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
#define DECLARE_G 429
#define IFX 430
#define ELSE 431
#define OR 432
#define AND 433
#define ORBITS 434
#define ANDBITS 435
#define NE 436
#define EQ 437
#define LE 438
#define GE 439
#define NEGACION 440
#define UMINUS 441




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
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



/* Line 293 of yacc.c  */
#line 533 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 545 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9001

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  211
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNRULES -- Number of states.  */
#define YYNSTATES  634

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   441

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   207,     2,     2,     2,   206,   209,     2,
     197,   198,   189,   187,   199,   188,   194,   190,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   202,
     180,   203,   179,   204,   205,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   200,     2,   201,   191,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   195,   210,   196,   208,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   181,   182,   183,   184,   185,   186,
     192,   193
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    15,    16,    18,    20,    22,    31,
      32,    34,    36,    37,    41,    43,    46,    51,    54,    55,
      57,    60,    67,    73,    79,    83,    89,    95,   101,   104,
     110,   116,   121,   126,   131,   137,   142,   147,   155,   160,
     165,   170,   175,   180,   185,   190,   195,   200,   205,   210,
     215,   220,   225,   230,   235,   240,   245,   250,   255,   260,
     265,   270,   275,   280,   285,   290,   295,   300,   305,   311,
     317,   323,   329,   335,   341,   347,   353,   359,   365,   371,
     377,   382,   387,   392,   397,   402,   407,   412,   417,   422,
     427,   432,   437,   442,   447,   453,   464,   477,   488,   499,
     510,   521,   532,   543,   554,   566,   577,   588,   599,   610,
     621,   632,   643,   654,   665,   677,   683,   689,   697,   701,
     704,   708,   716,   726,   731,   736,   742,   748,   756,   764,
     774,   782,   784,   787,   789,   791,   793,   798,   803,   805,
     808,   811,   814,   817,   821,   825,   829,   833,   837,   841,
     845,   849,   853,   857,   861,   865,   869,   873,   877,   881,
     885,   889,   893,   897,   901,   905,   909,   913,   917,   921,
     925,   929,   933,   937,   942,   947,   952,   959,   964,   969,
     974,   979,   984,   989,   994,   999,  1004,  1009,  1014,  1019,
    1024,  1029,  1032,  1037,  1042,  1047,  1052,  1057,  1060,  1065,
    1068,  1073,  1076,  1081,  1084,  1088,  1090,  1094
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     212,     0,    -1,   213,   215,   219,   194,    -1,   213,    82,
       5,   195,   221,   196,    -1,    -1,    11,    -1,    12,    -1,
      13,    -1,    43,     5,   197,   216,   198,   195,   221,   196,
      -1,    -1,   217,    -1,   148,    -1,    -1,   217,   199,   218,
      -1,   218,    -1,   214,     7,    -1,   214,     7,   200,   201,
      -1,   219,   220,    -1,    -1,   202,    -1,   222,   202,    -1,
     150,     7,   200,   222,   201,   202,    -1,    16,   197,   222,
     198,   202,    -1,    39,   197,   222,   198,   202,    -1,    17,
     222,   202,    -1,    22,   197,     4,   198,   202,    -1,    22,
     197,     7,   198,   202,    -1,    33,   197,     6,   198,   202,
      -1,    98,   202,    -1,   100,   197,   222,   198,   202,    -1,
      40,   197,   222,   198,   202,    -1,   161,   197,   198,   202,
      -1,   162,   197,   198,   202,    -1,   163,   197,   198,   202,
      -1,   214,     7,   203,   222,   202,    -1,     4,   203,   222,
     202,    -1,     7,   203,   222,   202,    -1,     9,   200,   222,
     201,   203,   222,   202,    -1,     4,   203,   204,   202,    -1,
       7,   203,   204,   202,    -1,     4,   203,    74,   202,    -1,
       4,   203,    75,   202,    -1,     4,   203,    76,   202,    -1,
       7,   203,    74,   202,    -1,     7,   203,    75,   202,    -1,
       7,   203,    76,   202,    -1,     4,    45,   222,   202,    -1,
       4,    46,   222,   202,    -1,     4,    47,   222,   202,    -1,
       4,    48,   222,   202,    -1,     4,    49,   222,   202,    -1,
       4,    54,   222,   202,    -1,     4,    50,   222,   202,    -1,
       4,    51,   222,   202,    -1,     4,    52,   222,   202,    -1,
       4,    53,   222,   202,    -1,     4,    23,   222,   202,    -1,
       7,    45,   222,   202,    -1,     7,    46,   222,   202,    -1,
       7,    47,   222,   202,    -1,     7,    48,   222,   202,    -1,
       7,    49,   222,   202,    -1,     7,    50,   222,   202,    -1,
       7,    51,   222,   202,    -1,     7,    52,   222,   202,    -1,
       7,    53,   222,   202,    -1,     7,    23,   222,   202,    -1,
       7,    54,   222,   202,    -1,    24,     4,   203,   222,   202,
      -1,    24,     4,    25,   222,   202,    -1,    24,     7,   203,
     222,   202,    -1,    24,     7,    25,   222,   202,    -1,    26,
     222,    25,     4,   202,    -1,    26,   222,    25,     7,   202,
      -1,    27,     4,   199,   222,   202,    -1,    28,     4,   199,
     222,   202,    -1,    29,     4,   199,   222,   202,    -1,    27,
       7,   199,   222,   202,    -1,    28,     7,   199,   222,   202,
      -1,    29,     7,   199,   222,   202,    -1,     4,    30,     4,
     202,    -1,     7,    30,     7,   202,    -1,     7,    30,     4,
     202,    -1,     4,    30,     7,   202,    -1,    68,   203,   187,
     202,    -1,    68,   203,   188,   202,    -1,    68,   203,   189,
     202,    -1,    68,   203,   190,   202,    -1,    68,   203,   191,
     202,    -1,    68,   203,   169,   202,    -1,     4,   187,   205,
     202,    -1,     4,   188,   205,   202,    -1,     7,   187,   205,
     202,    -1,     7,   188,   205,   202,    -1,    14,   197,   222,
     198,   220,    -1,   108,     4,   203,   222,   199,   222,   199,
     188,   222,   220,    -1,   108,     4,   203,   222,   199,   222,
     199,   187,   222,   195,   221,   196,    -1,   108,     4,   203,
     222,   199,   222,   199,   189,   222,   220,    -1,   108,     4,
     203,   222,   199,   222,   199,   190,   222,   220,    -1,   108,
       4,   203,   222,   199,   222,   199,   191,   222,   220,    -1,
     108,     4,   203,   222,   199,   222,   199,   169,   222,   220,
      -1,   108,     4,   203,   222,   199,   222,   199,   206,   222,
     220,    -1,   108,     4,   203,   222,   199,   222,   199,    31,
     222,   220,    -1,   108,     4,   203,   222,   199,   222,   199,
      32,   222,   220,    -1,   109,   197,   222,   194,   194,   194,
     222,   199,     4,   198,   220,    -1,   108,     7,   203,   222,
     199,   222,   199,   188,   222,   220,    -1,   108,     7,   203,
     222,   199,   222,   199,   187,   222,   220,    -1,   108,     7,
     203,   222,   199,   222,   199,   189,   222,   220,    -1,   108,
       7,   203,   222,   199,   222,   199,   190,   222,   220,    -1,
     108,     7,   203,   222,   199,   222,   199,   191,   222,   220,
      -1,   108,     7,   203,   222,   199,   222,   199,   169,   222,
     220,    -1,   108,     7,   203,   222,   199,   222,   199,   206,
     222,   220,    -1,   108,     7,   203,   222,   199,   222,   199,
      31,   222,   220,    -1,   108,     7,   203,   222,   199,   222,
     199,    32,   222,   220,    -1,   109,   197,   222,   194,   194,
     194,   222,   199,     7,   198,   220,    -1,    15,   197,   222,
     198,   220,    -1,   107,   197,   222,   198,   220,    -1,    15,
     197,   222,   198,   220,   176,   220,    -1,   195,   221,   196,
      -1,   195,   196,    -1,    37,   221,    38,    -1,    21,   220,
      14,   197,   222,   198,   202,    -1,    21,    37,   221,    38,
      14,   197,   222,   198,   202,    -1,     7,    86,   222,   202,
      -1,     4,    86,   222,   202,    -1,   149,   197,     6,   198,
     202,    -1,    41,   197,     7,   198,   202,    -1,    41,   197,
       7,   199,   222,   198,   202,    -1,   150,   197,     9,   199,
     222,   198,   202,    -1,    41,   197,     7,   199,   214,   199,
     222,   198,   202,    -1,   174,   197,     8,   199,    10,   198,
     202,    -1,   220,    -1,   221,   220,    -1,     3,    -1,     7,
      -1,     6,    -1,     9,   200,   222,   201,    -1,    44,   197,
     222,   198,    -1,     4,    -1,   188,   222,    -1,   207,   222,
      -1,   208,   222,    -1,   168,   222,    -1,   222,   187,   222,
      -1,   222,   164,   222,    -1,   222,   188,   222,    -1,   222,
     165,   222,    -1,   222,   189,   222,    -1,   222,   167,   222,
      -1,   222,   190,   222,    -1,   222,   166,   222,    -1,   222,
     180,   222,    -1,   222,   170,   222,    -1,   222,    97,   222,
      -1,   222,   179,   222,    -1,   222,   171,   222,    -1,   222,
      96,   222,    -1,   222,   191,   222,    -1,   222,   169,   222,
      -1,   222,   206,   222,    -1,   222,   186,   222,    -1,   222,
     173,   222,    -1,   222,   185,   222,    -1,   222,   172,   222,
      -1,   222,   183,   222,    -1,   222,   184,   222,    -1,   222,
     178,   222,    -1,   222,   177,   222,    -1,   222,   209,   222,
      -1,   222,   210,   222,    -1,   222,    55,   222,    -1,   222,
      31,   222,    -1,   222,    32,   222,    -1,    34,   197,     6,
     198,    -1,   131,   197,   222,   198,    -1,   132,   197,   222,
     198,    -1,   133,   197,   222,   199,   222,   198,    -1,   134,
     197,   222,   198,    -1,   135,   197,   222,   198,    -1,   136,
     197,   222,   198,    -1,   137,   197,   222,   198,    -1,   138,
     197,   222,   198,    -1,   139,   197,   222,   198,    -1,   140,
     197,   222,   198,    -1,   141,   197,   222,   198,    -1,   143,
     197,   222,   198,    -1,   142,   197,   222,   198,    -1,   144,
     197,   222,   198,    -1,   145,   197,   222,   198,    -1,   146,
     197,   222,   198,    -1,   147,   197,   222,   198,    -1,    99,
       5,    -1,   105,   197,     4,   198,    -1,   105,   197,     7,
     198,    -1,   106,   197,     4,   198,    -1,   106,   197,     7,
     198,    -1,   154,   197,     4,   198,    -1,   154,     4,    -1,
     154,   197,   222,   198,    -1,   154,     7,    -1,   158,   197,
       4,   198,    -1,   158,     4,    -1,   158,   197,     7,   198,
      -1,   158,     7,    -1,   158,   197,   198,    -1,   158,    -1,
     222,    68,   222,    -1,   197,   222,   198,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   276,   276,   287,   290,   294,   298,   302,   309,   312,
     316,   317,   318,   325,   326,   330,   333,   338,   342,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   364,   370,   371,   374,   375,
     376,   377,   378,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     409,   410,   411,   413,   414,   415,   416,   418,   419,   420,
     421,   422,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   435,   436,   437,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   469,   470,   471,   472,   473,   474,   478,
     483,   489,   490,   494,   495,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   589
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "FUNCNAME",
  "CADENA", "ID", "ID_GIGANTE", "ID_ARRAY", "GIGANTE", "INT_TYPE",
  "DECIMAL_TYPE", "BOOL_TYPE", "WHILE", "IF", "PRINT", "RAND", "INITRAND",
  "INCR", "DECR", "DO", "READ", "ASIGNACION_PASCAL", "LETSET", "TO",
  "MOVE", "MOVASM", "ADDASM", "SUBASM", "SWAP", "SHIFTLEFT", "SHIFTRIGHT",
  "PUTS", "STRLEN", "_SWAP_ID_VAR_", "_SWAP_VAR_ID_", "IFTHEN", "IFEND",
  "PRINTN", "PRASCII", "DECLARE", "DECLARE_AND_ASSIGN", "FUNCTION", "PAR",
  "ASIGN_ADD", "ASIGN_SUB", "ASIGN_MUL", "ASIGN_DIV", "ASIGN_MOD",
  "ASIGN_SHIFTLEFT", "ASIGN_SHIFTRIGHT", "ASIGN_AND", "ASIGN_OR",
  "ASIGN_POW", "XOROP", "_ASIGN_ADD_", "_ASIGN_SUB_", "_ASIGN_MUL_",
  "_ASIGN_DIV_", "_ASIGN_MOD_", "_ASIGN_SHIFTLEFT_", "_ASIGN_SHIFTRIGHT_",
  "_ASIGN_AND_", "_ASIGN_OR_", "_ASIGN_PASCAL_", "_LETSET_", "_ASIGN_POW_",
  "OPVAR", "OPVAR_ADD", "OPVAR_SUB", "OPVAR_MUL", "OPVAR_DIV", "OPVAR_POW",
  "FACE_HAPPY", "FACE_SAD", "FACE_NO", "_FACE_HAPPY_", "_FACE_SAD_",
  "_FACE_NO_", "INITIALIZE_IDENTIFIER", "FUNCION", "PROC", "_ASIGNACION_",
  "_READ_", "_INITRAND_", "CONCATENATE_DIGITS", "CONCATENATE_DIGITS_ID",
  "CONCATENATE_DIGITS_VAR", "_MOVE_", "_MOVASM_", "_ADDASM_", "_SUBASM_",
  "_SWAP_", "_INCR_", "_DECR_", "_GT_", "_LT_", "BREAK", "CALL", "EXIT",
  "INCR_FUNC_ID", "INCR_FUNC_VAR", "DECR_FUNC_ID", "DECR_FUNC_VAR",
  "INCREMENTAR", "DECREMENTAR", "UNLESS", "FOR", "FOREACH", "FOREACH_ID",
  "FOR_MENOS", "FOR_MENOS_ID", "FOR_MAS", "FOR_MAS_ID", "FOR_MUL",
  "FOR_MUL_ID", "FOR_DIV", "FOR_DIV_ID", "FOR_POW", "FOR_POW_ID",
  "FOR_MOD", "FOR_MOD_ID", "FOR_SHIFTLEFTF", "FOR_SHIFTLEFTF_ID",
  "FOR_SHIFTRIGHT", "FOR_SHIFTRIGHT_ID", "FOR_OR", "FOR_OR_ID", "FOR_AND",
  "FOR_AND_ID", "ABS", "FACTORIAL", "SUMATORIA", "SQRT", "ACOS", "ASIN",
  "ATAN", "CEIL", "COS", "COSH", "EXP", "FLOOR", "LN", "SIN", "SINH",
  "TAN", "TANH", "VOID", "SYSTEM", "ARRAY", "DECLARE_ARRAY", "ARRAY_POS",
  "ARRAY_SIMPLE_ASIGN", "PUSH", "PUSH_VAR", "PUSH_ID", "PUSH_CONST", "POP",
  "POP_VAR", "POP_ID", "CLEAR_STACK", "PUSH_VARS", "POP_VARS", "EXPR_MAS",
  "EXPR_MENOS", "EXPR_DIV", "EXPR_MUL", "EXPR_NOT", "EXPR_ELEVADO",
  "EXPR_MENOR", "EXPR_MAYOR", "EXPR_MENORQUE", "EXPR_MAYORQUE",
  "DECLARE_G", "IFX", "ELSE", "OR", "AND", "'>'", "'<'", "ORBITS",
  "ANDBITS", "NE", "EQ", "LE", "GE", "'+'", "'-'", "'*'", "'/'", "'^'",
  "NEGACION", "UMINUS", "'.'", "'{'", "'}'", "'('", "')'", "','", "'['",
  "']'", "';'", "'='", "'?'", "'@'", "'%'", "'!'", "'~'", "'&'", "'|'",
  "$accept", "program", "funciones", "type_specifier", "fun_declaration",
  "params", "param_list", "param", "cuerpo", "stmt", "stmt_list", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,    62,
      60,   434,   435,   436,   437,   438,   439,    43,    45,    42,
      47,    94,   440,   441,    46,   123,   125,    40,    41,    44,
      91,    93,    59,    61,    63,    64,    37,    33,   126,    38,
     124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   211,   212,   213,   213,   214,   214,   214,   215,   215,
     216,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   221,   221,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     6,     0,     1,     1,     1,     8,     0,
       1,     1,     0,     3,     1,     2,     4,     2,     0,     1,
       2,     6,     5,     5,     3,     5,     5,     5,     2,     5,
       5,     4,     4,     4,     5,     4,     4,     7,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,    10,    12,    10,    10,    10,
      10,    10,    10,    10,    11,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    11,     5,     5,     7,     3,     2,
       3,     7,     9,     4,     4,     5,     5,     7,     7,     9,
       7,     1,     2,     1,     1,     1,     4,     4,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     4,     4,     4,     4,     4,     2,     4,     2,
       4,     2,     4,     2,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     9,     1,     0,     0,    18,     0,     0,     0,
      12,     0,   133,   138,   135,   134,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   205,     0,     0,
       0,     0,     0,     0,     2,     0,     0,    19,     0,     0,
       0,    17,     0,    11,     0,     0,    10,    14,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     199,     0,   201,   203,     0,     0,     0,     0,   142,     0,
     139,   119,     0,     0,   140,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    15,
       0,     0,     3,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
       0,     0,     0,   204,     0,     0,     0,     0,   118,   207,
       0,   171,   172,   170,   206,   156,   153,   144,   146,   150,
     148,   158,   152,   155,   163,   161,   167,   166,   154,   151,
     164,   165,   162,   160,   143,   145,   147,   149,   157,   159,
     168,   169,     0,     0,    13,    56,    80,    83,    46,    47,
      48,    49,    50,    52,    53,    54,    55,    51,   124,    90,
      91,    40,    41,    42,    38,    35,    66,    82,    81,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    67,   123,
      92,    93,    43,    44,    45,    39,    36,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   173,
       0,     0,     0,     0,   137,    89,    84,    85,    86,    87,
      88,     0,   192,   193,   194,   195,     0,     0,     0,     0,
     174,   175,     0,   177,   178,   179,   180,   181,   182,   183,
     184,   186,   185,   187,   188,   189,   190,     0,     0,     0,
     196,   198,   200,   202,    31,    32,    33,     0,     0,    16,
       0,     0,    94,   115,    22,   136,     0,     0,    25,    26,
      69,    68,    71,    70,    72,    73,    74,    77,    75,    78,
      76,    79,    27,    23,    30,   126,     0,     0,    29,   116,
       0,     0,     0,     0,   125,     0,     0,     0,    34,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
      21,     0,     0,    37,   117,     0,   121,     0,   127,     0,
       0,     0,   128,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   100,     0,    95,    97,    98,    99,   101,   112,   113,
     110,   106,   105,   107,   108,   109,   111,     0,     0,   145,
       0,   104,   114,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    80,     6,    85,    86,    87,     9,    88,
      89,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -176
static const yytype_int16 yypact[] =
{
    -176,    18,   -39,  -176,     0,    11,  -176,  -175,  -166,   228,
      -5,  2269,  -176,   268,  -176,   451,  -146,  -176,  -176,  -176,
    -136,  -135,  -134,  2888,  2475,  -133,     5,  2888,     6,     7,
      16,  -131,  -128,  2269,  -126,  -123,  -122,  -121,  -125,  -120,
      72,  -118,  -116,  -114,  -112,    20,  -100,   -99,   -96,   -84,
     -83,   -77,   -76,   -75,   -73,   -72,   -71,   -70,   -69,   -68,
     -67,   -66,   -65,   -64,   -63,    29,    27,    28,   -61,   -60,
     -59,  2888,   -56,  2888,  -176,   827,  2888,  -176,  2888,  2888,
     137,  -176,  3097,  -176,   138,   -51,   -49,  -176,  -176,  1033,
    2888,    26,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,
    2888,  2888,  2888,   -57,   -54,  2556,  2888,    38,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,   -35,
     -34,  2641,  2888,  2888,  2888,  2888,  -176,  -176,   -28,  3145,
    2269,   159,    40,   -24,   -22,  3019,   -25,   -23,   -21,   -19,
     -17,   -15,   171,   179,  1239,  2888,  2888,   180,  2888,  -150,
    -176,  -176,  2888,    42,    44,  2888,   -14,   -13,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  2888,   182,    30,   177,  -176,
    -176,  2967,  -176,  -176,    21,    31,    35,    49,  8791,   219,
    8791,  -176,  1445,  3204,  8791,  8791,    25,  2888,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  -176,  2888,  2888,  2888,    36,
      43,    45,  -176,  -176,  3289,    51,    56,  3348,  3396,  3455,
    3540,  3598,  3647,  3705,  3790,  3848,  3897,  3955,    57,    58,
      61,    62,    64,    68,  4040,  4098,    69,    73,  4147,  4205,
    4290,  4348,  4397,  4455,  4540,  4598,  4647,  4705,  4790,    74,
      75,    76,    77,    82,    90,  4848,  4897,  4955,  5040,  5099,
    2888,  -176,  1651,    54,    50,    97,  2888,  2888,  2888,  2888,
      46,  2888,  2888,  2888,  2888,  2888,  2888,    99,   101,  -176,
    5146,  5205,  -139,  5290,    98,   102,   103,   104,   105,   106,
    5349,   111,   114,   125,   126,  5396,  2888,  2888,  5455,  5540,
    5598,  5646,  5704,  5789,  5848,  5895,  5954,  6039,  6098,  6145,
    6204,  6289,  6348,  6395,  6454,  6539,   127,  2888,    47,   131,
    6598,   132,   134,  -176,   136,   139,   140,   141,  -176,  -176,
    2888,  8416,  8416,  8416,  8416,  8416,  8416,  8416,  8416,  8416,
    8416,  8791,  8416,  8416,  8416,  8416,  8468,  8522,  8629,  8629,
    8629,  8629,  8629,  8629,  8683,  8683,  8713,  8713,  8772,  8416,
    8416,  8416,   100,  2269,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,   142,  2269,  2269,
     144,  6645,   325,  2888,   145,   146,  6704,  6789,  6847,  6896,
     147,   148,  6954,  7039,  7097,  7146,  7204,  7289,   149,  -176,
     150,   151,   153,  2722,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,   154,  -176,  -176,  -176,  -176,  2269,  7347,  7396,   163,
    -176,  -176,  2888,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,   156,  7453,  2888,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,   333,  7559,  -176,
    1857,  2888,  -176,   203,  -176,  -176,   183,  7614,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   184,  7666,  -176,  -176,
    2888,  2888,   187,  7720,  -176,   185,  7827,   186,  -176,  -176,
    7881,  2269,  2888,   190,  2888,   191,  7933,  7988,  2888,  -176,
    -176,   192,   193,  -176,  -176,  8094,  -176,  8149,  -176,   262,
     271,  8200,  -176,  -176,   195,   196,  2888,  2888,  2888,  2888,
    2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,  2888,
    2888,  2888,  2888,  2888,    48,  -176,  -176,   619,   619,   619,
    8255,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   201,   202,  2807,  2888,  -176,
    -176,  -176,  2269,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  2269,  2269,  8361,
    2063,  -176,  -176,  -176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,    -8,  -176,  -176,  -176,   157,  -176,    -9,
      -7,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -140
static const yytype_int16 yytable[] =
{
      81,   286,    84,   288,     4,     7,    17,    18,    19,   133,
     136,   138,   134,   137,   139,   131,     8,   129,     3,   304,
     140,   135,    10,   141,   156,   341,   144,   157,   342,    11,
     235,   179,   182,   236,   180,   183,   177,   305,   306,   307,
     308,   309,   256,     5,   284,   257,   311,   285,   313,   312,
     440,   314,   605,   441,   122,   606,    17,    18,    19,   452,
     453,   123,   124,   125,   132,   188,   142,   190,   192,   143,
     193,   145,   194,   195,   146,   147,   148,   151,   149,   152,
     233,   153,   150,   154,   234,   155,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   158,   159,   254,
     255,   160,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   161,   162,   275,   276,   277,   278,   279,
     163,   164,   165,   282,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   233,   185,   186,   187,   300,
     301,   189,   303,    83,   196,   229,   310,   230,   248,   315,
     231,   249,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     269,   270,   280,   283,   291,   340,   292,   297,   293,   287,
     294,   289,   295,   233,   296,   298,   338,   302,   336,   316,
     317,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   343,
     379,   380,   381,    84,   181,   184,   178,   347,   350,   344,
     337,    12,    13,   345,    14,    15,   382,    16,   383,    17,
      18,    19,    20,    21,    22,    23,   489,   346,   434,    24,
      25,   433,    26,   386,    27,    28,    29,    30,   387,   399,
     400,    31,    32,   401,   402,    33,   403,    34,    35,    36,
     404,   407,    37,   233,   431,   408,   420,   421,   422,   423,
     436,   437,   438,   439,   424,   442,   443,   444,   445,   446,
     447,    90,   425,   566,   567,   435,    38,   448,    91,   449,
     455,   499,   575,   576,   456,   457,   458,   459,   460,   462,
     467,   468,   463,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   464,   465,   487,    39,    40,    41,   490,
     492,   488,   493,    42,    43,    44,    45,    46,   494,   506,
     497,   495,   496,   537,   498,   501,   504,   508,   509,   514,
     515,   522,   523,   524,   102,   525,   528,   532,   534,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   500,    64,    65,   541,
     542,   548,    66,   544,   552,     0,    67,   550,   384,    68,
      69,    70,   556,   558,   562,   563,    71,   585,   586,   627,
     628,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,   502,
     503,     0,    74,    75,     0,    76,     0,   507,     0,     0,
      77,   568,     0,     0,     0,    78,    79,     0,     0,     0,
     577,     0,     0,     0,     0,   526,     0,   527,     0,   569,
     570,   571,   572,   573,     0,   103,   104,   529,   578,   579,
     580,   581,   582,     0,     0,     0,   533,     0,   574,     0,
       0,   105,     0,     0,   106,     0,     0,   583,     0,     0,
       0,   107,     0,   536,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,   540,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   546,   547,     0,     0,     0,     0,
       0,     0,   554,     0,     0,     0,   555,   118,   557,     0,
       0,     0,   561,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   609,   610,
     611,     0,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,     0,     0,     0,     0,
       0,   354,   629,     0,     0,   630,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   631,   632,
       0,   233,    12,    13,     0,    14,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,     0,   119,   120,
      24,    25,     0,    26,     0,    27,    28,    29,    30,     0,
     197,   198,    31,    32,   121,     0,    33,     0,    34,    35,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   607,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,     0,     0,    66,     0,     0,     0,    67,     0,     0,
      68,    69,    70,   203,   204,   205,   206,    71,   207,   208,
     209,   210,   211,    72,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   608,   222,   223,
     224,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,    77,     0,     0,     0,   226,    78,    79,   227,   228,
      12,    13,     0,    14,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,    24,    25,
       0,    26,     0,    27,    28,    29,    30,     0,     0,     0,
      31,    32,     0,     0,    33,     0,    34,    35,    36,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,     0,
       0,    66,     0,     0,     0,    67,     0,     0,    68,    69,
      70,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
       0,     0,    75,   191,    76,     0,     0,     0,     0,    77,
       0,     0,     0,     0,    78,    79,    12,    13,     0,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,    24,    25,     0,    26,     0,    27,
      28,    29,    30,     0,     0,     0,    31,    32,     0,     0,
      33,     0,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,     0,     0,    66,     0,     0,
       0,    67,     0,     0,    68,    69,    70,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,     0,     0,    75,   232,
      76,     0,     0,     0,     0,    77,     0,     0,     0,     0,
      78,    79,    12,    13,     0,    14,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
      24,    25,     0,    26,     0,    27,    28,    29,    30,     0,
       0,     0,    31,    32,     0,     0,    33,   299,    34,    35,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,     0,     0,    66,     0,     0,     0,    67,     0,     0,
      68,    69,    70,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,    77,     0,     0,     0,     0,    78,    79,    12,    13,
       0,    14,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,    24,    25,     0,    26,
       0,    27,    28,    29,    30,     0,     0,     0,    31,    32,
       0,     0,    33,     0,    34,    35,    36,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
      75,   348,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    78,    79,    12,    13,     0,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,    24,    25,     0,    26,     0,    27,    28,    29,
      30,     0,     0,     0,    31,    32,     0,     0,    33,   432,
      34,    35,    36,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,     0,     0,     0,    42,    43,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,     0,     0,    66,     0,     0,     0,    67,
       0,     0,    68,    69,    70,     0,     0,     0,     0,    71,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,     0,     0,    77,     0,     0,     0,     0,    78,    79,
      12,    13,     0,    14,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,    24,    25,
       0,    26,     0,    27,    28,    29,    30,     0,     0,     0,
      31,    32,     0,     0,    33,     0,    34,    35,    36,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,     0,
       0,    66,     0,     0,     0,    67,     0,     0,    68,    69,
      70,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
       0,     0,    75,   539,    76,     0,     0,     0,     0,    77,
       0,     0,     0,     0,    78,    79,    12,    13,     0,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,    24,    25,     0,    26,     0,    27,
      28,    29,    30,     0,     0,     0,    31,    32,     0,     0,
      33,     0,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,     0,     0,    66,     0,     0,
       0,    67,     0,     0,    68,    69,    70,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,     0,     0,    75,   633,
      76,     0,     0,     0,     0,    77,     0,     0,     0,     0,
      78,    79,    12,    13,     0,    14,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
      24,    25,     0,    26,     0,    27,    28,    29,    30,     0,
       0,     0,    31,    32,     0,     0,    33,     0,    34,    35,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,     0,     0,    66,     0,     0,     0,    67,     0,     0,
      68,    69,    70,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,    77,     0,     0,     0,     0,    78,    79,    12,    13,
       0,    14,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,    24,    25,     0,    26,
       0,    27,    28,    29,    30,     0,     0,     0,    31,    32,
       0,     0,   130,     0,    34,    35,    36,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
     126,     0,    14,   127,     0,   128,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
     250,   251,   252,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,    12,   126,     0,    14,   127,    72,
     128,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,    42,    43,    73,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,     0,    32,     0,    77,     0,     0,
       0,     0,    78,    79,     0,    37,     0,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,    67,   271,   272,   273,     0,     0,
       0,     0,     0,     0,    71,    12,   126,     0,    14,   127,
       0,   128,     0,    17,    18,    19,     0,     0,     0,     0,
      40,     0,     0,     0,    73,     0,    42,    43,     0,     0,
       0,     0,     0,    76,     0,     0,    32,     0,     0,     0,
     253,     0,     0,    78,    79,     0,    37,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,    66,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      12,   126,     0,    14,   127,     0,   128,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,    42,    43,    73,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    32,     0,     0,     0,   274,     0,     0,    78,    79,
       0,    37,     0,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    12,   126,     0,    14,   127,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
      73,     0,    42,    43,     0,     0,     0,     0,     0,    76,
       0,     0,    32,     0,     0,     0,     0,     0,     0,    78,
      79,     0,    37,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,    66,     0,     0,     0,    67,     0,     0,     0,     0,
      12,   339,     0,    14,   127,    71,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,    42,    43,    73,     0,     0,     0,     0,
       0,    32,     0,     0,    76,     0,     0,     0,     0,     0,
     149,    37,     0,     0,    78,    79,     0,     0,     0,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,     0,     0,     0,
       0,     0,    66,     0,   290,     0,    67,     0,     0,     0,
     197,   198,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,    42,    43,   199,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,   200,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   201,   202,     0,     0,     0,
       0,    66,     0,     0,     0,    67,     0,     0,   197,   198,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   199,     0,     0,    73,     0,     0,     0,     0,
       0,     0,     0,     0,    76,   200,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,   197,   198,     0,     0,
       0,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   201,   202,     0,   212,   213,   214,   215,
     199,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,   200,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   197,   198,     0,     0,     0,
       0,   201,   202,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,   200,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     201,   202,     0,   226,     0,     0,   227,   228,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,   281,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   197,
     198,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   349,   199,     0,     0,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,   385,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     388,   201,   202,     0,   226,     0,     0,   227,   228,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,   197,   198,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   389,     0,
       0,     0,   226,     0,     0,   227,   228,     0,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   390,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   391,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   197,   198,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   393,
       0,     0,     0,   226,     0,     0,   227,   228,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   394,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   395,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   197,   198,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   397,
       0,     0,     0,   226,     0,     0,   227,   228,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   398,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   405,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   197,   198,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   409,
       0,     0,     0,   226,     0,     0,   227,   228,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   410,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   411,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     412,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   197,   198,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   413,
       0,     0,     0,   226,     0,     0,   227,   228,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   414,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   415,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     416,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   197,   198,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   417,
       0,     0,     0,   226,     0,     0,   227,   228,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   418,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,   419,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     426,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   197,   198,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   427,     0,
       0,     0,     0,   226,     0,     0,   227,   228,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   428,   199,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,   199,     0,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   200,     0,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,   429,     0,
       0,     0,   201,   202,     0,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,   430,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,   197,   198,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   450,   199,     0,     0,     0,     0,
       0,     0,   226,     0,     0,   227,   228,     0,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   451,   199,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,   199,     0,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   200,     0,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,   197,   198,   454,     0,
       0,     0,   201,   202,     0,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,   461,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,   197,   198,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   466,   199,     0,     0,     0,     0,
       0,     0,   226,     0,     0,   227,   228,     0,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   197,
     198,     0,   212,   213,   214,   215,   201,   202,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,   469,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,   199,     0,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   200,     0,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,   197,   198,     0,   470,     0,
       0,     0,   201,   202,     0,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   471,     0,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,   472,     0,     0,     0,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   197,
     198,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   473,   199,     0,     0,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   197,   198,   474,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   475,     0,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   476,   199,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   197,
     198,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   477,   199,     0,     0,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   197,   198,   478,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   479,     0,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   480,   199,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   197,
     198,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   481,   199,     0,     0,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   197,   198,   482,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   483,     0,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   484,   199,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   197,
     198,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   485,   199,     0,     0,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   197,   198,   486,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   491,     0,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     197,   198,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,   199,     0,   505,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   197,   198,
       0,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,   510,     0,     0,     0,
     226,     0,     0,   227,   228,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   197,   198,     0,     0,     0,
       0,   511,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,   200,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   512,
     201,   202,     0,   226,     0,     0,   227,   228,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   513,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   197,   198,
       0,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,   516,     0,     0,     0,
     226,     0,     0,   227,   228,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,   197,   198,     0,     0,     0,
       0,   517,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,   200,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   518,
     201,   202,     0,   226,     0,     0,   227,   228,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   519,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   197,   198,
       0,   212,   213,   214,   215,   201,   202,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   199,     0,     0,     0,   520,     0,     0,     0,
     226,     0,     0,   227,   228,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,   197,   198,     0,     0,     0,     0,
       0,   521,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   200,     0,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,   530,     0,     0,   201,
     202,     0,     0,   226,     0,     0,   227,   228,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,     0,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
     197,   198,     0,     0,     0,   531,     0,     0,     0,     0,
       0,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   200,     0,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,     0,     0,     0,   535,   201,   202,     0,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   197,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   538,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   199,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   200,     0,
       0,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   543,     0,     0,     0,   201,   202,     0,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,     0,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   197,   198,
       0,     0,     0,     0,   545,     0,     0,     0,     0,     0,
       0,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   197,   198,     0,     0,     0,     0,   549,     0,
       0,     0,     0,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   200,     0,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   197,
     198,     0,     0,     0,     0,   551,     0,     0,     0,   201,
     202,     0,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   553,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,     0,     0,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,     0,   559,     0,     0,     0,     0,     0,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,     0,   560,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   198,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   200,     0,
       0,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   197,   198,     0,     0,
       0,     0,   564,     0,     0,     0,   201,   202,     0,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,   565,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,     0,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   197,   198,     0,     0,     0,     0,     0,   584,
       0,     0,     0,     0,     0,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,   199,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   200,
       0,     0,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   197,   198,     0,
     612,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
    -139,   208,   209,   210,   211,     0,   200,     0,  -139,  -139,
    -139,  -139,     0,     0,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,  -139,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   199,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     200,     0,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   202,
       0,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,     0,     0,     0,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,     0,   200,     0,     0,
       0,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,   197,   198,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     202,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   197,   198,     0,     0,     0,     0,   201,
     202,     0,     0,     0,     0,     0,   220,   221,   222,   223,
     224,     0,   197,   198,     0,     0,     0,   199,     0,     0,
       0,     0,     0,     0,     0,   226,     0,     0,   227,   228,
     200,     0,     0,     0,     0,     0,   199,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   202,
       0,     0,   222,   223,   224,     0,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   201,   202,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,   206,     0,
       0,   208,   209,   210,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,     0,     0,
     227,   228
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-176))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       9,    25,    10,    25,    43,     5,    11,    12,    13,     4,
       4,     4,     7,     7,     7,    24,     5,    23,     0,   169,
       4,    27,   197,     7,     4,     4,    33,     7,     7,   195,
       4,     4,     4,     7,     7,     7,     7,   187,   188,   189,
     190,   191,     4,    82,     4,     7,     4,     7,     4,     7,
       4,     7,     4,     7,   200,     7,    11,    12,    13,   198,
     199,   197,   197,   197,   197,    71,   197,    73,    75,   197,
      76,   197,    78,    79,   197,   197,   197,     5,   203,   197,
      89,   197,   202,   197,    90,   197,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   197,   197,   105,
     106,   197,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   197,   197,   121,   122,   123,   124,   125,
     197,   197,   197,   130,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   144,   197,   197,   197,   145,
     146,   197,   148,   148,     7,     7,   152,   198,   205,   155,
     199,   205,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     205,   205,   200,    14,   199,   181,   199,     6,   199,   203,
     199,   203,   199,   192,   199,     6,     9,     7,     6,   203,
     203,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   198,
     226,   227,   228,   231,   197,   197,   197,     8,   203,   198,
     200,     3,     4,   198,     6,     7,   200,     9,   195,    11,
      12,    13,    14,    15,    16,    17,   199,   198,   198,    21,
      22,   197,    24,   202,    26,    27,    28,    29,   202,   202,
     202,    33,    34,   202,   202,    37,   202,    39,    40,    41,
     202,   202,    44,   282,   280,   202,   202,   202,   202,   202,
     286,   287,   288,   289,   202,   291,   292,   293,   294,   295,
     296,    23,   202,    31,    32,   198,    68,   198,    30,   198,
     202,   201,    31,    32,   202,   202,   202,   202,   202,   198,
     316,   317,   198,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   198,   198,   198,    98,    99,   100,   198,
     198,   337,   198,   105,   106,   107,   108,   109,   202,    14,
     199,   202,   202,    10,   350,   203,   202,   202,   202,   202,
     202,   202,   202,   202,    86,   202,   202,   194,   202,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   383,   149,   150,   176,
     197,   194,   154,   199,   198,    -1,   158,   202,   231,   161,
     162,   163,   202,   202,   202,   202,   168,   202,   202,   198,
     198,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,   428,
     429,    -1,   194,   195,    -1,   197,    -1,   433,    -1,    -1,
     202,   169,    -1,    -1,    -1,   207,   208,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,   453,    -1,   453,    -1,   187,
     188,   189,   190,   191,    -1,   187,   188,   466,   187,   188,
     189,   190,   191,    -1,    -1,    -1,   472,    -1,   206,    -1,
      -1,   203,    -1,    -1,    23,    -1,    -1,   206,    -1,    -1,
      -1,    30,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   500,    -1,    -1,    -1,   501,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   530,   531,    -1,    -1,    -1,    -1,
      -1,    -1,   541,    -1,    -1,    -1,   542,    86,   544,    -1,
      -1,    -1,   548,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   587,   588,
     589,    -1,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,    -1,    -1,    -1,    -1,
      -1,   607,   608,    -1,    -1,   612,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   627,   628,
      -1,   630,     3,     4,    -1,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,   187,   188,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,   203,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,   154,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,   195,    -1,   197,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,   206,   207,   208,   209,   210,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,   154,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,   195,   196,   197,    -1,    -1,    -1,    -1,   202,
      -1,    -1,    -1,    -1,   207,   208,     3,     4,    -1,     6,
       7,    -1,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,   154,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
     207,   208,     3,     4,    -1,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,   154,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,   197,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,    -1,   207,   208,     3,     4,
      -1,     6,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,   154,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   196,   197,    -1,    -1,    -1,    -1,   202,    -1,    -1,
      -1,    -1,   207,   208,     3,     4,    -1,     6,     7,    -1,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
     149,   150,    -1,    -1,    -1,   154,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,   197,    -1,
      -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,   207,   208,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,    -1,
      -1,    -1,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,   154,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,   195,   196,   197,    -1,    -1,    -1,    -1,   202,
      -1,    -1,    -1,    -1,   207,   208,     3,     4,    -1,     6,
       7,    -1,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,    -1,   149,   150,    -1,    -1,    -1,   154,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,
     197,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
     207,   208,     3,     4,    -1,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    -1,   149,   150,
      -1,    -1,    -1,   154,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,   197,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,    -1,   207,   208,     3,     4,
      -1,     6,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,    -1,   149,   150,    -1,    -1,    -1,   154,
      74,    75,    76,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,    -1,   168,     3,     4,    -1,     6,     7,   174,
       9,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,   105,   106,   188,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,   197,    -1,    -1,    34,    -1,   202,    -1,    -1,
      -1,    -1,   207,   208,    -1,    44,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,    -1,   158,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,   168,     3,     4,    -1,     6,     7,
      -1,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,   188,    -1,   105,   106,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    34,    -1,    -1,    -1,
     204,    -1,    -1,   207,   208,    -1,    44,    -1,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
      -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   188,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,
      -1,    34,    -1,    -1,    -1,   204,    -1,    -1,   207,   208,
      -1,    44,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,     3,     4,    -1,     6,     7,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
     188,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,   207,
     208,    -1,    44,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,   168,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,   105,   106,   188,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
     203,    44,    -1,    -1,   207,   208,    -1,    -1,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    25,    -1,   158,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,   105,   106,    55,    -1,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   208,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    96,    97,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,   158,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,   208,    31,    32,    -1,    -1,
      -1,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    96,    97,    -1,   177,   178,   179,   180,
      55,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    -1,    68,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    -1,    31,
      32,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    55,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    -1,    68,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      -1,    31,    32,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,   202,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    31,    32,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    31,    32,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    31,    32,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    31,    32,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    31,    32,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    68,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    31,    32,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,   201,    -1,
      -1,    -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    55,    -1,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    68,    -1,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,   198,    -1,
      -1,    -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      -1,    31,    32,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    55,    -1,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    68,    -1,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    -1,    31,    32,   198,    -1,
      -1,    -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      -1,    31,    32,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    31,
      32,    -1,   177,   178,   179,   180,    96,    97,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,   194,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    68,    -1,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    -1,    -1,    -1,    31,    32,    -1,   198,    -1,
      -1,    -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    68,    -1,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      31,    32,    -1,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    55,   199,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    -1,    31,
      32,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    31,    32,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    68,    -1,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    -1,    31,
      32,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    31,    32,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    68,    -1,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    -1,    31,
      32,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    31,    32,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    68,    -1,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    -1,    31,
      32,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    31,    32,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    68,    -1,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    -1,
      31,    32,   177,   178,   179,   180,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,   201,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    31,    32,
      -1,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    -1,    68,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    -1,    68,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      31,    32,    -1,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    31,    32,
      -1,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    -1,    68,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    -1,    68,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      96,    97,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      31,    32,    -1,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,   202,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    31,    32,
      -1,   177,   178,   179,   180,    96,    97,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,   202,    -1,    -1,    -1,
     206,    -1,    -1,   209,   210,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    -1,    68,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    68,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    96,
      97,    -1,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      31,    32,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,   164,   165,   166,
     167,    -1,   169,   170,   171,   172,   173,    68,    -1,    -1,
     177,   178,   179,   180,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    96,    97,    -1,    -1,   206,
      -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    -1,    68,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    96,    97,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    68,    -1,
      -1,   177,   178,   179,   180,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    96,    97,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      -1,    -1,    -1,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    31,    32,
      -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,    -1,
      -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    68,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    31,    32,    -1,    -1,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    96,    97,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,   164,   165,   166,   167,    -1,   169,   170,   171,   172,
     173,    68,    -1,    -1,   177,   178,   179,   180,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    31,
      32,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    96,
      97,    -1,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,
      -1,    -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,
     169,   170,   171,   172,   173,    -1,    68,    -1,   177,   178,
     179,   180,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,
     209,   210,    -1,    -1,    -1,    -1,    -1,   164,   165,   166,
     167,    -1,   169,   170,   171,   172,   173,    -1,    -1,    -1,
     177,   178,   179,   180,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    31,    32,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    68,    -1,    -1,   177,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      31,    32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,   164,   165,
     166,   167,    -1,   169,   170,   171,   172,   173,    68,    -1,
      -1,   177,   178,   179,   180,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    31,    32,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    96,    97,    -1,    -1,
     206,    -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    68,    -1,    -1,   177,   178,   179,   180,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,    96,    97,    -1,    -1,   206,    -1,    -1,   209,   210,
      -1,    -1,    -1,    -1,   164,   165,   166,   167,    -1,   169,
     170,   171,   172,   173,    -1,    -1,    -1,   177,   178,   179,
     180,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,    31,    32,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
     210,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,   164,
     165,   166,   167,    -1,   169,   170,   171,   172,   173,    68,
      -1,    -1,   177,   178,   179,   180,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    31,    32,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      -1,   206,    -1,    -1,   209,   210,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,   164,   165,   166,   167,    -1,
     169,   170,   171,   172,   173,    -1,    68,    -1,   177,   178,
     179,   180,    -1,    -1,   183,   184,   185,   186,   187,   188,
     189,   190,   191,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    96,    97,    -1,   206,    -1,    -1,
     209,   210,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
     164,   165,   166,   167,    -1,   169,   170,   171,   172,   173,
      68,    -1,    -1,   177,   178,   179,   180,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,   206,    -1,    -1,   209,   210,    -1,    -1,    -1,
      -1,    -1,   164,   165,   166,   167,    -1,   169,   170,   171,
     172,   173,    -1,    -1,    -1,    -1,   178,   179,   180,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,   209,   210,    -1,
      -1,    -1,    -1,    -1,    55,    -1,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,    -1,    68,    -1,    -1,
      -1,   179,   180,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,   206,    -1,
      -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,   166,   167,    -1,   169,   170,
     171,   172,   173,    31,    32,    -1,    -1,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,   187,   188,   189,   190,
     191,    -1,    31,    32,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,   210,
      68,    -1,    -1,    -1,    -1,    -1,    55,   164,   165,   166,
     167,    -1,   169,   170,   171,   172,   173,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,   189,   190,   191,    -1,    -1,   164,   165,   166,
     167,    -1,   169,   170,   171,   172,   173,    96,    97,   206,
      -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,   165,   166,   167,
      -1,   169,   170,   171,   172,   173,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   165,   166,   167,    -1,
      -1,   170,   171,   172,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
     209,   210
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   212,   213,     0,    43,    82,   215,     5,     5,   219,
     197,   195,     3,     4,     6,     7,     9,    11,    12,    13,
      14,    15,    16,    17,    21,    22,    24,    26,    27,    28,
      29,    33,    34,    37,    39,    40,    41,    44,    68,    98,
      99,   100,   105,   106,   107,   108,   109,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   149,   150,   154,   158,   161,   162,
     163,   168,   174,   188,   194,   195,   197,   202,   207,   208,
     214,   220,   222,   148,   214,   216,   217,   218,   220,   221,
      23,    30,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    86,   187,   188,   203,    23,    30,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    86,   187,
     188,   203,   200,   197,   197,   197,     4,     7,     9,   222,
      37,   220,   197,     4,     7,   222,     4,     7,     4,     7,
       4,     7,   197,   197,   221,   197,   197,   197,   197,   203,
     202,     5,   197,   197,   197,   197,     4,     7,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,     7,   197,     4,
       7,   197,     4,     7,   197,   197,   197,   197,   222,   197,
     222,   196,   221,   222,   222,   222,     7,    31,    32,    55,
      68,    96,    97,   164,   165,   166,   167,   169,   170,   171,
     172,   173,   177,   178,   179,   180,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   202,   206,   209,   210,     7,
     198,   199,   196,   220,   222,     4,     7,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   205,   205,
      74,    75,    76,   204,   222,   222,     4,     7,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   205,
     205,    74,    75,    76,   204,   222,   222,   222,   222,   222,
     200,   202,   221,    14,     4,     7,    25,   203,    25,   203,
      25,   199,   199,   199,   199,   199,   199,     6,     6,    38,
     222,   222,     7,   222,   169,   187,   188,   189,   190,   191,
     222,     4,     7,     4,     7,   222,   203,   203,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,     6,   200,     9,     4,
     222,     4,     7,   198,   198,   198,   198,     8,   196,   198,
     203,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   200,   195,   218,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   201,   198,   198,
     198,   222,    38,   197,   198,   198,   222,   222,   222,   222,
       4,     7,   222,   222,   222,   222,   222,   222,   198,   198,
     198,   198,   198,   199,   198,   202,   202,   202,   202,   202,
     202,   198,   198,   198,   198,   198,   198,   222,   222,   194,
     198,   198,   199,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   222,   199,
     198,   198,   198,   198,   202,   202,   202,   199,   222,   201,
     221,   203,   220,   220,   202,   201,    14,   222,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   214,   222,   202,   220,
     199,   199,   194,   222,   202,   201,   222,    10,   202,   196,
     222,   176,   197,   198,   199,   198,   222,   222,   194,   198,
     202,   198,   198,   202,   220,   222,   202,   222,   202,   199,
     199,   222,   202,   202,   198,   198,    31,    32,   169,   187,
     188,   189,   190,   191,   206,    31,    32,   169,   187,   188,
     189,   190,   191,   206,   199,   202,   202,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,     4,     7,    68,   188,   220,
     220,   220,   195,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   198,   198,   222,
     221,   220,   220,   196
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 276 "./sintactico.y"
    { 
			exit(EXIT_SUCCESS); 
			liberar(&idFunciones); 
			liberar(&identificadores); 
			liberar_stack(&pila);
			liberar_array(&arreglos);
			liberar_gigantes(&gigantes);
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 287 "./sintactico.y"
    {
			push_l_funcion(&idFunciones, (yyvsp[(3) - (6)].nameFunction), (yyvsp[(5) - (6)].nPtr));
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 290 "./sintactico.y"
    {;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 294 "./sintactico.y"
    { 
		(yyval.type_int) = INT;
		argsInFunction++; 
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 298 "./sintactico.y"
    {
		(yyval.type_int) = DECIMAL;
		argsInFunction++;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 302 "./sintactico.y"
    {
		(yyval.type_int) = BOOL;
		argsInFunction++;
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 309 "./sintactico.y"
    {
		printf("function declaration: %s-%d\n", (yyvsp[(2) - (8)].nameFunction), argsInFunction);
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 312 "./sintactico.y"
    {;}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 318 "./sintactico.y"
    {;
		/* Con esto hacemos que la función pueda interpretarse así:
		function $algo$() {stmt_list}		*/
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 330 "./sintactico.y"
    { 
			printf("El tipo fue... %d, para el ID = '%s'\n", (yyvsp[(1) - (2)].type_int), (yyvsp[(2) - (2)].identificador));
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 338 "./sintactico.y"
    { 
		ex((yyvsp[(2) - (2)].nPtr));			/* Ejecutar los nodos */ 
		freeNode((yyvsp[(2) - (2)].nPtr)); 	/* Liberar los nodos */
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 346 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 347 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 348 "./sintactico.y"
    { printf("Array detected...\n"); (yyval.nPtr) = NULL;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 349 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 350 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINTN, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 351 "./sintactico.y"
    { (yyval.nPtr) = opr(RAND, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 352 "./sintactico.y"
    { (yyval.nPtr) = opr(READ, 1, id((yyvsp[(3) - (5)].sIndex))); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 353 "./sintactico.y"
    { (yyval.nPtr) = opr(_READ_, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 354 "./sintactico.y"
    { (yyval.nPtr) = opr(PUTS, 1, conStr((yyvsp[(3) - (5)].cadena), typeCadena)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 355 "./sintactico.y"
    { (yyval.nPtr) = opr(BREAK, 0); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 356 "./sintactico.y"
    { (yyval.nPtr) = opr(EXIT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 357 "./sintactico.y"
    { (yyval.nPtr) = opr(PRASCII, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 358 "./sintactico.y"
    { (yyval.nPtr) = opr(CLEAR_STACK, 0); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 359 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VARS, 0); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 360 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VARS, 0); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 361 "./sintactico.y"
    { 
		 			(yyval.nPtr) = opr(INITIALIZE_IDENTIFIER, 2, idWithType((yyvsp[(2) - (5)].identificador), (yyvsp[(1) - (5)].type_int)), (yyvsp[(4) - (5)].nPtr)); 
										}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 364 "./sintactico.y"
    { 
							/* Buscar si ya está definida la variable, sino hay que
								crearla con el valor de la expresión.
							Sino hay que sobreescribir con el valor de dicha expresión */
							(yyval.nPtr) = opr('=', 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); 
										}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 370 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGNACION_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 371 "./sintactico.y"
    { 
			(yyval.nPtr) = opr(ARRAY_SIMPLE_ASIGN, 3, idArray((yyvsp[(1) - (7)].idArray)), (yyvsp[(3) - (7)].nPtr), (yyvsp[(6) - (7)].nPtr)); 
	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 374 "./sintactico.y"
    { (yyval.nPtr) = opr(INITRAND, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 375 "./sintactico.y"
    { (yyval.nPtr) = opr(_INITRAND_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 376 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_HAPPY, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 377 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_SAD, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 378 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_NO, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 380 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_HAPPY_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 381 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_SAD_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 382 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_NO_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 383 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_ADD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 384 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SUB, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 385 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MUL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 386 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_DIV, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 387 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MOD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 388 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_POW, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 389 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTLEFT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 390 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTRIGHT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 391 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_AND, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 392 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_OR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 393 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGNACION_PASCAL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 395 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_ADD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 396 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SUB_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 397 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MUL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 398 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_DIV_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 399 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MOD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 400 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTLEFT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 401 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTRIGHT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 402 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_AND_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 403 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_OR_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 404 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_PASCAL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 405 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_POW_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 406 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 407 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 409 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 410 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 411 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVE, 2, (yyvsp[(2) - (5)].nPtr), id((yyvsp[(4) - (5)].sIndex))); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 413 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVE_, 2, (yyvsp[(2) - (5)].nPtr), idS((yyvsp[(4) - (5)].identificador))); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 414 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 415 "./sintactico.y"
    { (yyval.nPtr) = opr(ADDASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 416 "./sintactico.y"
    { (yyval.nPtr) = opr(SUBASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 418 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 419 "./sintactico.y"
    { (yyval.nPtr) = opr(_ADDASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 420 "./sintactico.y"
    { (yyval.nPtr) = opr(_SUBASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 421 "./sintactico.y"
    { (yyval.nPtr) = opr(SWAP, 2, id((yyvsp[(1) - (4)].sIndex)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 422 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_, 2, idS((yyvsp[(1) - (4)].identificador)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 424 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_ID_VAR_, 2, idS((yyvsp[(1) - (4)].identificador)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 425 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_VAR_ID_, 2, id((yyvsp[(1) - (4)].sIndex)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 426 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_ADD, 0); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 427 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_SUB, 0); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 428 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_MUL, 0); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 429 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_DIV, 0); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 430 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 431 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 432 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 433 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 435 "./sintactico.y"
    { (yyval.nPtr) = opr(_INCR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 436 "./sintactico.y"
    { (yyval.nPtr) = opr(_DECR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 437 "./sintactico.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 439 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 440 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS, 5, id((yyvsp[(2) - (12)].sIndex)), (yyvsp[(4) - (12)].nPtr), (yyvsp[(6) - (12)].nPtr), (yyvsp[(9) - (12)].nPtr), (yyvsp[(11) - (12)].nPtr)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 441 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 442 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 443 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 444 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 445 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 446 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 447 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 448 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH, 4, (yyvsp[(3) - (11)].nPtr), (yyvsp[(7) - (11)].nPtr), id((yyvsp[(9) - (11)].sIndex)), (yyvsp[(11) - (11)].nPtr)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 450 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 451 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 452 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 453 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 454 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 455 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 456 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 457 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 458 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 459 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH_ID, 4, (yyvsp[(3) - (11)].nPtr), (yyvsp[(7) - (11)].nPtr), idS((yyvsp[(9) - (11)].identificador)), (yyvsp[(11) - (11)].nPtr)); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 460 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 461 "./sintactico.y"
    { (yyval.nPtr) = opr(UNLESS, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 462 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 463 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 464 "./sintactico.y"
    { (yyval.nPtr) = NULL; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 465 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 466 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(2) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 467 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(3) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 469 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_ID, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 470 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_VAR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 471 "./sintactico.y"
    { (yyval.nPtr) = opr(SYSTEM, 1, conStr((yyvsp[(3) - (5)].cadena), typeSystem)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 472 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 473 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE_AND_ASSIGN, 2, idS((yyvsp[(3) - (7)].identificador)), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 474 "./sintactico.y"
    {	
			/* Declaración de un array */
			(yyval.nPtr) = opr(DECLARE_ARRAY, 2, idArray((yyvsp[(3) - (7)].idArray)), (yyvsp[(5) - (7)].nPtr)); 
	}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 478 "./sintactico.y"
    {
		/*printf("Tipo para esta shit %d\n", $5);*/
		(yyval.nPtr) = NULL;
	}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 483 "./sintactico.y"
    { printf("[declare_g(%s, %s);]\n", (yyvsp[(3) - (7)].idgigante), (yyvsp[(5) - (7)].cadena_gigante)); 
		(yyval.nPtr) = NULL;
	}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 489 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 490 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 494 "./sintactico.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].iValue)); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 495 "./sintactico.y"
    { 
	
		/*ver_palabras(identificadores);	*/
		(yyval.nPtr) = idS((yyvsp[(1) - (1)].identificador)); 
		if(!buscar(identificadores, (yyvsp[(1) - (1)].identificador))) {
			fprintf(stdout, "Error, variable '%s' no declarada\n", (yyvsp[(1) - (1)].identificador));
		}		

	 }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 504 "./sintactico.y"
    { (yyval.nPtr) = conStr((yyvsp[(1) - (1)].cadena), typeCadena); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 505 "./sintactico.y"
    { (yyval.nPtr) = opr(ARRAY_POS, 2, idArray((yyvsp[(1) - (4)].idArray)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 506 "./sintactico.y"
    { (yyval.nPtr) = opr(PAR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 507 "./sintactico.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 508 "./sintactico.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 509 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 510 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 511 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 512 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 513 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 514 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 515 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 516 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 517 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 518 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 519 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 520 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 521 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 522 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 523 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 524 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 525 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 526 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 527 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 528 "./sintactico.y"
    { (yyval.nPtr) = opr('%', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 529 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 530 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 531 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 532 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 533 "./sintactico.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 534 "./sintactico.y"
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 535 "./sintactico.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 536 "./sintactico.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 537 "./sintactico.y"
    { (yyval.nPtr) = opr(ANDBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 538 "./sintactico.y"
    { (yyval.nPtr) = opr(ORBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 539 "./sintactico.y"
    { (yyval.nPtr) = opr(XOROP, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 540 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTLEFT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 541 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTRIGHT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 542 "./sintactico.y"
    { (yyval.nPtr) = opr(STRLEN, 1, conStr((yyvsp[(3) - (4)].cadena), typeStrlen)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 543 "./sintactico.y"
    { (yyval.nPtr) = opr(ABS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 544 "./sintactico.y"
    { (yyval.nPtr) = opr(FACTORIAL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 545 "./sintactico.y"
    { (yyval.nPtr) = opr(SUMATORIA, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 546 "./sintactico.y"
    { (yyval.nPtr) = opr(SQRT, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 547 "./sintactico.y"
    { (yyval.nPtr) = opr(ACOS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 548 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 549 "./sintactico.y"
    { (yyval.nPtr) = opr(ATAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 550 "./sintactico.y"
    { (yyval.nPtr) = opr(CEIL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 551 "./sintactico.y"
    { (yyval.nPtr) = opr(COS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 552 "./sintactico.y"
    { (yyval.nPtr) = opr(COSH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 553 "./sintactico.y"
    { (yyval.nPtr) = opr(EXP, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 554 "./sintactico.y"
    { (yyval.nPtr) = opr(LN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 555 "./sintactico.y"
    { (yyval.nPtr) = opr(FLOOR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 556 "./sintactico.y"
    { (yyval.nPtr) = opr(SIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 557 "./sintactico.y"
    { (yyval.nPtr) = opr(SINH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 558 "./sintactico.y"
    { (yyval.nPtr) = opr(TAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 559 "./sintactico.y"
    { (yyval.nPtr) = opr(TANH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 560 "./sintactico.y"
    { (yyval.nPtr) = opr(CALL, 0); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 561 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 562 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 563 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 564 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 565 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 566 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VAR, 1, id((yyvsp[(2) - (2)].sIndex))); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 567 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_CONST, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 568 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_ID, 1, idS((yyvsp[(2) - (2)].identificador))); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 569 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 570 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(2) - (2)].sIndex))); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 571 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 572 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(2) - (2)].identificador))); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 573 "./sintactico.y"
    { (yyval.nPtr) = opr(POP, 0); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 574 "./sintactico.y"
    { (yyval.nPtr) = opr(POP, 0); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 575 "./sintactico.y"
    { 
					/* Comparaciones de operadores */
					if(strcmp(opVar, "+") == 0) {
						(yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
					} else if(strcmp(opVar, "-") == 0) {
						(yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
					} else if(strcmp(opVar, "*") == 0) {
						(yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
					} else if(strcmp(opVar, "/") == 0) {
						(yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
					} else if(strcmp(opVar, "^") == 0) {
						(yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
					} 
										}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 589 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;



/* Line 1806 of yacc.c  */
#line 5475 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 591 "./sintactico.y"

/* SHIT */
nodeType *con(double value) {
	nodeType *p;
	/* allocate node */
	if((p = malloc(sizeof(conNodeType))) == NULL)
		yyerror("Memoria insuficiente para este programa.");
	/* copy information */
	p->type = typeCon;
	p->con.value = value;
	return p;
}

nodeType *conStr(char valueString[], short type) {
	nodeType *p;
	if((p = malloc(sizeof(conNodeType))) == NULL) {
		yyerror("Memoria insuficiente para este programa.");
	}
	/* Asignamos el tipo */
	p->type = type;
	strcpy(p->con.cadena, valueString);
	return p;
}

nodeType *idArray(char valueString[]) {
	nodeType *p;
	/* allocate node */
	if((p = malloc(sizeof(idNodeType))) == NULL) {
		yyerror("Memoria insuficiente para este programa.");
	}
	/* copy information */
	p->type = typeArray; 
	/* Copiar el id */
	strcpy(p->id.idArray, valueString);
	return p;
}

nodeType *id(char i) {
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(idNodeType))) == NULL)
		yyerror("Memoria insuficiente para este programa.");
	/* copy information */
	p->type = typeId;
	p->id.i = i;
	return p;
}

nodeType *idS(char *s) {

	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(idNodeType))) == NULL)
		yyerror("Memoria insuficiente para este programa.");
	/* copy information */
	p->type = typeId2;
	/* Copiar el id: */
	strcpy(p->id.identificador, s);
	return p;
}

nodeType *idWithType(char *s, short data_type) {
	nodeType *p;

	if((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("Memoria insuficiente para este programa.");
	/* copy information */
	p->type = typeId2;	
	/* Copiar el id: */
	strcpy(p->id.identificador, s);
	/* Ponerle el tipo de dato */
	p->tipoDato = data_type; 
	return p;
}

nodeType *opr(int oper, unsigned short nops, ...) {
	va_list ap;
	nodeType *p;
	size_t size;
	int i;
	/* allocate node */
	size = sizeof(oprNodeType) + (nops - 1) * sizeof(nodeType*);
	if ((p = malloc(size)) == NULL)
		yyerror("Memoria insuficiente para este programa.");
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

char *getExtension(char s[]) {

    char *respaldo = malloc(strlen(s) + 1);
    char *elemento = strtok(s, ".");

    while(elemento != NULL) {
        strncpy(respaldo, elemento, strlen(elemento) + 1);
        elemento = strtok(NULL, ".");
    }

    return respaldo;
}

void yyerror(char *s) {
	fprintf(stdout, "%s, probable antes de la línea %d.\n", s, lineno + 1);
}

int main(int argc, char **argv) {

	char *_respaldo = NULL;
	if(argc > 1) {
		
		_respaldo = malloc(strlen(argv[1]) + 1);
		strncpy(_respaldo, argv[1], strlen(argv[1]) + 1);
		stdin = fopen(argv[1], "r");

		if(strlen(argv[1]) <= 3) {
			fprintf(stderr, "'%s' debe tener una extensión \"yar\"\n", argv[1]);
			exit(EXIT_FAILURE);
		} else if(strcmp(getExtension(argv[1]), "yar") != 0) {
			fprintf(stderr, "'%s' debe tener una extensión \"yar\"\n", argv[1]);
			exit(EXIT_FAILURE);
		}	

		if(stdin == NULL) {
			fprintf(stderr, "Error abriendo archivo [%s]\n", _respaldo);
			free(_respaldo);
			exit(EXIT_FAILURE);
		}
	} else {
		/* PENDIENTE Realizar una función about */
		printf("\nyare\tv1.0\n\n");
		return EXIT_SUCCESS;
	}

	srand(time(NULL));
	yyparse();
	free(_respaldo);
	return EXIT_SUCCESS;
}


