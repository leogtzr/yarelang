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
	struct _arrays *arreglos = NULL;
	double pila[100];
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
#line 527 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 539 "y.tab.c"

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
#define YYLAST   7974

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  208
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNRULES -- Number of states.  */
#define YYNSTATES  620

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   438

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   204,     2,     2,     2,   203,   206,     2,
     194,   195,   186,   184,   196,   185,   191,   187,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   199,
     177,   200,   176,   201,   202,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   197,     2,   198,   188,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   192,   207,   193,   205,     2,     2,     2,
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
     175,   178,   179,   180,   181,   182,   183,   189,   190
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    15,    16,    18,    20,    22,    31,
      32,    34,    36,    37,    41,    43,    46,    51,    54,    55,
      57,    60,    67,    73,    79,    83,    89,    95,   101,   104,
     110,   116,   122,   127,   132,   140,   145,   150,   155,   160,
     165,   170,   175,   180,   185,   190,   195,   200,   205,   210,
     215,   220,   225,   230,   235,   240,   245,   250,   255,   260,
     265,   270,   275,   280,   285,   290,   296,   302,   308,   314,
     320,   326,   332,   338,   344,   350,   356,   362,   367,   372,
     377,   382,   387,   392,   397,   402,   407,   412,   417,   422,
     427,   432,   438,   449,   462,   473,   484,   495,   506,   517,
     528,   539,   549,   560,   571,   582,   593,   604,   615,   626,
     637,   648,   658,   664,   670,   678,   682,   685,   689,   697,
     707,   712,   717,   723,   729,   734,   740,   748,   756,   766,
     774,   780,   786,   788,   791,   793,   795,   797,   802,   807,
     809,   812,   815,   818,   821,   825,   829,   833,   837,   841,
     845,   849,   853,   857,   861,   865,   869,   873,   877,   881,
     885,   889,   893,   897,   901,   905,   909,   913,   917,   921,
     925,   929,   933,   937,   941,   946,   951,   956,   963,   968,
     973,   978,   983,   988,   993,   998,  1003,  1008,  1013,  1018,
    1023,  1028,  1033,  1036,  1041,  1046,  1051,  1056,  1060
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     209,     0,    -1,   210,   212,   216,   191,    -1,   210,    89,
       5,   192,   218,   193,    -1,    -1,    11,    -1,    12,    -1,
      13,    -1,    43,     5,   194,   213,   195,   192,   218,   193,
      -1,    -1,   214,    -1,   155,    -1,    -1,   214,   196,   215,
      -1,   215,    -1,   211,     7,    -1,   211,     7,   197,   198,
      -1,   216,   217,    -1,    -1,   199,    -1,   219,   199,    -1,
     157,     7,   197,   219,   198,   199,    -1,    16,   194,   219,
     195,   199,    -1,    39,   194,   219,   195,   199,    -1,    17,
     219,   199,    -1,    22,   194,     4,   195,   199,    -1,    22,
     194,     7,   195,   199,    -1,    33,   194,     6,   195,   199,
      -1,   105,   199,    -1,   107,   194,   219,   195,   199,    -1,
      40,   194,   219,   195,   199,    -1,   211,     7,   200,   219,
     199,    -1,     4,   200,   219,   199,    -1,     7,   200,   219,
     199,    -1,     9,   197,   219,   198,   200,   219,   199,    -1,
       4,   200,   201,   199,    -1,     7,   200,   201,   199,    -1,
       4,   200,    74,   199,    -1,     4,   200,    75,   199,    -1,
       4,   200,    76,   199,    -1,     7,   200,    74,   199,    -1,
       7,   200,    75,   199,    -1,     7,   200,    76,   199,    -1,
       4,    45,   219,   199,    -1,     4,    46,   219,   199,    -1,
       4,    47,   219,   199,    -1,     4,    48,   219,   199,    -1,
       4,    49,   219,   199,    -1,     4,    54,   219,   199,    -1,
       4,    50,   219,   199,    -1,     4,    51,   219,   199,    -1,
       4,    52,   219,   199,    -1,     4,    53,   219,   199,    -1,
       4,    23,   219,   199,    -1,     7,    45,   219,   199,    -1,
       7,    46,   219,   199,    -1,     7,    47,   219,   199,    -1,
       7,    48,   219,   199,    -1,     7,    49,   219,   199,    -1,
       7,    50,   219,   199,    -1,     7,    51,   219,   199,    -1,
       7,    52,   219,   199,    -1,     7,    53,   219,   199,    -1,
       7,    23,   219,   199,    -1,     7,    54,   219,   199,    -1,
      24,     4,   200,   219,   199,    -1,    24,     4,    25,   219,
     199,    -1,    24,     7,   200,   219,   199,    -1,    24,     7,
      25,   219,   199,    -1,    26,   219,    25,     4,   199,    -1,
      26,   219,    25,     7,   199,    -1,    27,     4,   196,   219,
     199,    -1,    28,     4,   196,   219,   199,    -1,    29,     4,
     196,   219,   199,    -1,    27,     7,   196,   219,   199,    -1,
      28,     7,   196,   219,   199,    -1,    29,     7,   196,   219,
     199,    -1,     4,    30,     4,   199,    -1,     7,    30,     7,
     199,    -1,     7,    30,     4,   199,    -1,     4,    30,     7,
     199,    -1,    68,   200,   184,   199,    -1,    68,   200,   185,
     199,    -1,    68,   200,   186,   199,    -1,    68,   200,   187,
     199,    -1,    68,   200,   188,   199,    -1,    68,   200,   166,
     199,    -1,     4,   184,   202,   199,    -1,     4,   185,   202,
     199,    -1,     7,   184,   202,   199,    -1,     7,   185,   202,
     199,    -1,    14,   194,   219,   195,   217,    -1,   115,     4,
     200,   219,   196,   219,   196,   185,   219,   217,    -1,   115,
       4,   200,   219,   196,   219,   196,   184,   219,   192,   218,
     193,    -1,   115,     4,   200,   219,   196,   219,   196,   186,
     219,   217,    -1,   115,     4,   200,   219,   196,   219,   196,
     187,   219,   217,    -1,   115,     4,   200,   219,   196,   219,
     196,   188,   219,   217,    -1,   115,     4,   200,   219,   196,
     219,   196,   166,   219,   217,    -1,   115,     4,   200,   219,
     196,   219,   196,   203,   219,   217,    -1,   115,     4,   200,
     219,   196,   219,   196,    31,   219,   217,    -1,   115,     4,
     200,   219,   196,   219,   196,    32,   219,   217,    -1,   116,
     194,   219,    80,   219,   196,     4,   195,   217,    -1,   115,
       7,   200,   219,   196,   219,   196,   185,   219,   217,    -1,
     115,     7,   200,   219,   196,   219,   196,   184,   219,   217,
      -1,   115,     7,   200,   219,   196,   219,   196,   186,   219,
     217,    -1,   115,     7,   200,   219,   196,   219,   196,   187,
     219,   217,    -1,   115,     7,   200,   219,   196,   219,   196,
     188,   219,   217,    -1,   115,     7,   200,   219,   196,   219,
     196,   166,   219,   217,    -1,   115,     7,   200,   219,   196,
     219,   196,   203,   219,   217,    -1,   115,     7,   200,   219,
     196,   219,   196,    31,   219,   217,    -1,   115,     7,   200,
     219,   196,   219,   196,    32,   219,   217,    -1,   116,   194,
     219,    80,   219,   196,     7,   195,   217,    -1,    15,   194,
     219,   195,   217,    -1,   114,   194,   219,   195,   217,    -1,
      15,   194,   219,   195,   217,   173,   217,    -1,   192,   218,
     193,    -1,   192,   193,    -1,    37,   218,    38,    -1,    21,
     217,    14,   194,   219,   195,   199,    -1,    21,    37,   218,
      38,    14,   194,   219,   195,   199,    -1,     7,    93,   219,
     199,    -1,     4,    93,   219,   199,    -1,   156,   194,     6,
     195,   199,    -1,    81,   194,   219,   195,   199,    -1,    82,
     194,   195,   199,    -1,    41,   194,     7,   195,   199,    -1,
      41,   194,     7,   196,   219,   195,   199,    -1,   157,   194,
       9,   196,   219,   195,   199,    -1,    41,   194,     7,   196,
     211,   196,   219,   195,   199,    -1,   171,   194,     8,   196,
      10,   195,   199,    -1,    83,   194,     7,   195,   199,    -1,
      83,   194,     4,   195,   199,    -1,   217,    -1,   218,   217,
      -1,     3,    -1,     7,    -1,     6,    -1,     9,   197,   219,
     198,    -1,    44,   194,   219,   195,    -1,     4,    -1,   185,
     219,    -1,   204,   219,    -1,   205,   219,    -1,   165,   219,
      -1,   219,   184,   219,    -1,   219,   161,   219,    -1,   219,
     185,   219,    -1,   219,   162,   219,    -1,   219,   186,   219,
      -1,   219,   164,   219,    -1,   219,   187,   219,    -1,   219,
     163,   219,    -1,   219,   177,   219,    -1,   219,   167,   219,
      -1,   219,   104,   219,    -1,   219,   176,   219,    -1,   219,
     168,   219,    -1,   219,   103,   219,    -1,   219,   188,   219,
      -1,   219,   166,   219,    -1,   219,   203,   219,    -1,   219,
     183,   219,    -1,   219,   170,   219,    -1,   219,   182,   219,
      -1,   219,   169,   219,    -1,   219,   180,   219,    -1,   219,
     181,   219,    -1,   219,   175,   219,    -1,   219,   174,   219,
      -1,   219,   206,   219,    -1,   219,   207,   219,    -1,   219,
      55,   219,    -1,   219,    31,   219,    -1,   219,    32,   219,
      -1,    34,   194,     6,   195,    -1,   138,   194,   219,   195,
      -1,   139,   194,   219,   195,    -1,   140,   194,   219,   196,
     219,   195,    -1,   141,   194,   219,   195,    -1,   142,   194,
     219,   195,    -1,   143,   194,   219,   195,    -1,   144,   194,
     219,   195,    -1,   145,   194,   219,   195,    -1,   146,   194,
     219,   195,    -1,   147,   194,   219,   195,    -1,   148,   194,
     219,   195,    -1,   150,   194,   219,   195,    -1,   149,   194,
     219,   195,    -1,   151,   194,   219,   195,    -1,   152,   194,
     219,   195,    -1,   153,   194,   219,   195,    -1,   154,   194,
     219,   195,    -1,   106,     5,    -1,   112,   194,     4,   195,
      -1,   112,   194,     7,   195,    -1,   113,   194,     4,   195,
      -1,   113,   194,     7,   195,    -1,   219,    68,   219,    -1,
     194,   219,   195,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   280,   280,   290,   293,   297,   301,   305,   312,   315,
     319,   320,   321,   328,   329,   333,   336,   341,   345,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   364,   370,   371,   374,   375,   376,   377,   378,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   409,   410,   411,
     413,   414,   415,   416,   418,   419,   420,   421,   422,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   435,
     436,   437,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     469,   470,   471,   472,   473,   474,   475,   476,   480,   485,
     488,   489,   493,   494,   498,   499,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   583
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
  "_FACE_NO_", "ELIPSIS", "PUSH", "VER_PILA", "POP", "POP_EMPTY", "POP_ID",
  "POP_VAR", "INITIALIZE_IDENTIFIER", "FUNCION", "PROC", "_ASIGNACION_",
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
  "ARRAY_SIMPLE_ASIGN", "EXPR_MAS", "EXPR_MENOS", "EXPR_DIV", "EXPR_MUL",
  "EXPR_NOT", "EXPR_ELEVADO", "EXPR_MENOR", "EXPR_MAYOR", "EXPR_MENORQUE",
  "EXPR_MAYORQUE", "DECLARE_G", "IFX", "ELSE", "OR", "AND", "'>'", "'<'",
  "ORBITS", "ANDBITS", "NE", "EQ", "LE", "GE", "'+'", "'-'", "'*'", "'/'",
  "'^'", "NEGACION", "UMINUS", "'.'", "'{'", "'}'", "'('", "')'", "','",
  "'['", "']'", "';'", "'='", "'?'", "'@'", "'%'", "'!'", "'~'", "'&'",
  "'|'", "$accept", "program", "funciones", "type_specifier",
  "fun_declaration", "params", "param_list", "param", "cuerpo", "stmt",
  "stmt_list", "expr", 0
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
     425,   426,   427,   428,   429,   430,    62,    60,   431,   432,
     433,   434,   435,   436,    43,    45,    42,    47,    94,   437,
     438,    46,   123,   125,    40,    41,    44,    91,    93,    59,
      61,    63,    64,    37,    33,   126,    38,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   208,   209,   210,   210,   211,   211,   211,   212,   212,
     213,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     6,     0,     1,     1,     1,     8,     0,
       1,     1,     0,     3,     1,     2,     4,     2,     0,     1,
       2,     6,     5,     5,     3,     5,     5,     5,     2,     5,
       5,     5,     4,     4,     7,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     5,    10,    12,    10,    10,    10,    10,    10,    10,
      10,     9,    10,    10,    10,    10,    10,    10,    10,    10,
      10,     9,     5,     5,     7,     3,     2,     3,     7,     9,
       4,     4,     5,     5,     4,     5,     7,     7,     9,     7,
       5,     5,     1,     2,     1,     1,     1,     4,     4,     1,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     6,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     4,     4,     4,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     9,     1,     0,     0,    18,     0,     0,     0,
      12,     0,   134,   139,   136,   135,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,    19,     0,     0,     0,    17,
       0,    11,     0,     0,    10,    14,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,   140,   116,     0,     0,   141,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,    15,     0,     0,     3,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   198,     0,   172,
     173,   171,   197,   157,   154,   145,   147,   151,   149,   159,
     153,   156,   164,   162,   168,   167,   155,   152,   165,   166,
     163,   161,   144,   146,   148,   150,   158,   160,   169,   170,
       0,     0,    13,    53,    77,    80,    43,    44,    45,    46,
      47,    49,    50,    51,    52,    48,   121,    87,    88,    37,
      38,    39,    35,    32,    63,    79,    78,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    64,   120,    89,    90,
      40,    41,    42,    36,    33,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,     0,   138,    86,    81,    82,    83,    84,    85,     0,
     124,     0,     0,     0,   193,   194,   195,   196,     0,     0,
       0,     0,   175,   176,     0,   178,   179,   180,   181,   182,
     183,   184,   185,   187,   186,   188,   189,   190,   191,     0,
       0,     0,     0,     0,    16,     0,     0,    91,   112,    22,
     137,     0,     0,    25,    26,    66,    65,    68,    67,    69,
      70,    71,    74,    72,    75,    73,    76,    27,    23,    30,
     125,     0,     0,   123,   131,   130,    29,   113,     0,     0,
       0,     0,   122,     0,     0,     0,    31,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,    21,     0,
       0,    34,   114,     0,   118,     0,   126,     0,     0,     0,
       0,   127,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   111,     0,     0,    99,
     100,    97,     0,    92,    94,    95,    96,    98,   109,   110,
     107,   103,   102,   104,   105,   106,   108,   146,     0,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    78,     6,    83,    84,    85,     9,    86,
      87,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -163
static const yytype_int16 yypact[] =
{
    -163,    25,   -38,  -163,    11,    40,  -163,  -148,  -134,    15,
      -5,  2380,  -163,    17,  -163,    54,  -137,  -163,  -163,  -163,
    -133,  -120,  -119,  2905,  2583,  -114,     5,  2905,     6,     7,
      16,  -113,  -109,  2380,   -99,   -85,   -77,   -75,   -76,   -69,
     -62,   -57,   -61,   134,   -54,   -53,   -52,   -51,    31,   -50,
     -49,   -48,   -46,   -45,   -43,   -42,   -24,   -20,   -18,   -17,
     -13,   -12,   -11,   -10,    -7,    -4,    -3,    -2,    -6,  2905,
      -1,  2905,  -163,   959,  2905,  -163,  2905,  2905,   166,  -163,
    3008,  -163,   178,     0,     1,  -163,  -163,  1162,  2905,    46,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,
    2905,     2,     3,   406,  2905,    69,  2905,  2905,  2905,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,     8,     9,  2667,
    2905,  2905,  2905,  2905,  -163,  -163,    19,  3062,  2380,   175,
      75,   -22,   -21,  2957,    12,    22,    27,    28,    29,    30,
     188,   190,  1365,  2905,  2905,   191,  2905,   -94,  2905,    18,
      82,  -163,  -163,  2905,   107,   109,  2905,    21,    32,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,   206,    33,   218,
    1125,   220,  1125,  -163,  1568,  3118,  1125,  1125,    34,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,  -163,  2905,  2905,
    2905,    36,    37,   123,  -163,  -163,  3172,    38,    47,  3223,
    3277,  3333,  3387,  3438,  3492,  3548,  3602,  3653,  3707,  3763,
      49,    50,    52,    57,    58,    59,  3817,  3868,    61,    62,
    3922,  3978,  4032,  4083,  4137,  4193,  4247,  4298,  4352,  4408,
    4462,    63,    64,    78,    79,    94,    95,  4513,  4567,  4623,
    4677,  4728,  2905,  -163,  1771,    41,    60,    86,  2905,  2905,
    2905,  2905,   111,  2905,  2905,  2905,  2905,  2905,  2905,   105,
     106,  -163,  4782,  4838,  -162,  4906,   103,   104,   108,   110,
     112,   115,  4961,   116,   113,   121,  5011,   122,   126,   128,
     130,  5066,  2905,  2905,  5121,  5171,  5226,  5281,  5331,  5386,
    5441,  5491,  5546,  5601,  5651,  5706,  5761,  5811,  5866,  5921,
    5971,  6026,   131,  2905,    35,   114,  -163,  -163,  2905,  7521,
    7521,  7521,  7521,  7521,  7521,  7521,  7521,  7521,  7521,  1125,
    7521,  7521,  7521,  7521,  7576,  7626,  7681,  7681,  7681,  7681,
    7681,  7681,  7736,  7736,  7767,  7767,   649,  7521,  7521,  7521,
     120,  2380,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,   127,  2380,  2380,   129,  6081,
     222,  2905,   132,   135,  6131,  6186,  6241,  6291,   154,   155,
    6346,  6401,  6451,  6506,  6561,  6611,   157,  -163,   158,   159,
     160,  2752,  -163,  -163,  -163,  -163,  -163,  -163,  -163,   161,
    -163,   162,   163,   164,  -163,  -163,  -163,  -163,  2380,  6666,
    6721,  2905,  -163,  -163,  2905,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,   165,
    6771,  2905,   294,  6826,  -163,  1974,  2905,  -163,   133,  -163,
    -163,   136,  6881,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,   137,  6931,  -163,  -163,  -163,  -163,  -163,  2905,  2905,
    6986,  7041,  -163,   194,  7091,   202,  -163,  -163,  7146,  2380,
    2905,   199,  2905,   200,  7201,  7251,   119,  -163,  -163,   201,
     203,  -163,  -163,  7306,  -163,  7361,  -163,    56,   281,   208,
     209,  -163,  -163,   207,   212,  2905,  2905,  2905,  2905,  2905,
    2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,  2905,
    2905,  2905,  2905,  2380,  2380,  -163,  -163,   754,   754,   754,
    7411,   754,   754,   754,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,   754,  -163,  -163,  2822,  2905,  -163,
    -163,  -163,  2380,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  7466,  2177,  -163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,    -8,  -163,  -163,  -163,   182,  -163,    -9,
     -16,   176
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -141
static const yytype_int16 yytable[] =
{
      79,   178,    82,   278,   280,     4,    17,    18,    19,   131,
     134,   136,   132,   135,   137,   129,     7,   142,    12,    13,
     138,    14,    15,   139,    16,     3,    17,    18,    19,    20,
      21,    22,    23,   440,   441,   157,    24,    25,   158,    26,
      88,    27,    28,    29,    30,     8,    10,    89,    31,    32,
     227,     5,    33,   228,    34,    35,    36,   184,    11,    37,
     120,   121,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   296,   248,   122,   123,   249,   104,   225,   276,
     130,   140,   277,    38,   105,   141,   304,   555,   556,   305,
     297,   298,   299,   300,   301,   143,    39,    40,    41,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   144,
     100,   307,   274,   309,   308,   428,   310,   145,   429,   146,
      42,    43,    44,   549,   147,   148,   550,    45,    46,    47,
      48,    49,   149,   225,    17,    18,    19,   150,   151,   152,
     153,   154,   155,   156,   159,   160,   161,   116,   162,   163,
      81,   164,   165,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     166,    67,    68,   188,   167,   225,   168,   169,   279,   281,
      69,   170,   171,   172,   173,   221,    70,   174,   179,   275,
     175,   176,   177,   181,   289,   222,   290,   223,   294,   127,
      71,   101,   102,   133,   240,   241,    72,    73,   283,    74,
     261,   262,   332,   303,    75,    82,   272,   103,   284,    76,
      77,   312,   557,   285,   286,   287,   288,   334,   335,   371,
     333,   481,   313,   370,   338,   421,   491,   374,   117,   118,
     558,   559,   560,   561,   562,   180,   375,   182,   387,   388,
     185,   389,   186,   187,   119,   422,   390,   391,   392,   563,
     395,   396,   408,   409,   226,   225,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   410,   411,   246,
     247,   423,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   412,   413,   267,   268,   269,   270,   271,
     436,   437,   443,   444,   525,     0,   529,   445,   451,   446,
     482,   447,   564,   565,   448,   450,   452,   454,   484,   292,
     293,   455,   295,   456,   302,   457,   479,   486,   489,   306,
     530,   493,   311,   532,   494,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   499,   500,   485,   507,   508,   509,   510,
     513,   514,   515,   516,   522,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   538,   367,   368,   369,   540,   544,   546,
     551,     0,   552,   573,   574,   372,   575,   487,   488,    12,
     124,   576,    14,   125,     0,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   511,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,   566,   419,   517,
      37,     0,     0,     0,   424,   425,   426,   427,     0,   430,
     431,   432,   433,   434,   435,   567,   568,   569,   570,   571,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
     242,   243,   244,     0,   572,     0,     0,     0,   459,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   480,
       0,     0,    43,     0,   483,     0,     0,     0,    45,    46,
     542,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,   595,   596,     0,     0,   599,   600,
     601,    69,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   618,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,   492,     0,     0,
      74,     0,     0,     0,     0,     0,     0,   245,     0,   225,
      76,    77,     0,     0,     0,     0,     0,   512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   520,     0,     0,
     521,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   524,     0,     0,
       0,     0,   528,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   534,   535,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,   543,     0,   545,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,     0,
       0,     0,   193,   194,     0,     0,     0,    12,    13,     0,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,     0,   342,   617,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,   189,   190,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
     195,   196,   197,   198,     0,   199,   200,   201,   202,   203,
       0,     0,   597,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,   219,   220,   193,   194,    42,
      43,    44,     0,     0,     0,     0,    45,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,   195,   196,   197,   198,    69,
     199,   200,   201,   202,   203,    70,     0,     0,   204,   205,
     206,   207,     0,     0,   208,   209,   210,   211,   212,   598,
     214,   215,   216,     0,     0,     0,    73,     0,    74,     0,
       0,     0,     0,    75,     0,     0,     0,   218,    76,    77,
     219,   220,    12,    13,     0,    14,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
      24,    25,     0,    26,     0,    27,    28,    29,    30,     0,
       0,     0,    31,    32,     0,     0,    33,     0,    34,    35,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,     0,     0,     0,
       0,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,    67,    68,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,    73,   183,    74,     0,     0,   189,   190,    75,     0,
       0,     0,     0,    76,    77,    12,    13,     0,    14,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
     191,     0,     0,    24,    25,     0,    26,     0,    27,    28,
      29,    30,     0,   192,     0,    31,    32,     0,     0,    33,
       0,    34,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
       0,     0,     0,     0,    45,    46,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,   195,   196,   197,   198,
       0,     0,   200,   201,   202,   203,     0,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,    67,    68,
       0,     0,     0,     0,     0,     0,     0,    69,   218,     0,
       0,   219,   220,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,     0,    73,   224,    74,     0,     0,     0,
       0,    75,     0,     0,     0,     0,    76,    77,    12,    13,
       0,    14,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,    24,    25,     0,    26,
       0,    27,    28,    29,    30,     0,     0,     0,    31,    32,
       0,     0,    33,   291,    34,    35,    36,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,     0,     0,     0,     0,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,    67,    68,     0,     0,     0,     0,     0,     0,     0,
      69,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,    73,     0,    74,
       0,     0,     0,     0,    75,     0,     0,     0,     0,    76,
      77,    12,    13,     0,    14,    15,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,    24,
      25,     0,    26,     0,    27,    28,    29,    30,     0,     0,
       0,    31,    32,     0,     0,    33,     0,    34,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,     0,     0,     0,     0,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,    67,    68,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
      73,   336,    74,     0,     0,     0,     0,    75,     0,     0,
       0,     0,    76,    77,    12,    13,     0,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,    24,    25,     0,    26,     0,    27,    28,    29,
      30,     0,     0,     0,    31,    32,     0,     0,    33,   420,
      34,    35,    36,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,     0,
       0,     0,     0,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,    67,    68,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,    73,     0,    74,     0,     0,     0,     0,
      75,     0,     0,     0,     0,    76,    77,    12,    13,     0,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,    44,     0,     0,     0,     0,    45,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
      67,    68,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,     0,     0,    73,   527,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,    76,    77,
      12,    13,     0,    14,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,    24,    25,
       0,    26,     0,    27,    28,    29,    30,     0,     0,     0,
      31,    32,     0,     0,    33,     0,    34,    35,    36,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,     0,     0,     0,     0,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,    67,    68,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,    73,
     619,    74,     0,     0,     0,     0,    75,     0,     0,     0,
       0,    76,    77,    12,    13,     0,    14,    15,     0,    16,
       0,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,    24,    25,     0,    26,     0,    27,    28,    29,    30,
       0,     0,     0,    31,    32,     0,     0,    33,     0,    34,
      35,    36,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,     0,     0,
       0,     0,    45,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,    67,    68,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,    73,     0,    74,     0,     0,     0,     0,    75,
       0,     0,     0,     0,    76,    77,    12,    13,     0,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,    24,    25,     0,    26,     0,    27,
      28,    29,    30,     0,     0,     0,    31,    32,     0,     0,
     128,     0,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,     0,     0,     0,
      12,   124,     0,    14,   125,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,     0,     0,     0,     0,    45,    46,    47,    48,    49,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,    67,
      68,   263,   264,   265,     0,     0,     0,     0,    69,     0,
       0,     0,     0,     0,    70,    12,   124,     0,    14,   125,
       0,   126,     0,    17,    18,    19,     0,     0,    71,     0,
       0,     0,     0,    43,     0,    73,     0,    74,     0,    45,
      46,     0,    75,     0,     0,     0,    32,    76,    77,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,    12,   124,     0,    14,   125,
       0,   126,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,    32,     0,    43,     0,
       0,    74,     0,     0,    45,    46,    37,     0,   266,     0,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,    12,   124,
       0,    14,   125,     0,   126,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,    45,    46,     0,    71,     0,    32,
       0,     0,     0,     0,     0,     0,    74,     0,     0,    37,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,   282,     0,     0,     0,     0,    69,   189,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,    43,   191,     0,     0,     0,    74,    45,    46,     0,
       0,     0,   147,     0,     0,   192,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     190,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     193,   194,     0,   191,     0,     0,     0,     0,     0,     0,
      69,     0,     0,     0,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,   189,   190,     0,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      77,   193,   194,     0,     0,     0,     0,   191,   195,   196,
     197,   198,     0,   199,   200,   201,   202,   203,     0,     0,
     192,   204,   205,   206,   207,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   219,   220,   193,   194,     0,     0,   195,
     196,   197,   198,   191,   199,   200,   201,   202,   203,     0,
       0,     0,   204,   205,   206,   207,   192,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,   217,     0,     0,
       0,   218,     0,     0,   219,   220,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   191,   199,   200,
     201,   202,   203,     0,     0,     0,   204,   205,   206,   207,
     192,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   273,     0,     0,     0,   218,     0,     0,   219,   220,
       0,     0,     0,     0,     0,   193,   194,     0,   191,   195,
     196,   197,   198,     0,   199,   200,   201,   202,   203,     0,
       0,   192,   204,   205,   206,   207,     0,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,   189,   190,
       0,     0,     0,   337,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   219,   220,   193,   194,     0,     0,
       0,     0,   191,   195,   196,   197,   198,     0,   199,   200,
     201,   202,   203,     0,     0,   192,   204,   205,   206,   207,
       0,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   373,     0,     0,     0,   218,     0,     0,   219,   220,
     193,   194,     0,     0,   195,   196,   197,   198,   191,   199,
     200,   201,   202,   203,     0,     0,     0,   204,   205,   206,
     207,   192,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,   376,     0,     0,     0,   218,     0,     0,   219,
     220,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   191,   199,   200,   201,   202,   203,     0,     0,
       0,   204,   205,   206,   207,   192,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   377,     0,     0,     0,
     218,     0,     0,   219,   220,     0,     0,     0,     0,     0,
     193,   194,     0,   191,   195,   196,   197,   198,     0,   199,
     200,   201,   202,   203,     0,     0,   192,   204,   205,   206,
     207,     0,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   189,   190,     0,     0,     0,     0,     0,
       0,     0,   378,     0,     0,     0,   218,     0,     0,   219,
     220,   193,   194,     0,     0,     0,     0,   191,   195,   196,
     197,   198,     0,   199,   200,   201,   202,   203,     0,     0,
     192,   204,   205,   206,   207,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   379,     0,     0,     0,
     218,     0,     0,   219,   220,   193,   194,     0,     0,   195,
     196,   197,   198,   191,   199,   200,   201,   202,   203,     0,
       0,     0,   204,   205,   206,   207,   192,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,   380,     0,     0,
       0,   218,     0,     0,   219,   220,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   191,   199,   200,
     201,   202,   203,     0,     0,     0,   204,   205,   206,   207,
     192,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   381,     0,     0,     0,   218,     0,     0,   219,   220,
       0,     0,     0,     0,     0,   193,   194,     0,   191,   195,
     196,   197,   198,     0,   199,   200,   201,   202,   203,     0,
       0,   192,   204,   205,   206,   207,     0,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,   189,   190,
       0,     0,     0,     0,     0,     0,     0,   382,     0,     0,
       0,   218,     0,     0,   219,   220,   193,   194,     0,     0,
       0,     0,   191,   195,   196,   197,   198,     0,   199,   200,
     201,   202,   203,     0,     0,   192,   204,   205,   206,   207,
       0,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   383,     0,     0,     0,   218,     0,     0,   219,   220,
     193,   194,     0,     0,   195,   196,   197,   198,   191,   199,
     200,   201,   202,   203,     0,     0,     0,   204,   205,   206,
     207,   192,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,   384,     0,     0,     0,   218,     0,     0,   219,
     220,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   191,   199,   200,   201,   202,   203,     0,     0,
       0,   204,   205,   206,   207,   192,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   385,     0,     0,     0,
     218,     0,     0,   219,   220,     0,     0,     0,     0,     0,
     193,   194,     0,   191,   195,   196,   197,   198,     0,   199,
     200,   201,   202,   203,     0,     0,   192,   204,   205,   206,
     207,     0,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   189,   190,     0,     0,     0,     0,     0,
       0,     0,   386,     0,     0,     0,   218,     0,     0,   219,
     220,   193,   194,     0,     0,     0,     0,   191,   195,   196,
     197,   198,     0,   199,   200,   201,   202,   203,     0,     0,
     192,   204,   205,   206,   207,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   393,     0,     0,     0,
     218,     0,     0,   219,   220,   193,   194,     0,     0,   195,
     196,   197,   198,   191,   199,   200,   201,   202,   203,     0,
       0,     0,   204,   205,   206,   207,   192,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,   394,     0,     0,
       0,   218,     0,     0,   219,   220,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   191,   199,   200,
     201,   202,   203,     0,     0,     0,   204,   205,   206,   207,
     192,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   397,     0,     0,     0,   218,     0,     0,   219,   220,
       0,     0,     0,     0,     0,   193,   194,     0,   191,   195,
     196,   197,   198,     0,   199,   200,   201,   202,   203,     0,
       0,   192,   204,   205,   206,   207,     0,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,   189,   190,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,   218,     0,     0,   219,   220,   193,   194,     0,     0,
       0,     0,   191,   195,   196,   197,   198,     0,   199,   200,
     201,   202,   203,     0,     0,   192,   204,   205,   206,   207,
       0,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   399,     0,     0,     0,   218,     0,     0,   219,   220,
     193,   194,     0,     0,   195,   196,   197,   198,   191,   199,
     200,   201,   202,   203,     0,     0,     0,   204,   205,   206,
     207,   192,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,   400,     0,     0,     0,   218,     0,     0,   219,
     220,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   191,   199,   200,   201,   202,   203,     0,     0,
       0,   204,   205,   206,   207,   192,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   401,     0,     0,     0,
     218,     0,     0,   219,   220,     0,     0,     0,     0,     0,
     193,   194,     0,   191,   195,   196,   197,   198,     0,   199,
     200,   201,   202,   203,     0,     0,   192,   204,   205,   206,
     207,     0,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   189,   190,     0,     0,     0,     0,     0,
       0,     0,   402,     0,     0,     0,   218,     0,     0,   219,
     220,   193,   194,     0,     0,     0,     0,   191,   195,   196,
     197,   198,     0,   199,   200,   201,   202,   203,     0,     0,
     192,   204,   205,   206,   207,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   403,     0,     0,     0,
     218,     0,     0,   219,   220,   193,   194,     0,     0,   195,
     196,   197,   198,   191,   199,   200,   201,   202,   203,     0,
       0,     0,   204,   205,   206,   207,   192,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,   404,     0,     0,
       0,   218,     0,     0,   219,   220,     0,     0,     0,     0,
       0,   193,   194,   195,   196,   197,   198,   191,   199,   200,
     201,   202,   203,     0,     0,     0,   204,   205,   206,   207,
     192,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   405,     0,     0,     0,   218,     0,     0,   219,   220,
       0,     0,     0,     0,     0,   193,   194,     0,   191,   195,
     196,   197,   198,     0,   199,   200,   201,   202,   203,     0,
       0,   192,   204,   205,   206,   207,     0,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,   189,   190,
       0,     0,     0,     0,     0,     0,     0,   406,     0,     0,
       0,   218,     0,     0,   219,   220,   193,   194,     0,     0,
       0,     0,   191,   195,   196,   197,   198,     0,   199,   200,
     201,   202,   203,     0,     0,   192,   204,   205,   206,   207,
       0,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   189,   190,     0,     0,     0,     0,
       0,   407,     0,     0,     0,   218,     0,     0,   219,   220,
     193,   194,     0,     0,   195,   196,   197,   198,   191,   199,
     200,   201,   202,   203,     0,     0,     0,   204,   205,   206,
     207,   192,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,   414,     0,     0,     0,   218,     0,     0,   219,
     220,     0,     0,     0,     0,     0,   193,   194,   195,   196,
     197,   198,   191,   199,   200,   201,   202,   203,     0,     0,
       0,   204,   205,   206,   207,   192,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,     0,     0,     0,   415,     0,     0,     0,     0,
     218,     0,     0,   219,   220,     0,     0,     0,     0,     0,
     193,   194,     0,   191,   195,   196,   197,   198,     0,   199,
     200,   201,   202,   203,     0,     0,   192,   204,   205,   206,
     207,     0,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   189,   190,     0,     0,     0,   416,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,   219,
     220,   193,   194,     0,     0,     0,     0,   191,   195,   196,
     197,   198,     0,   199,   200,   201,   202,   203,     0,     0,
     192,   204,   205,   206,   207,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,   189,
     190,     0,   417,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   219,   220,   193,   194,     0,     0,   195,
     196,   197,   198,   191,   199,   200,   201,   202,   203,     0,
       0,     0,   204,   205,   206,   207,   192,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,   418,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,   219,   220,     0,   189,   190,     0,
       0,   193,   194,   195,   196,   197,   198,     0,   199,   200,
     201,   202,   203,     0,     0,     0,   204,   205,   206,   207,
       0,   191,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,   192,     0,     0,   438,     0,     0,
       0,     0,     0,     0,     0,   218,     0,     0,   219,   220,
       0,     0,   189,   190,     0,     0,     0,     0,     0,   195,
     196,   197,   198,     0,   199,   200,   201,   202,   203,   193,
     194,     0,   204,   205,   206,   207,   191,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,   192,
       0,     0,     0,   439,     0,     0,     0,     0,     0,     0,
       0,   218,   189,   190,   219,   220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   449,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   461,   189,   190,     0,     0,   453,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   458,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   462,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   463,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,   464,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   465,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   466,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   467,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   468,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   469,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   470,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   471,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   472,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   473,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   474,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   476,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   477,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   478,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,   490,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     495,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,   496,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     497,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     498,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,   501,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     502,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     503,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,   504,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     505,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
     506,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,   518,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,   519,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,   523,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,   526,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   531,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   533,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,   536,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   537,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   539,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,   541,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,   547,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,   548,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
     204,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,   553,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,     0,     0,     0,
       0,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,   554,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,   195,   196,   197,   198,   191,   199,   200,   201,
     202,   203,     0,     0,     0,   204,   205,   206,   207,   192,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,   602,     0,     0,     0,   189,   190,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,   193,   194,     0,   195,   196,   197,
     198,   191,  -140,   200,   201,   202,   203,     0,     0,     0,
    -140,  -140,  -140,  -140,   192,     0,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,  -140,     0,     0,     0,   218,
       0,     0,   219,   220,     0,     0,     0,     0,     0,   193,
     194,   191,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,   192,   204,   205,   206,   207,     0,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,   193,
     194,     0,     0,     0,     0,     0,   191,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,   192,
       0,   205,   206,   207,     0,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,   193,   194,     0,   195,   196,   197,
     198,   191,   199,   200,   201,   202,   203,     0,   189,   190,
       0,     0,   206,   207,   192,     0,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   219,   220,     0,   192,     0,     0,     0,   193,
     194,     0,   195,   196,   197,   198,     0,   199,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   213,   214,   215,   216,
     193,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     0,     0,   219,   220,     0,
       0,     0,     0,     0,     0,     0,     0,   195,   196,   197,
     198,     0,   199,   200,   201,   202,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,   215,   216,     0,     0,     0,   195,   196,
     197,   198,     0,   199,   200,   201,   202,   203,     0,   218,
       0,     0,   219,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,   219,   220
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-163))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       9,     7,    10,    25,    25,    43,    11,    12,    13,     4,
       4,     4,     7,     7,     7,    24,     5,    33,     3,     4,
       4,     6,     7,     7,     9,     0,    11,    12,    13,    14,
      15,    16,    17,   195,   196,     4,    21,    22,     7,    24,
      23,    26,    27,    28,    29,     5,   194,    30,    33,    34,
       4,    89,    37,     7,    39,    40,    41,    73,   192,    44,
     197,   194,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   166,     4,   194,   194,     7,    23,    87,     4,
     194,   194,     7,    68,    30,   194,     4,    31,    32,     7,
     184,   185,   186,   187,   188,   194,    81,    82,    83,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   194,
      93,     4,   128,     4,     7,     4,     7,   194,     7,   194,
     105,   106,   107,     4,   200,   194,     7,   112,   113,   114,
     115,   116,   194,   142,    11,    12,    13,   194,   199,     5,
     194,   194,   194,   194,   194,   194,   194,    93,   194,   194,
     155,   194,   194,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     194,   156,   157,     7,   194,   184,   194,   194,   200,   200,
     165,   194,   194,   194,   194,     7,   171,   194,   194,    14,
     194,   194,   194,   194,     6,   195,     6,   196,     7,    23,
     185,   184,   185,    27,   202,   202,   191,   192,   196,   194,
     202,   202,     6,   195,   199,   223,   197,   200,   196,   204,
     205,   200,   166,   196,   196,   196,   196,     9,     8,   192,
     197,   196,   200,   197,   200,   194,    14,   199,   184,   185,
     184,   185,   186,   187,   188,    69,   199,    71,   199,   199,
      74,   199,    76,    77,   200,   195,   199,   199,   199,   203,
     199,   199,   199,   199,    88,   274,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   199,   199,   103,
     104,   195,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   199,   199,   119,   120,   121,   122,   123,
     195,   195,   199,   199,    10,    -1,   173,   199,   195,   199,
     196,   199,    31,    32,   199,   199,   195,   195,   198,   143,
     144,   195,   146,   195,   148,   195,   195,   200,   199,   153,
     194,   199,   156,   196,   199,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   199,   199,   371,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   199,   218,   219,   220,   195,   199,   199,
     199,    -1,   199,   195,   195,   223,   199,   416,   417,     3,
       4,   199,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,   166,   272,   458,
      44,    -1,    -1,    -1,   278,   279,   280,   281,    -1,   283,
     284,   285,   286,   287,   288,   184,   185,   186,   187,   188,
      -1,    -1,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      74,    75,    76,    -1,   203,    -1,    -1,    -1,   312,   313,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,
      -1,    -1,   106,    -1,   338,    -1,    -1,    -1,   112,   113,
     529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,    -1,    -1,   573,   574,    -1,    -1,   577,   578,
     579,   165,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   602,    -1,    -1,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,   618,
     204,   205,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,
     464,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   518,   519,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,   530,    -1,   532,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,    -1,
      -1,    -1,   103,   104,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    -1,   597,   598,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
     161,   162,   163,   164,    -1,   166,   167,   168,   169,   170,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,   206,   207,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,    -1,    -1,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,    -1,    -1,   174,   175,
     176,   177,    -1,    -1,   180,   181,   182,   183,   184,   185,
     186,   187,   188,    -1,    -1,    -1,   192,    -1,   194,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    -1,   203,   204,   205,
     206,   207,     3,     4,    -1,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,    -1,
      -1,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    31,    32,   199,    -1,
      -1,    -1,    -1,   204,   205,     3,     4,    -1,     6,     7,
      -1,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      55,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    68,    -1,    33,    34,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
      -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,   170,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,   203,    -1,
      -1,   206,   207,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,    -1,   204,   205,     3,     4,
      -1,     6,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,    -1,    -1,    -1,    -1,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,   194,
      -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,   204,
     205,     3,     4,    -1,     6,     7,    -1,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,   107,    -1,    -1,    -1,    -1,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      -1,    -1,   204,   205,     3,     4,    -1,     6,     7,    -1,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    34,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,    -1,   192,    -1,   194,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,   204,   205,     3,     4,    -1,
       6,     7,    -1,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,    -1,    -1,    -1,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,   204,   205,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,    -1,    -1,    -1,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
      -1,   204,   205,     3,     4,    -1,     6,     7,    -1,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,   194,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,   204,   205,     3,     4,    -1,     6,
       7,    -1,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,    -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,    74,    75,    76,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,     3,     4,    -1,     6,     7,
      -1,     9,    -1,    11,    12,    13,    -1,    -1,   185,    -1,
      -1,    -1,    -1,   106,    -1,   192,    -1,   194,    -1,   112,
     113,    -1,   199,    -1,    -1,    -1,    34,   204,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
      -1,     9,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    34,    -1,   106,    -1,
      -1,   194,    -1,    -1,   112,   113,    44,    -1,   201,    -1,
      -1,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,   185,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,   165,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
      -1,   106,    55,    -1,    -1,    -1,   194,   112,   113,    -1,
      -1,    -1,   200,    -1,    -1,    68,   204,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     103,   104,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   103,   104,    -1,    -1,    -1,    -1,    55,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,   170,    -1,    -1,
      68,   174,   175,   176,   177,    -1,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,   161,
     162,   163,   164,    55,   166,   167,   168,   169,   170,    -1,
      -1,    -1,   174,   175,   176,   177,    68,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,
      -1,   103,   104,   161,   162,   163,   164,    55,   166,   167,
     168,   169,   170,    -1,    -1,    -1,   174,   175,   176,   177,
      68,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
      -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    55,   161,
     162,   163,   164,    -1,   166,   167,   168,   169,   170,    -1,
      -1,    68,   174,   175,   176,   177,    -1,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    31,    32,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,
      -1,    -1,    55,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,   170,    -1,    -1,    68,   174,   175,   176,   177,
      -1,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
     103,   104,    -1,    -1,   161,   162,   163,   164,    55,   166,
     167,   168,   169,   170,    -1,    -1,    -1,   174,   175,   176,
     177,    68,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,   103,   104,   161,   162,
     163,   164,    55,   166,   167,   168,   169,   170,    -1,    -1,
      -1,   174,   175,   176,   177,    68,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
     103,   104,    -1,    55,   161,   162,   163,   164,    -1,   166,
     167,   168,   169,   170,    -1,    -1,    68,   174,   175,   176,
     177,    -1,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,   103,   104,    -1,    -1,    -1,    -1,    55,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,   170,    -1,    -1,
      68,   174,   175,   176,   177,    -1,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,   161,
     162,   163,   164,    55,   166,   167,   168,   169,   170,    -1,
      -1,    -1,   174,   175,   176,   177,    68,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,
      -1,   103,   104,   161,   162,   163,   164,    55,   166,   167,
     168,   169,   170,    -1,    -1,    -1,   174,   175,   176,   177,
      68,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
      -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    55,   161,
     162,   163,   164,    -1,   166,   167,   168,   169,   170,    -1,
      -1,    68,   174,   175,   176,   177,    -1,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,
      -1,    -1,    55,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,   170,    -1,    -1,    68,   174,   175,   176,   177,
      -1,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
     103,   104,    -1,    -1,   161,   162,   163,   164,    55,   166,
     167,   168,   169,   170,    -1,    -1,    -1,   174,   175,   176,
     177,    68,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,   103,   104,   161,   162,
     163,   164,    55,   166,   167,   168,   169,   170,    -1,    -1,
      -1,   174,   175,   176,   177,    68,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
     103,   104,    -1,    55,   161,   162,   163,   164,    -1,   166,
     167,   168,   169,   170,    -1,    -1,    68,   174,   175,   176,
     177,    -1,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,   103,   104,    -1,    -1,    -1,    -1,    55,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,   170,    -1,    -1,
      68,   174,   175,   176,   177,    -1,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,   161,
     162,   163,   164,    55,   166,   167,   168,   169,   170,    -1,
      -1,    -1,   174,   175,   176,   177,    68,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,
      -1,   103,   104,   161,   162,   163,   164,    55,   166,   167,
     168,   169,   170,    -1,    -1,    -1,   174,   175,   176,   177,
      68,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
      -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    55,   161,
     162,   163,   164,    -1,   166,   167,   168,   169,   170,    -1,
      -1,    68,   174,   175,   176,   177,    -1,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,
      -1,    -1,    55,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,   170,    -1,    -1,    68,   174,   175,   176,   177,
      -1,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
     103,   104,    -1,    -1,   161,   162,   163,   164,    55,   166,
     167,   168,   169,   170,    -1,    -1,    -1,   174,   175,   176,
     177,    68,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,   103,   104,   161,   162,
     163,   164,    55,   166,   167,   168,   169,   170,    -1,    -1,
      -1,   174,   175,   176,   177,    68,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
     103,   104,    -1,    55,   161,   162,   163,   164,    -1,   166,
     167,   168,   169,   170,    -1,    -1,    68,   174,   175,   176,
     177,    -1,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,   103,   104,    -1,    -1,    -1,    -1,    55,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,   170,    -1,    -1,
      68,   174,   175,   176,   177,    -1,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,   161,
     162,   163,   164,    55,   166,   167,   168,   169,   170,    -1,
      -1,    -1,   174,   175,   176,   177,    68,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,
      -1,   103,   104,   161,   162,   163,   164,    55,   166,   167,
     168,   169,   170,    -1,    -1,    -1,   174,   175,   176,   177,
      68,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
      -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    55,   161,
     162,   163,   164,    -1,   166,   167,   168,   169,   170,    -1,
      -1,    68,   174,   175,   176,   177,    -1,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,
      -1,    -1,    55,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,   170,    -1,    -1,    68,   174,   175,   176,   177,
      -1,    -1,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
     103,   104,    -1,    -1,   161,   162,   163,   164,    55,   166,
     167,   168,   169,   170,    -1,    -1,    -1,   174,   175,   176,
     177,    68,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,   199,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,   103,   104,   161,   162,
     163,   164,    55,   166,   167,   168,   169,   170,    -1,    -1,
      -1,   174,   175,   176,   177,    68,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
     103,   104,    -1,    55,   161,   162,   163,   164,    -1,   166,
     167,   168,   169,   170,    -1,    -1,    68,   174,   175,   176,
     177,    -1,    -1,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,    31,    32,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,   206,
     207,   103,   104,    -1,    -1,    -1,    -1,    55,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,   170,    -1,    -1,
      68,   174,   175,   176,   177,    -1,    -1,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    31,
      32,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,   103,   104,    -1,    -1,   161,
     162,   163,   164,    55,   166,   167,   168,   169,   170,    -1,
      -1,    -1,   174,   175,   176,   177,    68,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,    -1,    31,    32,    -1,
      -1,   103,   104,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,   170,    -1,    -1,    -1,   174,   175,   176,   177,
      -1,    55,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,    -1,    -1,    68,    -1,    -1,   195,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,   161,
     162,   163,   164,    -1,   166,   167,   168,   169,   170,   103,
     104,    -1,   174,   175,   176,   177,    55,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,    -1,    68,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    31,    32,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    80,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
     174,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,    -1,    -1,    -1,
      -1,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,   161,   162,   163,   164,    55,   166,   167,   168,
     169,   170,    -1,    -1,    -1,   174,   175,   176,   177,    68,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,   103,   104,    -1,   161,   162,   163,
     164,    55,   166,   167,   168,   169,   170,    -1,    -1,    -1,
     174,   175,   176,   177,    68,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,   103,
     104,    55,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    68,   174,   175,   176,   177,    -1,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,   103,
     104,    -1,    -1,    -1,    -1,    -1,    55,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    68,
      -1,   175,   176,   177,    -1,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,   103,   104,    -1,   161,   162,   163,
     164,    55,   166,   167,   168,   169,   170,    -1,    31,    32,
      -1,    -1,   176,   177,    68,    -1,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,    -1,    68,    -1,    -1,    -1,   103,
     104,    -1,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,   207,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,    -1,    -1,    -1,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,   170,    -1,   203,
      -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   209,   210,     0,    43,    89,   212,     5,     5,   216,
     194,   192,     3,     4,     6,     7,     9,    11,    12,    13,
      14,    15,    16,    17,    21,    22,    24,    26,    27,    28,
      29,    33,    34,    37,    39,    40,    41,    44,    68,    81,
      82,    83,   105,   106,   107,   112,   113,   114,   115,   116,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   156,   157,   165,
     171,   185,   191,   192,   194,   199,   204,   205,   211,   217,
     219,   155,   211,   213,   214,   215,   217,   218,    23,    30,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      93,   184,   185,   200,    23,    30,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    93,   184,   185,   200,
     197,   194,   194,   194,     4,     7,     9,   219,    37,   217,
     194,     4,     7,   219,     4,     7,     4,     7,     4,     7,
     194,   194,   218,   194,   194,   194,   194,   200,   194,   194,
     194,   199,     5,   194,   194,   194,   194,     4,     7,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,     7,   194,
     219,   194,   219,   193,   218,   219,   219,   219,     7,    31,
      32,    55,    68,   103,   104,   161,   162,   163,   164,   166,
     167,   168,   169,   170,   174,   175,   176,   177,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   199,   203,   206,
     207,     7,   195,   196,   193,   217,   219,     4,     7,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     202,   202,    74,    75,    76,   201,   219,   219,     4,     7,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   202,   202,    74,    75,    76,   201,   219,   219,   219,
     219,   219,   197,   199,   218,    14,     4,     7,    25,   200,
      25,   200,    25,   196,   196,   196,   196,   196,   196,     6,
       6,    38,   219,   219,     7,   219,   166,   184,   185,   186,
     187,   188,   219,   195,     4,     7,   219,     4,     7,     4,
       7,   219,   200,   200,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,     6,   197,     9,     8,   193,   195,   200,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     197,   192,   215,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   198,   195,   195,   195,   219,
      38,   194,   195,   195,   219,   219,   219,   219,     4,     7,
     219,   219,   219,   219,   219,   219,   195,   195,   195,   195,
     195,   196,   195,   199,   199,   199,   199,   199,   199,   195,
     199,   195,   195,   195,   195,   195,   195,   195,   195,   219,
     219,    80,   195,   195,   196,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     219,   196,   196,   219,   198,   218,   200,   217,   217,   199,
     198,    14,   219,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   211,   219,   199,   199,   199,   199,   217,   196,   196,
     219,   219,   199,   198,   219,    10,   199,   193,   219,   173,
     194,   195,   196,   195,   219,   219,   196,   195,   199,   195,
     195,   199,   217,   219,   199,   219,   199,   196,   196,     4,
       7,   199,   199,   195,   195,    31,    32,   166,   184,   185,
     186,   187,   188,   203,    31,    32,   166,   184,   185,   186,
     187,   188,   203,   195,   195,   199,   199,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   217,   217,    68,   185,   217,
     217,   217,   192,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   219,   218,   193
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
#line 280 "./sintactico.y"
    { 
			liberar(&idFunciones); 
			liberar(&identificadores); 
			liberar_array(&arreglos);
			liberar_gigantes(&gigantes);
			exit(EXIT_SUCCESS); 
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 290 "./sintactico.y"
    {
			push_l_funcion(&idFunciones, (yyvsp[(3) - (6)].nameFunction), (yyvsp[(5) - (6)].nPtr));
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 293 "./sintactico.y"
    {;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 297 "./sintactico.y"
    { 
		(yyval.type_int) = INT;
		argsInFunction++; 
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 301 "./sintactico.y"
    {
		(yyval.type_int) = DECIMAL;
		argsInFunction++;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 305 "./sintactico.y"
    {
		(yyval.type_int) = BOOL;
		argsInFunction++;
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 312 "./sintactico.y"
    {
		printf("function declaration: %s-%d\n", (yyvsp[(2) - (8)].nameFunction), argsInFunction);
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 315 "./sintactico.y"
    {;}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 321 "./sintactico.y"
    {;
		/* Con esto hacemos que la función pueda interpretarse así:
		function $algo$() {stmt_list}		*/
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 333 "./sintactico.y"
    { 
			printf("El tipo fue... %d, para el ID = '%s'\n", (yyvsp[(1) - (2)].type_int), (yyvsp[(2) - (2)].identificador));
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 341 "./sintactico.y"
    { 
		run((yyvsp[(2) - (2)].nPtr));			/* Ejecutar los nodos */ 
		freeNode((yyvsp[(2) - (2)].nPtr)); 	/* Liberar los nodos */
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 349 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 350 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 351 "./sintactico.y"
    { printf("Array detected...\n"); (yyval.nPtr) = NULL;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 352 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 353 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINTN, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 354 "./sintactico.y"
    { (yyval.nPtr) = opr(RAND, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 355 "./sintactico.y"
    { (yyval.nPtr) = opr(READ, 1, id((yyvsp[(3) - (5)].sIndex))); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 356 "./sintactico.y"
    { (yyval.nPtr) = opr(_READ_, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 357 "./sintactico.y"
    { (yyval.nPtr) = opr(PUTS, 1, conStr((yyvsp[(3) - (5)].cadena), typeCadena)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 358 "./sintactico.y"
    { (yyval.nPtr) = opr(BREAK, 0); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 359 "./sintactico.y"
    { (yyval.nPtr) = opr(EXIT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 360 "./sintactico.y"
    { (yyval.nPtr) = opr(PRASCII, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 361 "./sintactico.y"
    { 
		 			(yyval.nPtr) = opr(INITIALIZE_IDENTIFIER, 2, idWithType((yyvsp[(2) - (5)].identificador), (yyvsp[(1) - (5)].type_int)), (yyvsp[(4) - (5)].nPtr)); 
										}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 364 "./sintactico.y"
    { 
							/* Buscar si ya está definida la variable, sino hay que
								crearla con el valor de la expresión.
							Sino hay que sobreescribir con el valor de dicha expresión */
							(yyval.nPtr) = opr('=', 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); 
										}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 370 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGNACION_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 371 "./sintactico.y"
    { 
			(yyval.nPtr) = opr(ARRAY_SIMPLE_ASIGN, 3, idArray((yyvsp[(1) - (7)].idArray)), (yyvsp[(3) - (7)].nPtr), (yyvsp[(6) - (7)].nPtr)); 
	}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 374 "./sintactico.y"
    { (yyval.nPtr) = opr(INITRAND, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 375 "./sintactico.y"
    { (yyval.nPtr) = opr(_INITRAND_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 376 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_HAPPY, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 377 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_SAD, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 378 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_NO, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 380 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_HAPPY_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 381 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_SAD_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 382 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_NO_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 383 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_ADD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 384 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SUB, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 385 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MUL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 386 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_DIV, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 387 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MOD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 388 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_POW, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 389 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTLEFT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 390 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTRIGHT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 391 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_AND, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 392 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_OR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 393 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGNACION_PASCAL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 395 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_ADD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 396 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SUB_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 397 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MUL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 398 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_DIV_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 399 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MOD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 400 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTLEFT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 401 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTRIGHT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 402 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_AND_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 403 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_OR_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 404 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_PASCAL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 405 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_POW_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 406 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 407 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 409 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 410 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 411 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVE, 2, (yyvsp[(2) - (5)].nPtr), id((yyvsp[(4) - (5)].sIndex))); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 413 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVE_, 2, (yyvsp[(2) - (5)].nPtr), idS((yyvsp[(4) - (5)].identificador))); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 414 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 415 "./sintactico.y"
    { (yyval.nPtr) = opr(ADDASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 416 "./sintactico.y"
    { (yyval.nPtr) = opr(SUBASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 418 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 419 "./sintactico.y"
    { (yyval.nPtr) = opr(_ADDASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 420 "./sintactico.y"
    { (yyval.nPtr) = opr(_SUBASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 421 "./sintactico.y"
    { (yyval.nPtr) = opr(SWAP, 2, id((yyvsp[(1) - (4)].sIndex)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 422 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_, 2, idS((yyvsp[(1) - (4)].identificador)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 424 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_ID_VAR_, 2, idS((yyvsp[(1) - (4)].identificador)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 425 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_VAR_ID_, 2, id((yyvsp[(1) - (4)].sIndex)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 426 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_ADD, 0); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 427 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_SUB, 0); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 428 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_MUL, 0); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 429 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_DIV, 0); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 430 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 431 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 432 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 433 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 435 "./sintactico.y"
    { (yyval.nPtr) = opr(_INCR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 436 "./sintactico.y"
    { (yyval.nPtr) = opr(_DECR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 437 "./sintactico.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 439 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 440 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS, 5, id((yyvsp[(2) - (12)].sIndex)), (yyvsp[(4) - (12)].nPtr), (yyvsp[(6) - (12)].nPtr), (yyvsp[(9) - (12)].nPtr), (yyvsp[(11) - (12)].nPtr)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 441 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 442 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 443 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 444 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 445 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 446 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 447 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 448 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH, 4, (yyvsp[(3) - (9)].nPtr), (yyvsp[(5) - (9)].nPtr), id((yyvsp[(7) - (9)].sIndex)), (yyvsp[(9) - (9)].nPtr)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 450 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 451 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 452 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 453 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 454 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 455 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 456 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 457 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 458 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 459 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH_ID, 4, (yyvsp[(3) - (9)].nPtr), (yyvsp[(5) - (9)].nPtr), idS((yyvsp[(7) - (9)].identificador)), (yyvsp[(9) - (9)].nPtr)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 460 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 461 "./sintactico.y"
    { (yyval.nPtr) = opr(UNLESS, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 462 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 463 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 464 "./sintactico.y"
    { (yyval.nPtr) = NULL; }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 465 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 466 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(2) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 467 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(3) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr)); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 469 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_ID, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 470 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_VAR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 471 "./sintactico.y"
    { (yyval.nPtr) = opr(SYSTEM, 1, conStr((yyvsp[(3) - (5)].cadena), typeSystem)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 472 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 473 "./sintactico.y"
    { (yyval.nPtr) = opr(VER_PILA, 0); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 474 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 475 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE_AND_ASSIGN, 2, idS((yyvsp[(3) - (7)].identificador)), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 476 "./sintactico.y"
    {	
			/* Declaración de un array */
			(yyval.nPtr) = opr(DECLARE_ARRAY, 2, idArray((yyvsp[(3) - (7)].idArray)), (yyvsp[(5) - (7)].nPtr)); 
	}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 480 "./sintactico.y"
    {
		/*printf("Tipo para esta shit %d\n", $5);*/
		(yyval.nPtr) = NULL;
	}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 485 "./sintactico.y"
    { printf("[declare_g(%s, %s);]\n", (yyvsp[(3) - (7)].idgigante), (yyvsp[(5) - (7)].cadena_gigante)); 
		(yyval.nPtr) = NULL;
	}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 488 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 489 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(3) - (5)].sIndex))); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 493 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 494 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 498 "./sintactico.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].iValue)); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 499 "./sintactico.y"
    { 
	
		/*ver_palabras(identificadores);	*/
		(yyval.nPtr) = idS((yyvsp[(1) - (1)].identificador)); 
		if(!buscar(identificadores, (yyvsp[(1) - (1)].identificador))) {
			fprintf(stdout, "Error, variable '%s' no declarada\n", (yyvsp[(1) - (1)].identificador));
		}		

	 }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 508 "./sintactico.y"
    { (yyval.nPtr) = conStr((yyvsp[(1) - (1)].cadena), typeCadena); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 509 "./sintactico.y"
    { (yyval.nPtr) = opr(ARRAY_POS, 2, idArray((yyvsp[(1) - (4)].idArray)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 510 "./sintactico.y"
    { (yyval.nPtr) = opr(PAR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 511 "./sintactico.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 512 "./sintactico.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 513 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 514 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 515 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 516 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 517 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 518 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 519 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 520 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 521 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 522 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 523 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 524 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 525 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 526 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 527 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 528 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 529 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 530 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 531 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 532 "./sintactico.y"
    { (yyval.nPtr) = opr('%', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 533 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 534 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 535 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 536 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 537 "./sintactico.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 538 "./sintactico.y"
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 539 "./sintactico.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 540 "./sintactico.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 541 "./sintactico.y"
    { (yyval.nPtr) = opr(ANDBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 542 "./sintactico.y"
    { (yyval.nPtr) = opr(ORBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 543 "./sintactico.y"
    { (yyval.nPtr) = opr(XOROP, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 544 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTLEFT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 545 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTRIGHT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 546 "./sintactico.y"
    { (yyval.nPtr) = opr(STRLEN, 1, conStr((yyvsp[(3) - (4)].cadena), typeCadena)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 547 "./sintactico.y"
    { (yyval.nPtr) = opr(ABS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 548 "./sintactico.y"
    { (yyval.nPtr) = opr(FACTORIAL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 549 "./sintactico.y"
    { (yyval.nPtr) = opr(SUMATORIA, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 550 "./sintactico.y"
    { (yyval.nPtr) = opr(SQRT, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 551 "./sintactico.y"
    { (yyval.nPtr) = opr(ACOS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 552 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 553 "./sintactico.y"
    { (yyval.nPtr) = opr(ATAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 554 "./sintactico.y"
    { (yyval.nPtr) = opr(CEIL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 555 "./sintactico.y"
    { (yyval.nPtr) = opr(COS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 556 "./sintactico.y"
    { (yyval.nPtr) = opr(COSH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 557 "./sintactico.y"
    { (yyval.nPtr) = opr(EXP, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 558 "./sintactico.y"
    { (yyval.nPtr) = opr(LN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 559 "./sintactico.y"
    { (yyval.nPtr) = opr(FLOOR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 560 "./sintactico.y"
    { (yyval.nPtr) = opr(SIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 561 "./sintactico.y"
    { (yyval.nPtr) = opr(SINH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 562 "./sintactico.y"
    { (yyval.nPtr) = opr(TAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 563 "./sintactico.y"
    { (yyval.nPtr) = opr(TANH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 564 "./sintactico.y"
    { (yyval.nPtr) = opr(CALL, 0); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 565 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 566 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 567 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 568 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 569 "./sintactico.y"
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

  case 198:

/* Line 1806 of yacc.c  */
#line 583 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;



/* Line 1806 of yacc.c  */
#line 5184 "y.tab.c"
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
#line 585 "./sintactico.y"

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
	p->type = typeVar;
	/* Copiar el id: */
	strcpy(p->id.identificador, s);
	return p;
}

nodeType *idWithType(char *s, short data_type) {
	nodeType *p;

	if((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("Memoria insuficiente para este programa.");
	/* copy information */
	p->type = typeVar;	
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


