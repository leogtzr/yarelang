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


/* Line 268 of yacc.c  */
#line 105 "y.tab.c"

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
     FUNCION = 335,
     PROC = 336,
     _ASIGNACION_ = 337,
     _READ_ = 338,
     _INITRAND_ = 339,
     CONCATENATE_DIGITS = 340,
     CONCATENATE_DIGITS_ID = 341,
     CONCATENATE_DIGITS_VAR = 342,
     _MOVE_ = 343,
     _MOVASM_ = 344,
     _ADDASM_ = 345,
     _SUBASM_ = 346,
     _SWAP_ = 347,
     _INCR_ = 348,
     _DECR_ = 349,
     _GT_ = 350,
     _LT_ = 351,
     BREAK = 352,
     CALL = 353,
     EXIT = 354,
     INCR_FUNC_ID = 355,
     INCR_FUNC_VAR = 356,
     DECR_FUNC_ID = 357,
     DECR_FUNC_VAR = 358,
     INCREMENTAR = 359,
     DECREMENTAR = 360,
     UNLESS = 361,
     FOR = 362,
     FOREACH = 363,
     FOREACH_ID = 364,
     FOR_MENOS = 365,
     FOR_MENOS_ID = 366,
     FOR_MAS = 367,
     FOR_MAS_ID = 368,
     FOR_MUL = 369,
     FOR_MUL_ID = 370,
     FOR_DIV = 371,
     FOR_DIV_ID = 372,
     FOR_POW = 373,
     FOR_POW_ID = 374,
     FOR_MOD = 375,
     FOR_MOD_ID = 376,
     FOR_SHIFTLEFTF = 377,
     FOR_SHIFTLEFTF_ID = 378,
     FOR_SHIFTRIGHT = 379,
     FOR_SHIFTRIGHT_ID = 380,
     FOR_OR = 381,
     FOR_OR_ID = 382,
     FOR_AND = 383,
     FOR_AND_ID = 384,
     ABS = 385,
     FACTORIAL = 386,
     SUMATORIA = 387,
     SQRT = 388,
     ACOS = 389,
     ASIN = 390,
     ATAN = 391,
     CEIL = 392,
     COS = 393,
     COSH = 394,
     EXP = 395,
     FLOOR = 396,
     LN = 397,
     SIN = 398,
     SINH = 399,
     TAN = 400,
     TANH = 401,
     VOID = 402,
     SYSTEM = 403,
     ARRAY = 404,
     DECLARE_ARRAY = 405,
     ARRAY_POS = 406,
     ARRAY_SIMPLE_ASIGN = 407,
     PUSH = 408,
     PUSH_VAR = 409,
     PUSH_ID = 410,
     PUSH_CONST = 411,
     POP = 412,
     POP_VAR = 413,
     POP_ID = 414,
     CLEAR_STACK = 415,
     PUSH_VARS = 416,
     POP_VARS = 417,
     EXPR_MAS = 418,
     EXPR_MENOS = 419,
     EXPR_DIV = 420,
     EXPR_MUL = 421,
     EXPR_NOT = 422,
     EXPR_ELEVADO = 423,
     EXPR_MENOR = 424,
     EXPR_MAYOR = 425,
     EXPR_MENORQUE = 426,
     EXPR_MAYORQUE = 427,
     DECLARE_G = 428,
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
#define FUNCION 335
#define PROC 336
#define _ASIGNACION_ 337
#define _READ_ 338
#define _INITRAND_ 339
#define CONCATENATE_DIGITS 340
#define CONCATENATE_DIGITS_ID 341
#define CONCATENATE_DIGITS_VAR 342
#define _MOVE_ 343
#define _MOVASM_ 344
#define _ADDASM_ 345
#define _SUBASM_ 346
#define _SWAP_ 347
#define _INCR_ 348
#define _DECR_ 349
#define _GT_ 350
#define _LT_ 351
#define BREAK 352
#define CALL 353
#define EXIT 354
#define INCR_FUNC_ID 355
#define INCR_FUNC_VAR 356
#define DECR_FUNC_ID 357
#define DECR_FUNC_VAR 358
#define INCREMENTAR 359
#define DECREMENTAR 360
#define UNLESS 361
#define FOR 362
#define FOREACH 363
#define FOREACH_ID 364
#define FOR_MENOS 365
#define FOR_MENOS_ID 366
#define FOR_MAS 367
#define FOR_MAS_ID 368
#define FOR_MUL 369
#define FOR_MUL_ID 370
#define FOR_DIV 371
#define FOR_DIV_ID 372
#define FOR_POW 373
#define FOR_POW_ID 374
#define FOR_MOD 375
#define FOR_MOD_ID 376
#define FOR_SHIFTLEFTF 377
#define FOR_SHIFTLEFTF_ID 378
#define FOR_SHIFTRIGHT 379
#define FOR_SHIFTRIGHT_ID 380
#define FOR_OR 381
#define FOR_OR_ID 382
#define FOR_AND 383
#define FOR_AND_ID 384
#define ABS 385
#define FACTORIAL 386
#define SUMATORIA 387
#define SQRT 388
#define ACOS 389
#define ASIN 390
#define ATAN 391
#define CEIL 392
#define COS 393
#define COSH 394
#define EXP 395
#define FLOOR 396
#define LN 397
#define SIN 398
#define SINH 399
#define TAN 400
#define TANH 401
#define VOID 402
#define SYSTEM 403
#define ARRAY 404
#define DECLARE_ARRAY 405
#define ARRAY_POS 406
#define ARRAY_SIMPLE_ASIGN 407
#define PUSH 408
#define PUSH_VAR 409
#define PUSH_ID 410
#define PUSH_CONST 411
#define POP 412
#define POP_VAR 413
#define POP_ID 414
#define CLEAR_STACK 415
#define PUSH_VARS 416
#define POP_VARS 417
#define EXPR_MAS 418
#define EXPR_MENOS 419
#define EXPR_DIV 420
#define EXPR_MUL 421
#define EXPR_NOT 422
#define EXPR_ELEVADO 423
#define EXPR_MENOR 424
#define EXPR_MAYOR 425
#define EXPR_MENORQUE 426
#define EXPR_MAYORQUE 427
#define DECLARE_G 428
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

/* Line 293 of yacc.c  */
#line 55 "./sintactico.y"
 
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
#define YYLAST   8921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNRULES -- Number of states.  */
#define YYNSTATES  629

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   440

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   206,     2,     2,     2,   205,   208,     2,
     196,   197,   188,   186,   198,   187,   193,   189,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   201,
     179,   202,   178,   203,   204,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   199,     2,   200,   190,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   194,   209,   195,   207,     2,     2,     2,
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
     175,   176,   177,   180,   181,   182,   183,   184,   185,   191,
     192
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    15,    16,    18,    20,    22,    31,
      32,    34,    36,    37,    41,    43,    46,    51,    54,    55,
      57,    60,    63,    70,    76,    82,    86,    92,    98,   104,
     107,   113,   119,   124,   129,   134,   140,   145,   150,   158,
     163,   168,   173,   178,   183,   188,   193,   198,   203,   208,
     213,   218,   223,   228,   233,   238,   243,   248,   253,   258,
     263,   268,   273,   278,   283,   288,   293,   298,   303,   308,
     314,   320,   326,   332,   338,   344,   350,   356,   362,   368,
     374,   380,   385,   390,   395,   400,   405,   410,   415,   420,
     425,   430,   435,   440,   445,   450,   456,   467,   480,   491,
     502,   513,   524,   535,   546,   557,   569,   580,   591,   602,
     613,   624,   635,   646,   657,   668,   680,   686,   692,   700,
     704,   707,   711,   719,   729,   734,   739,   745,   751,   759,
     767,   777,   779,   782,   784,   786,   788,   793,   798,   800,
     803,   806,   809,   812,   816,   820,   824,   828,   832,   836,
     840,   844,   848,   852,   856,   860,   864,   868,   872,   876,
     880,   884,   888,   892,   896,   900,   904,   908,   912,   916,
     920,   924,   928,   932,   937,   942,   947,   954,   959,   964,
     969,   974,   979,   984,   989,   994,   999,  1004,  1009,  1014,
    1019,  1024,  1027,  1032,  1037,  1042,  1047,  1052,  1055,  1060,
    1063,  1068,  1071,  1076,  1079,  1083,  1085,  1089
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     211,     0,    -1,   212,   214,   218,   193,    -1,   212,    81,
       5,   194,   220,   195,    -1,    -1,    10,    -1,    11,    -1,
      12,    -1,    42,     5,   196,   215,   197,   194,   220,   195,
      -1,    -1,   216,    -1,   147,    -1,    -1,   216,   198,   217,
      -1,   217,    -1,   213,     7,    -1,   213,     7,   199,   200,
      -1,   218,   219,    -1,    -1,   201,    -1,     8,   201,    -1,
     221,   201,    -1,   149,     7,   199,   221,   200,   201,    -1,
      15,   196,   221,   197,   201,    -1,    38,   196,   221,   197,
     201,    -1,    16,   221,   201,    -1,    21,   196,     4,   197,
     201,    -1,    21,   196,     7,   197,   201,    -1,    32,   196,
       6,   197,   201,    -1,    97,   201,    -1,    99,   196,   221,
     197,   201,    -1,    39,   196,   221,   197,   201,    -1,   160,
     196,   197,   201,    -1,   161,   196,   197,   201,    -1,   162,
     196,   197,   201,    -1,   213,     7,   202,   221,   201,    -1,
       4,   202,   221,   201,    -1,     7,   202,   221,   201,    -1,
       9,   199,   221,   200,   202,   221,   201,    -1,     4,   202,
     203,   201,    -1,     7,   202,   203,   201,    -1,     4,   202,
      73,   201,    -1,     4,   202,    74,   201,    -1,     4,   202,
      75,   201,    -1,     7,   202,    73,   201,    -1,     7,   202,
      74,   201,    -1,     7,   202,    75,   201,    -1,     4,    44,
     221,   201,    -1,     4,    45,   221,   201,    -1,     4,    46,
     221,   201,    -1,     4,    47,   221,   201,    -1,     4,    48,
     221,   201,    -1,     4,    53,   221,   201,    -1,     4,    49,
     221,   201,    -1,     4,    50,   221,   201,    -1,     4,    51,
     221,   201,    -1,     4,    52,   221,   201,    -1,     4,    22,
     221,   201,    -1,     7,    44,   221,   201,    -1,     7,    45,
     221,   201,    -1,     7,    46,   221,   201,    -1,     7,    47,
     221,   201,    -1,     7,    48,   221,   201,    -1,     7,    49,
     221,   201,    -1,     7,    50,   221,   201,    -1,     7,    51,
     221,   201,    -1,     7,    52,   221,   201,    -1,     7,    22,
     221,   201,    -1,     7,    53,   221,   201,    -1,    23,     4,
     202,   221,   201,    -1,    23,     4,    24,   221,   201,    -1,
      23,     7,   202,   221,   201,    -1,    23,     7,    24,   221,
     201,    -1,    25,   221,    24,     4,   201,    -1,    25,   221,
      24,     7,   201,    -1,    26,     4,   198,   221,   201,    -1,
      27,     4,   198,   221,   201,    -1,    28,     4,   198,   221,
     201,    -1,    26,     7,   198,   221,   201,    -1,    27,     7,
     198,   221,   201,    -1,    28,     7,   198,   221,   201,    -1,
       4,    29,     4,   201,    -1,     7,    29,     7,   201,    -1,
       7,    29,     4,   201,    -1,     4,    29,     7,   201,    -1,
      67,   202,   186,   201,    -1,    67,   202,   187,   201,    -1,
      67,   202,   188,   201,    -1,    67,   202,   189,   201,    -1,
      67,   202,   190,   201,    -1,    67,   202,   168,   201,    -1,
       4,   186,   204,   201,    -1,     4,   187,   204,   201,    -1,
       7,   186,   204,   201,    -1,     7,   187,   204,   201,    -1,
      13,   196,   221,   197,   219,    -1,   107,     4,   202,   221,
     198,   221,   198,   187,   221,   219,    -1,   107,     4,   202,
     221,   198,   221,   198,   186,   221,   194,   220,   195,    -1,
     107,     4,   202,   221,   198,   221,   198,   188,   221,   219,
      -1,   107,     4,   202,   221,   198,   221,   198,   189,   221,
     219,    -1,   107,     4,   202,   221,   198,   221,   198,   190,
     221,   219,    -1,   107,     4,   202,   221,   198,   221,   198,
     168,   221,   219,    -1,   107,     4,   202,   221,   198,   221,
     198,   205,   221,   219,    -1,   107,     4,   202,   221,   198,
     221,   198,    30,   221,   219,    -1,   107,     4,   202,   221,
     198,   221,   198,    31,   221,   219,    -1,   108,   196,   221,
     193,   193,   193,   221,   198,     4,   197,   219,    -1,   107,
       7,   202,   221,   198,   221,   198,   187,   221,   219,    -1,
     107,     7,   202,   221,   198,   221,   198,   186,   221,   219,
      -1,   107,     7,   202,   221,   198,   221,   198,   188,   221,
     219,    -1,   107,     7,   202,   221,   198,   221,   198,   189,
     221,   219,    -1,   107,     7,   202,   221,   198,   221,   198,
     190,   221,   219,    -1,   107,     7,   202,   221,   198,   221,
     198,   168,   221,   219,    -1,   107,     7,   202,   221,   198,
     221,   198,   205,   221,   219,    -1,   107,     7,   202,   221,
     198,   221,   198,    30,   221,   219,    -1,   107,     7,   202,
     221,   198,   221,   198,    31,   221,   219,    -1,   108,   196,
     221,   193,   193,   193,   221,   198,     7,   197,   219,    -1,
      14,   196,   221,   197,   219,    -1,   106,   196,   221,   197,
     219,    -1,    14,   196,   221,   197,   219,   175,   219,    -1,
     194,   220,   195,    -1,   194,   195,    -1,    36,   220,    37,
      -1,    20,   219,    13,   196,   221,   197,   201,    -1,    20,
      36,   220,    37,    13,   196,   221,   197,   201,    -1,     7,
      85,   221,   201,    -1,     4,    85,   221,   201,    -1,   148,
     196,     6,   197,   201,    -1,    40,   196,     7,   197,   201,
      -1,    40,   196,     7,   198,   221,   197,   201,    -1,   149,
     196,     9,   198,   221,   197,   201,    -1,    40,   196,     7,
     198,   213,   198,   221,   197,   201,    -1,   219,    -1,   220,
     219,    -1,     3,    -1,     7,    -1,     6,    -1,     9,   199,
     221,   200,    -1,    43,   196,   221,   197,    -1,     4,    -1,
     187,   221,    -1,   206,   221,    -1,   207,   221,    -1,   167,
     221,    -1,   221,   186,   221,    -1,   221,   163,   221,    -1,
     221,   187,   221,    -1,   221,   164,   221,    -1,   221,   188,
     221,    -1,   221,   166,   221,    -1,   221,   189,   221,    -1,
     221,   165,   221,    -1,   221,   179,   221,    -1,   221,   169,
     221,    -1,   221,    96,   221,    -1,   221,   178,   221,    -1,
     221,   170,   221,    -1,   221,    95,   221,    -1,   221,   190,
     221,    -1,   221,   168,   221,    -1,   221,   205,   221,    -1,
     221,   185,   221,    -1,   221,   172,   221,    -1,   221,   184,
     221,    -1,   221,   171,   221,    -1,   221,   182,   221,    -1,
     221,   183,   221,    -1,   221,   177,   221,    -1,   221,   176,
     221,    -1,   221,   208,   221,    -1,   221,   209,   221,    -1,
     221,    54,   221,    -1,   221,    30,   221,    -1,   221,    31,
     221,    -1,    33,   196,     6,   197,    -1,   130,   196,   221,
     197,    -1,   131,   196,   221,   197,    -1,   132,   196,   221,
     198,   221,   197,    -1,   133,   196,   221,   197,    -1,   134,
     196,   221,   197,    -1,   135,   196,   221,   197,    -1,   136,
     196,   221,   197,    -1,   137,   196,   221,   197,    -1,   138,
     196,   221,   197,    -1,   139,   196,   221,   197,    -1,   140,
     196,   221,   197,    -1,   142,   196,   221,   197,    -1,   141,
     196,   221,   197,    -1,   143,   196,   221,   197,    -1,   144,
     196,   221,   197,    -1,   145,   196,   221,   197,    -1,   146,
     196,   221,   197,    -1,    98,     5,    -1,   104,   196,     4,
     197,    -1,   104,   196,     7,   197,    -1,   105,   196,     4,
     197,    -1,   105,   196,     7,   197,    -1,   153,   196,     4,
     197,    -1,   153,     4,    -1,   153,   196,   221,   197,    -1,
     153,     7,    -1,   157,   196,     4,   197,    -1,   157,     4,
      -1,   157,   196,     7,   197,    -1,   157,     7,    -1,   157,
     196,   197,    -1,   157,    -1,   221,    67,   221,    -1,   196,
     221,   197,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   271,   271,   281,   284,   288,   292,   296,   303,   306,
     310,   311,   312,   319,   320,   324,   327,   332,   336,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   359,   365,   366,   369,
     370,   371,   372,   373,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   404,   405,   406,   408,   409,   410,   411,   413,   414,
     415,   416,   417,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   430,   431,   432,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   464,   465,   466,   467,   468,   469,
     473,   480,   481,   485,   486,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   580
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "FUNCNAME",
  "CADENA", "ID", "ID_GIGANTE", "ID_ARRAY", "INT_TYPE", "DECIMAL_TYPE",
  "BOOL_TYPE", "WHILE", "IF", "PRINT", "RAND", "INITRAND", "INCR", "DECR",
  "DO", "READ", "ASIGNACION_PASCAL", "LETSET", "TO", "MOVE", "MOVASM",
  "ADDASM", "SUBASM", "SWAP", "SHIFTLEFT", "SHIFTRIGHT", "PUTS", "STRLEN",
  "_SWAP_ID_VAR_", "_SWAP_VAR_ID_", "IFTHEN", "IFEND", "PRINTN", "PRASCII",
  "DECLARE", "DECLARE_AND_ASSIGN", "FUNCTION", "PAR", "ASIGN_ADD",
  "ASIGN_SUB", "ASIGN_MUL", "ASIGN_DIV", "ASIGN_MOD", "ASIGN_SHIFTLEFT",
  "ASIGN_SHIFTRIGHT", "ASIGN_AND", "ASIGN_OR", "ASIGN_POW", "XOROP",
  "_ASIGN_ADD_", "_ASIGN_SUB_", "_ASIGN_MUL_", "_ASIGN_DIV_",
  "_ASIGN_MOD_", "_ASIGN_SHIFTLEFT_", "_ASIGN_SHIFTRIGHT_", "_ASIGN_AND_",
  "_ASIGN_OR_", "_ASIGN_PASCAL_", "_LETSET_", "_ASIGN_POW_", "OPVAR",
  "OPVAR_ADD", "OPVAR_SUB", "OPVAR_MUL", "OPVAR_DIV", "OPVAR_POW",
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
     425,   426,   427,   428,   429,   430,   431,   432,    62,    60,
     433,   434,   435,   436,   437,   438,    43,    45,    42,    47,
      94,   439,   440,    46,   123,   125,    40,    41,    44,    91,
      93,    59,    61,    63,    64,    37,    33,   126,    38,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   210,   211,   212,   212,   213,   213,   213,   214,   214,
     215,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   220,   220,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     6,     0,     1,     1,     1,     8,     0,
       1,     1,     0,     3,     1,     2,     4,     2,     0,     1,
       2,     2,     6,     5,     5,     3,     5,     5,     5,     2,
       5,     5,     4,     4,     4,     5,     4,     4,     7,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,    10,    12,    10,    10,
      10,    10,    10,    10,    10,    11,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    11,     5,     5,     7,     3,
       2,     3,     7,     9,     4,     4,     5,     5,     7,     7,
       9,     1,     2,     1,     1,     1,     4,     4,     1,     2,
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
      12,     0,   133,   138,   135,   134,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
       0,     0,     0,     0,     2,     0,     0,    19,     0,     0,
       0,    17,     0,    11,     0,     0,    10,    14,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,   138,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,   199,     0,   201,   203,     0,     0,     0,     0,   142,
     139,   120,     0,     0,   140,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    15,
       0,     0,     3,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
       0,     0,     0,   204,     0,     0,     0,   119,   207,     0,
     171,   172,   170,   206,   156,   153,   144,   146,   150,   148,
     158,   152,   155,   163,   161,   167,   166,   154,   151,   164,
     165,   162,   160,   143,   145,   147,   149,   157,   159,   168,
     169,     0,     0,    13,    57,    81,    84,    47,    48,    49,
      50,    51,    53,    54,    55,    56,    52,   125,    91,    92,
      41,    42,    43,    39,    36,    67,    83,    82,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    68,   124,    93,
      94,    44,    45,    46,    40,    37,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,     0,
       0,     0,     0,   137,    90,    85,    86,    87,    88,    89,
       0,   192,   193,   194,   195,     0,     0,     0,     0,   174,
     175,     0,   177,   178,   179,   180,   181,   182,   183,   184,
     186,   185,   187,   188,   189,   190,     0,     0,     0,   196,
     198,   200,   202,    32,    33,    34,     0,    16,     0,     0,
      95,   116,    23,   136,     0,     0,    26,    27,    70,    69,
      72,    71,    73,    74,    75,    78,    76,    79,    77,    80,
      28,    24,    31,   127,     0,     0,    30,   117,     0,     0,
       0,     0,   126,     0,     0,    35,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,    22,     0,    38,
     118,     0,   122,     0,   128,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   101,     0,    96,    98,
      99,   100,   102,   113,   114,   111,   107,   106,   108,   109,
     110,   112,     0,     0,   145,     0,   105,   115,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    80,     6,    85,    86,    87,     9,    88,
      89,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -149
static const yytype_int16 yypact[] =
{
    -149,    15,   -38,  -149,    18,    52,  -149,  -138,  -135,   821,
      -5,  2461,  -149,   218,  -149,   273,  -140,  -137,  -149,  -149,
    -149,  -133,  -132,  -131,  3062,  2666,  -128,     4,  3062,     5,
       6,    10,  -127,  -125,  2461,  -122,  -121,  -120,  -119,  -124,
    -118,    74,  -115,  -114,  -111,   -99,    17,   -98,   -95,   -83,
     -82,   -75,   -74,   -73,   -72,   -71,   -70,   -69,   -68,   -67,
     -66,   -65,   -64,   -63,   -62,   -61,    30,    28,    29,   -59,
     -58,   -57,  3062,  3062,  -149,  1026,  3062,  -149,  3062,  3062,
     137,  -149,  3192,  -149,   138,   -51,   -50,  -149,  -149,  1231,
    3062,    21,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,
    3062,  3062,  3062,   -55,   -53,  2747,  3062,    23,  3062,  3062,
    3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,   -52,
     -33,  2828,  -149,  3062,  3062,  3062,  3062,  -149,  -149,   -27,
    3270,  2461,   160,    27,   -23,   -21,   205,   -24,   -18,   -16,
     -14,   -13,   -12,   169,   181,  1436,  3062,  3062,   220,  3062,
    -148,  -149,  -149,  3062,    40,    41,  3062,    26,    31,  3062,
    3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,
    3062,  3062,  3062,  3062,  3062,  3062,  3062,   182,    32,   221,
    -149,  -149,  3140,  -149,  -149,    22,    35,    37,    45,  8712,
    8712,  -149,  1641,  3318,  8712,  8712,    36,  3062,  3062,  3062,
    3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,
    3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,
    3062,  3062,  3062,  3062,  3062,  -149,  3062,  3062,  3062,    38,
      47,    44,  -149,  -149,  3377,    43,    48,  3462,  3520,  3569,
    3627,  3712,  3770,  3819,  3877,  3962,  4020,  4069,    49,    50,
      51,    53,    54,    55,  4127,  4212,    56,    57,  4270,  4319,
    4377,  4462,  4520,  4569,  4627,  4712,  4770,  4819,  4877,    59,
      60,    75,    76,    77,    78,  4962,  5020,  5069,  5126,  5232,
    3062,  -149,  1846,    79,    87,    94,  3062,  3062,  3062,  3062,
      42,  3062,  3062,  3062,  3062,  3062,  3062,    95,    96,  -149,
    5287,  5338,  -146,  5393,    93,    97,    98,   103,   104,   105,
    5499,    99,   100,   110,   111,  5554,  3062,  3062,  5605,  5660,
    5766,  5821,  5872,  5927,  6033,  6088,  6139,  6194,  6300,  6355,
    6406,  6461,  6567,  6622,  6673,  6728,   112,  3062,   114,   116,
    6834,   117,   119,  -149,   127,   128,   129,  -149,  -149,  3062,
    8390,  8390,  8390,  8390,  8390,  8390,  8390,  8390,  8390,  8390,
    8712,  8390,  8390,  8390,  8390,  8444,  8497,  8551,  8551,  8551,
    8551,  8551,  8551,  8605,  8605,  8658,  8658,   332,  8390,  8390,
    8390,    39,  2461,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,   130,  2461,  2461,   139,
    6889,   230,  3062,   140,   141,  6940,  6995,  7102,  7156,   143,
     149,  7209,  7263,  7317,  7370,  7424,  7478,   150,  -149,   152,
     153,   154,  2906,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
     155,  -149,  -149,  -149,  -149,  2461,  7531,  7585,   145,  -149,
    -149,  3062,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,   156,  7639,  3062,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  7692,  -149,  2051,  3062,
    -149,    70,  -149,  -149,   163,  7746,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,   162,  7800,  -149,  -149,  3062,  3062,
     146,  7853,  -149,   164,  7907,  -149,  -149,  7961,  2461,  3062,
     165,  3062,   171,  8014,  8068,  3062,  -149,  -149,   177,  -149,
    -149,  8122,  -149,  8175,  -149,   147,   159,  8229,  -149,   178,
     179,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,
    3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,  3062,    46,
    -149,  -149,   614,   614,   614,  8283,   614,   614,   614,   614,
     614,   614,   614,   614,   614,   614,   614,   614,   614,   614,
     188,   199,  2984,  3062,  -149,  -149,  -149,  2461,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  2461,  2461,  8336,  2256,  -149,  -149,  -149
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,    -8,  -149,  -149,  -149,   166,  -149,    -9,
     -15,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -140
static const yytype_int16 yytable[] =
{
      81,   286,    84,   288,     4,    18,    19,    20,   134,   137,
     139,   135,   138,   140,   141,     3,   132,   142,   130,   145,
     304,   157,   136,     7,   158,   235,   341,   256,   236,   342,
     257,   284,   180,   183,   285,   181,   184,   178,   305,   306,
     307,   308,   309,     5,   311,   313,   439,   312,   314,   440,
     600,   451,   452,   601,    18,    19,    20,     8,    10,    11,
     192,   122,   123,   124,   125,   126,   189,   190,   133,   143,
     193,   144,   194,   195,   146,   147,   148,   149,   150,   152,
     233,   153,   154,   151,   234,   155,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   156,   159,   254,
     255,   160,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   161,   162,   275,   282,   276,   277,   278,
     279,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   233,   186,   187,   188,
     300,   301,    83,   303,   196,   229,   230,   310,   231,   248,
     315,   249,   269,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   270,   280,   283,   291,   297,   340,   561,   562,   287,
     292,   289,   293,   233,   294,   295,   296,   298,   336,   570,
     571,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   343,
     378,   379,   380,    84,   182,   185,   179,   302,   316,   290,
     338,   337,   344,   317,   345,   197,   198,   381,   349,   497,
      90,   382,   346,   504,   385,   538,     0,    91,     0,   386,
     398,   399,   400,     0,   401,   402,   403,   406,   407,   199,
     419,   420,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   200,   233,   430,   432,   421,   422,   423,   424,
     435,   436,   437,   438,   433,   441,   442,   443,   444,   445,
     446,   434,   447,   448,   454,   106,   461,   462,   455,   456,
     201,   202,   107,   102,   457,   458,   459,   463,   464,   486,
     466,   467,   488,   489,   491,   563,   492,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   572,   493,   494,
     495,   487,   499,   564,   565,   566,   567,   568,   530,   545,
     502,   506,   507,   496,   512,   573,   574,   575,   576,   577,
     513,   520,   569,   521,   522,   523,   526,   532,   118,   539,
     541,     0,   197,   198,   578,   547,   552,   498,   203,   204,
     205,   206,   554,   207,   208,   209,   210,   211,   558,   580,
     581,   212,   213,   214,   215,   622,   199,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   623,   383,     0,   200,
       0,     0,     0,     0,   103,   104,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,     0,     0,   500,   501,
     105,     0,     0,     0,     0,     0,   505,   201,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   524,     0,   525,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   527,     0,     0,   119,
     120,     0,     0,     0,     0,   531,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,   534,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,   537,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   543,   544,     0,     0,     0,     0,     0,   550,
       0,     0,     0,   551,     0,   553,     0,   226,     0,   557,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   604,   605,   606,     0,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,     0,   625,     0,     0,     0,   353,   624,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   626,   627,     0,   233,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,    25,    26,     0,    27,     0,    28,
      29,    30,    31,     0,   197,   198,    32,    33,     0,     0,
      34,     0,    35,    36,    37,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   602,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     202,    40,    41,    42,     0,     0,     0,     0,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,    65,    66,     0,     0,     0,    67,     0,     0,
       0,    68,     0,     0,    69,    70,    71,   203,   204,   205,
     206,    72,   207,   208,   209,   210,   211,     0,     0,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   603,   222,   223,   224,     0,     0,     0,    75,     0,
      76,     0,     0,     0,     0,    77,     0,     0,     0,   226,
      78,    79,   227,   228,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,    25,    26,     0,    27,     0,    28,    29,    30,    31,
       0,     0,     0,    32,    33,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,    69,    70,    71,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,    74,    75,     0,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    78,    79,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,    25,    26,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,    34,     0,    35,    36,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,     0,     0,     0,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,     0,     0,     0,    67,
       0,     0,     0,    68,     0,     0,    69,    70,    71,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
      75,   191,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    78,    79,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,    25,    26,     0,    27,     0,    28,    29,    30,    31,
       0,     0,     0,    32,    33,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,    69,    70,    71,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,    75,   232,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    78,    79,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,    25,    26,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,    34,   299,    35,    36,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,     0,     0,     0,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,     0,     0,     0,    67,
       0,     0,     0,    68,     0,     0,    69,    70,    71,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    78,    79,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,    25,    26,     0,    27,     0,    28,    29,    30,    31,
       0,     0,     0,    32,    33,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,    69,    70,    71,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,    75,   347,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    78,    79,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,    25,    26,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,    34,   431,    35,    36,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,     0,     0,     0,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,     0,     0,     0,    67,
       0,     0,     0,    68,     0,     0,    69,    70,    71,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    78,    79,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,    25,    26,     0,    27,     0,    28,    29,    30,    31,
       0,     0,     0,    32,    33,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,    69,    70,    71,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,    75,   536,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    78,    79,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,    25,    26,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,    34,     0,    35,    36,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,     0,     0,     0,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,     0,     0,     0,    67,
       0,     0,     0,    68,     0,     0,    69,    70,    71,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
      75,   628,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    78,    79,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,    25,    26,     0,    27,     0,    28,    29,    30,    31,
       0,     0,     0,    32,    33,     0,     0,    34,     0,    35,
      36,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,     0,     0,     0,    67,     0,     0,     0,    68,     0,
       0,    69,    70,    71,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,    75,     0,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    78,    79,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,    25,    26,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,    32,    33,
       0,     0,   131,     0,    35,    36,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,   127,     0,    14,   128,     0,   129,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,     0,     0,     0,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,     0,     0,     0,    67,
     250,   251,   252,    68,     0,     0,    69,    70,    71,     0,
       0,    12,   127,    72,    14,   128,     0,   129,     0,     0,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,    43,    44,    73,     0,     0,     0,     0,     0,     0,
      75,    33,    76,     0,     0,     0,     0,    77,     0,     0,
       0,    38,    78,    79,     0,     0,     0,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      67,   271,   272,   273,    68,     0,     0,     0,     0,    12,
     127,     0,    14,   128,    72,   129,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,    43,    44,    73,     0,     0,     0,     0,    33,
       0,     0,     0,    76,     0,     0,     0,     0,     0,    38,
     253,     0,     0,    78,    79,     0,     0,     0,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    67,     0,     0,     0,    68,     0,    12,   127,     0,
      14,   128,     0,   129,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
      43,    44,     0,     0,     0,    73,     0,    33,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    38,     0,     0,
       0,   274,     0,     0,    78,    79,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     0,    68,     0,    12,   127,     0,    14,   128,
       0,   129,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,    43,    44,
       0,     0,     0,    73,     0,    33,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    78,    79,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,    68,     0,    12,   339,     0,    14,   128,     0,   129,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,    43,    44,     0,     0,
       0,    73,     0,    33,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    38,     0,     0,   150,     0,     0,     0,
      78,    79,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,    68,
       0,     0,   197,   198,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,    43,    44,   199,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,    76,   200,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   201,   202,     0,
       0,     0,     0,    67,     0,     0,     0,    68,     0,     0,
     197,   198,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,    76,   200,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,   197,   198,
       0,     0,     0,     0,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   201,   202,     0,   212,   213,
     214,   215,   199,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,   200,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   201,   202,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   281,   201,   202,     0,   226,     0,     0,   227,   228,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,   197,   198,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   348,   199,     0,     0,     0,
       0,     0,     0,   226,     0,     0,   227,   228,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   384,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   387,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   388,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   197,   198,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     389,     0,     0,     0,   226,     0,     0,   227,   228,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   390,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   391,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   392,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   197,   198,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     393,     0,     0,     0,   226,     0,     0,   227,   228,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   394,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   395,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   197,   198,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     397,     0,     0,     0,   226,     0,     0,   227,   228,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   404,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   405,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   408,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   197,   198,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     409,     0,     0,     0,   226,     0,     0,   227,   228,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   410,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   411,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   197,   198,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     413,     0,     0,     0,   226,     0,     0,   227,   228,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   414,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,   197,   198,     0,
       0,     0,     0,   415,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   416,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   197,   198,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     417,     0,     0,     0,   226,     0,     0,   227,   228,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     197,   198,     0,   212,   213,   214,   215,   201,   202,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,   418,     0,
       0,     0,   226,     0,     0,   227,   228,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,   197,   198,     0,     0,
       0,     0,     0,   425,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     426,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,   197,   198,     0,     0,   427,     0,     0,     0,
       0,     0,     0,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,     0,     0,   199,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   200,
       0,     0,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   197,   198,     0,
       0,     0,     0,   428,     0,     0,     0,   201,   202,     0,
       0,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   202,     0,     0,     0,     0,     0,     0,
       0,     0,   199,     0,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   200,     0,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   197,   198,     0,     0,     0,     0,   429,
       0,     0,     0,   201,   202,     0,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   199,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     200,     0,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,     0,     0,
       0,     0,     0,     0,   449,     0,     0,     0,   201,   202,
       0,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,     0,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   197,
     198,     0,     0,     0,     0,   450,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,   199,     0,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,   200,     0,     0,   212,
     213,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,     0,     0,     0,
     453,     0,     0,     0,   201,   202,     0,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   198,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     202,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,   460,     0,     0,     0,
     201,   202,     0,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,     0,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   200,     0,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,     0,     0,     0,     0,     0,
       0,   465,     0,     0,     0,   201,   202,     0,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,     0,
       0,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   197,   198,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   197,   198,     0,     0,     0,     0,   469,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   202,     0,     0,
       0,     0,     0,     0,     0,     0,   199,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,   200,
       0,     0,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   197,   198,     0,
       0,     0,     0,   470,     0,     0,     0,   201,   202,     0,
       0,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,     0,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   200,     0,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,   471,
       0,     0,   201,   202,     0,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,     0,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   197,   198,     0,     0,     0,     0,   472,
       0,     0,     0,     0,     0,     0,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   199,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     200,     0,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   197,   198,
       0,     0,     0,     0,   473,     0,     0,     0,   201,   202,
       0,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,   200,     0,     0,   212,
     213,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,     0,     0,     0,
     474,     0,     0,     0,   201,   202,     0,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   200,     0,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
       0,     0,     0,     0,     0,   475,     0,     0,     0,   201,
     202,     0,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,   476,     0,     0,     0,
       0,     0,     0,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,     0,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   200,     0,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,   477,     0,     0,     0,   201,   202,     0,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
     199,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,   200,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   197,   198,     0,     0,     0,     0,   478,     0,     0,
       0,   201,   202,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   199,     0,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   200,     0,
       0,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,     0,     0,     0,     0,
       0,     0,   479,     0,     0,     0,   201,   202,     0,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
       0,     0,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   197,   198,     0,
       0,     0,     0,   480,     0,     0,     0,     0,     0,     0,
       0,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,     0,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   200,     0,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   197,   198,     0,     0,     0,     0,   481,     0,
       0,     0,   201,   202,     0,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     200,     0,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   197,   198,
       0,     0,     0,     0,   482,     0,     0,     0,   201,   202,
       0,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   199,     0,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,   200,     0,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,     0,     0,     0,     0,     0,     0,   483,
       0,     0,     0,   201,   202,     0,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,     0,     0,     0,   212,
     213,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,     0,     0,     0,
     484,     0,     0,     0,     0,     0,     0,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,   200,     0,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   197,
     198,     0,     0,     0,     0,   485,     0,     0,     0,   201,
     202,     0,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,   200,     0,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,   490,     0,     0,     0,   201,   202,     0,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
       0,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   200,     0,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   503,
     201,   202,     0,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,     0,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     0,   197,   198,     0,     0,     0,     0,     0,     0,
       0,   508,     0,     0,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,     0,   199,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   200,
       0,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,   509,   201,   202,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   510,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   199,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     200,     0,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,   511,   201,   202,
       0,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,     0,   200,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,     0,     0,     0,     0,
     514,     0,   201,   202,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,     0,   200,     0,   212,
     213,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,     0,     0,     0,
       0,     0,     0,     0,   515,   201,   202,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,   200,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,   516,   201,
     202,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   199,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,     0,   200,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   197,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   517,     0,   201,   202,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   199,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,     0,   200,     0,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   518,   201,   202,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,   200,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   197,
     198,     0,     0,     0,     0,     0,     0,     0,     0,   519,
     201,   202,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,   199,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,     0,   200,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   197,   198,     0,     0,     0,     0,     0,   528,
       0,     0,     0,     0,   201,   202,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,   199,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   200,
       0,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   197,   198,     0,     0,
       0,     0,     0,   529,     0,     0,     0,   201,   202,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,     0,     0,     0,   533,
       0,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,     0,   200,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   535,     0,   201,   202,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   199,     0,   203,
     204,   205,   206,     0,   207,   208,   209,   210,   211,     0,
     200,     0,   212,   213,   214,   215,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   197,   198,     0,
       0,     0,     0,   540,     0,     0,     0,     0,   201,   202,
       0,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   197,   198,     0,     0,     0,     0,   542,     0,     0,
       0,     0,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   199,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,     0,     0,   200,   212,
     213,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,   201,   202,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,     0,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,   200,     0,   212,   213,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   197,   198,
       0,     0,     0,     0,   548,     0,     0,     0,     0,   201,
     202,     0,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,   212,   213,   214,
     215,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   197,   198,     0,     0,     0,     0,     0,     0,
       0,     0,   549,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,   199,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,     0,     0,   200,
     212,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,     0,   555,     0,     0,     0,     0,   201,   202,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,   200,     0,   212,   213,   214,   215,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   197,
     198,     0,     0,     0,     0,     0,   556,     0,     0,     0,
     201,   202,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,   199,     0,   203,   204,   205,   206,     0,
     207,   208,   209,   210,   211,     0,   200,     0,   212,   213,
     214,   215,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   197,   198,     0,     0,     0,     0,   559,
       0,     0,     0,     0,   201,   202,     0,   226,     0,     0,
     227,   228,     0,     0,     0,     0,     0,   199,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,     0,
     200,   212,   213,   214,   215,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   197,   198,     0,     0,
       0,     0,   560,     0,     0,     0,     0,     0,   201,   202,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     199,     0,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,     0,   200,     0,   212,   213,   214,   215,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     197,   198,     0,     0,     0,     0,     0,   579,     0,     0,
       0,   201,   202,     0,   226,     0,     0,   227,   228,     0,
       0,     0,     0,     0,   199,     0,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,     0,   200,     0,   212,
     213,   214,   215,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   197,   198,     0,   607,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,   226,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   199,   203,
     204,   205,   206,     0,  -139,   208,   209,   210,   211,     0,
       0,   200,  -139,  -139,  -139,  -139,     0,     0,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,  -139,     0,   201,
     202,   226,     0,     0,   227,   228,     0,     0,     0,     0,
       0,   199,     0,   203,   204,   205,   206,     0,   207,   208,
     209,   210,   211,     0,   200,     0,   212,   213,   214,   215,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   197,   198,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   202,     0,   226,     0,     0,   227,   228,
       0,     0,     0,     0,     0,   199,     0,   203,   204,   205,
     206,     0,   207,   208,   209,   210,   211,     0,   200,     0,
       0,   213,   214,   215,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   197,   198,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   202,     0,   226,
       0,     0,   227,   228,     0,     0,     0,     0,     0,   199,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
       0,     0,   200,     0,     0,   214,   215,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   197,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   202,   226,     0,     0,   227,   228,     0,     0,     0,
       0,     0,   199,     0,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,   224,   197,   198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,     0,   226,     0,     0,   227,
     228,     0,     0,     0,     0,     0,   199,     0,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
     226,     0,     0,   227,   228,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,     0,   207,   208,   209,   210,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,   227,   228,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,   206,     0,
       0,   208,   209,   210,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,     0,     0,
     227,   228
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-149))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       9,    24,    10,    24,    42,    10,    11,    12,     4,     4,
       4,     7,     7,     7,     4,     0,    25,     7,    24,    34,
     168,     4,    28,     5,     7,     4,     4,     4,     7,     7,
       7,     4,     4,     4,     7,     7,     7,     7,   186,   187,
     188,   189,   190,    81,     4,     4,     4,     7,     7,     7,
       4,   197,   198,     7,    10,    11,    12,     5,   196,   194,
      75,   201,   199,   196,   196,   196,    72,    73,   196,   196,
      76,   196,    78,    79,   196,   196,   196,   196,   202,     5,
      89,   196,   196,   201,    90,   196,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   196,   196,   105,
     106,   196,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   196,   196,   121,   131,   123,   124,   125,
     126,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   145,   196,   196,   196,
     146,   147,   147,   149,     7,     7,   197,   153,   198,   204,
     156,   204,   204,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   204,   199,    13,   198,     6,   182,    30,    31,   202,
     198,   202,   198,   192,   198,   198,   198,     6,     6,    30,
      31,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   197,
     226,   227,   228,   231,   196,   196,   196,     7,   202,    24,
       9,   199,   197,   202,   197,    30,    31,   199,   202,   200,
      22,   194,   197,    13,   201,   175,    -1,    29,    -1,   201,
     201,   201,   201,    -1,   201,   201,   201,   201,   201,    54,
     201,   201,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    67,   282,   280,   196,   201,   201,   201,   201,
     286,   287,   288,   289,   197,   291,   292,   293,   294,   295,
     296,   197,   197,   197,   201,    22,   197,   197,   201,   201,
      95,    96,    29,    85,   201,   201,   201,   197,   197,   197,
     316,   317,   198,   197,   197,   168,   197,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   168,   201,   201,
     201,   337,   202,   186,   187,   188,   189,   190,   193,   193,
     201,   201,   201,   349,   201,   186,   187,   188,   189,   190,
     201,   201,   205,   201,   201,   201,   201,   201,    85,   196,
     198,    -1,    30,    31,   205,   201,   201,   382,   163,   164,
     165,   166,   201,   168,   169,   170,   171,   172,   201,   201,
     201,   176,   177,   178,   179,   197,    54,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   197,   231,    -1,    67,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,   427,   428,
     202,    -1,    -1,    -1,    -1,    -1,   432,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   452,    -1,   452,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,   186,
     187,    -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,   498,
      -1,    -1,    -1,   499,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   528,   529,    -1,    -1,    -1,    -1,    -1,   538,
      -1,    -1,    -1,   539,    -1,   541,    -1,   205,    -1,   545,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   582,   583,   584,    -1,   586,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,    -1,   607,    -1,    -1,    -1,   602,   603,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   622,   623,    -1,   625,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    38,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,    -1,    -1,    -1,
     176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,   194,    -1,
     196,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,
     206,   207,   208,   209,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,   193,   194,    -1,   196,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,   206,   207,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,   206,   207,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
     194,    -1,   196,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,   206,   207,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
     194,    -1,   196,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,   206,   207,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,   206,   207,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,   194,    -1,   196,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,   206,   207,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    -1,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      73,    74,    75,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,     3,     4,   167,     6,     7,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,   104,   105,   187,    -1,    -1,    -1,    -1,    -1,    -1,
     194,    33,   196,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    43,   206,   207,    -1,    -1,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    73,    74,    75,   157,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,   167,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,   104,   105,   187,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    43,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,   187,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    43,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   187,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,   206,   207,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   157,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,   187,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    43,    -1,    -1,   202,    -1,    -1,    -1,
     206,   207,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,   104,   105,    54,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,   207,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,    95,    96,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,   207,    30,    31,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    95,    96,    -1,   176,   177,
     178,   179,    54,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    -1,    30,    31,   176,   177,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    54,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    30,    31,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    30,    31,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    30,    31,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    30,    31,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    30,    31,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    30,    31,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      30,    31,    -1,   176,   177,   178,   179,    95,    96,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,   208,   209,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    67,    -1,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    95,    96,    -1,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    -1,    -1,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    30,    31,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,    67,
      -1,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    30,    31,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    95,    96,    -1,
      -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    67,    -1,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    95,    96,    -1,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      67,    -1,    -1,   176,   177,   178,   179,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    95,    96,
      -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    -1,    -1,    -1,   176,   177,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    30,
      31,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,    67,    -1,    -1,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,    95,    96,    -1,    -1,   205,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    67,    -1,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      30,    31,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      95,    96,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,    67,    -1,    -1,
     176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    95,    96,    -1,    -1,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,    -1,    -1,
      -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    30,    31,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    67,    -1,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    30,    31,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    95,    96,    -1,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,    67,
      -1,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    30,    31,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    95,    96,    -1,
      -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,    67,    -1,    -1,   176,   177,   178,
     179,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    95,    96,    -1,    -1,   205,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    -1,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      67,    -1,    -1,   176,   177,   178,   179,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    30,    31,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    95,    96,
      -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,    67,    -1,    -1,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,    95,    96,    -1,    -1,   205,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    67,    -1,    -1,   176,   177,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    95,
      96,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    -1,    -1,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      30,    31,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,    67,    -1,    -1,
     176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    30,    31,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    95,    96,    -1,    -1,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    67,    -1,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    30,    31,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    95,    96,    -1,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,    67,    -1,
      -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,    95,    96,    -1,    -1,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,    -1,
      -1,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    30,    31,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,    67,    -1,    -1,   176,   177,   178,
     179,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    30,    31,    -1,    -1,    -1,    -1,   197,    -1,
      -1,    -1,    95,    96,    -1,    -1,   205,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      67,    -1,    -1,   176,   177,   178,   179,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    30,    31,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    95,    96,
      -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    67,    -1,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    95,    96,    -1,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,    -1,    -1,    -1,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    67,    -1,    -1,   176,   177,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    30,
      31,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    95,
      96,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,    67,    -1,    -1,
     176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    30,    31,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    95,    96,    -1,    -1,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    67,    -1,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      95,    96,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    -1,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,    -1,    67,
      -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    95,    96,    -1,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,    -1,
      67,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    95,    96,
      -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    54,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    -1,    -1,    67,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    95,    96,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,    -1,    67,    -1,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    95,    96,    -1,   205,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      -1,    67,    -1,   176,   177,   178,   179,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    95,
      96,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    54,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    -1,    67,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    95,    96,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    54,    -1,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,    -1,    67,    -1,
     176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    95,    96,    -1,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    -1,    67,    -1,   176,   177,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      95,    96,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    54,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,    -1,    -1,    67,   176,   177,   178,
     179,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    30,    31,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,    -1,    -1,    95,    96,   205,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    54,    -1,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,    -1,    67,
      -1,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    30,    31,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,    95,    96,    -1,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,
      54,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    -1,    67,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    95,    96,    -1,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    54,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    -1,    67,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    95,    96,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,    -1,
      67,    -1,   176,   177,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    30,    31,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    95,    96,
      -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    30,    31,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    54,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,    -1,    -1,    67,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    95,    96,   205,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,    -1,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      -1,    67,    -1,   176,   177,   178,   179,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    30,    31,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    95,
      96,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,    -1,    67,    -1,   176,   177,   178,
     179,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    95,    96,    -1,   205,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    54,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,    -1,    -1,    67,
     176,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    30,    31,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,    -1,    95,    96,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    -1,    67,    -1,   176,   177,   178,   179,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,    30,
      31,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
      95,    96,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,    -1,    67,    -1,   176,   177,
     178,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,    30,    31,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    -1,    95,    96,    -1,   205,    -1,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    54,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,    -1,    -1,
      67,   176,   177,   178,   179,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    30,    31,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    95,    96,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,
      54,    -1,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,    -1,    67,    -1,   176,   177,   178,   179,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      30,    31,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,    95,    96,    -1,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    54,    -1,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,    -1,    67,    -1,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,    30,    31,    -1,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,   205,    -1,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,    -1,
      -1,    67,   176,   177,   178,   179,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    95,
      96,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    54,    -1,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,    -1,    67,    -1,   176,   177,   178,   179,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,   205,    -1,    -1,   208,   209,
      -1,    -1,    -1,    -1,    -1,    54,    -1,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,    -1,    67,    -1,
      -1,   177,   178,   179,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,   205,
      -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    54,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
      -1,    -1,    67,    -1,    -1,   178,   179,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,   205,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    54,    -1,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,   188,
     189,   190,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,   205,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    54,    -1,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
     205,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
      -1,   169,   170,   171,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
     208,   209
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   211,   212,     0,    42,    81,   214,     5,     5,   218,
     196,   194,     3,     4,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    20,    21,    23,    25,    26,
      27,    28,    32,    33,    36,    38,    39,    40,    43,    67,
      97,    98,    99,   104,   105,   106,   107,   108,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   148,   149,   153,   157,   160,
     161,   162,   167,   187,   193,   194,   196,   201,   206,   207,
     213,   219,   221,   147,   213,   215,   216,   217,   219,   220,
      22,    29,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    85,   186,   187,   202,    22,    29,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    85,   186,
     187,   202,   201,   199,   196,   196,   196,     4,     7,     9,
     221,    36,   219,   196,     4,     7,   221,     4,     7,     4,
       7,     4,     7,   196,   196,   220,   196,   196,   196,   196,
     202,   201,     5,   196,   196,   196,   196,     4,     7,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,     7,   196,
       4,     7,   196,     4,     7,   196,   196,   196,   196,   221,
     221,   195,   220,   221,   221,   221,     7,    30,    31,    54,
      67,    95,    96,   163,   164,   165,   166,   168,   169,   170,
     171,   172,   176,   177,   178,   179,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   201,   205,   208,   209,     7,
     197,   198,   195,   219,   221,     4,     7,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   204,   204,
      73,    74,    75,   203,   221,   221,     4,     7,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   204,
     204,    73,    74,    75,   203,   221,   221,   221,   221,   221,
     199,   201,   220,    13,     4,     7,    24,   202,    24,   202,
      24,   198,   198,   198,   198,   198,   198,     6,     6,    37,
     221,   221,     7,   221,   168,   186,   187,   188,   189,   190,
     221,     4,     7,     4,     7,   221,   202,   202,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,     6,   199,     9,     4,
     221,     4,     7,   197,   197,   197,   197,   195,   197,   202,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   199,   194,   217,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   200,   197,   197,   197,
     221,    37,   196,   197,   197,   221,   221,   221,   221,     4,
       7,   221,   221,   221,   221,   221,   221,   197,   197,   197,
     197,   197,   198,   197,   201,   201,   201,   201,   201,   201,
     197,   197,   197,   197,   197,   197,   221,   221,   193,   197,
     197,   198,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   221,   198,   197,
     197,   197,   197,   201,   201,   201,   221,   200,   220,   202,
     219,   219,   201,   200,    13,   221,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   213,   221,   201,   219,   198,   198,
     193,   221,   201,   200,   221,   201,   195,   221,   175,   196,
     197,   198,   197,   221,   221,   193,   197,   201,   197,   201,
     219,   221,   201,   221,   201,   198,   198,   221,   201,   197,
     197,    30,    31,   168,   186,   187,   188,   189,   190,   205,
      30,    31,   168,   186,   187,   188,   189,   190,   205,   198,
     201,   201,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
       4,     7,    67,   187,   219,   219,   219,   194,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   197,   197,   221,   220,   219,   219,   195
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
#line 271 "./sintactico.y"
    { 
			exit(EXIT_SUCCESS); 
			liberar(&idFunciones); 
			liberar(&identificadores); 
			liberar_stack(&pila);
			liberar_array(&arreglos);
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 281 "./sintactico.y"
    {
			push_l_funcion(&idFunciones, (yyvsp[(3) - (6)].nameFunction), (yyvsp[(5) - (6)].nPtr));
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 284 "./sintactico.y"
    {;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 288 "./sintactico.y"
    { 
		(yyval.type_int) = INT;
		argsInFunction++; 
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 292 "./sintactico.y"
    {
		(yyval.type_int) = DECIMAL;
		argsInFunction++;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 296 "./sintactico.y"
    {
		(yyval.type_int) = BOOL;
		argsInFunction++;
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 303 "./sintactico.y"
    {
		printf("function declaration: %s-%d\n", (yyvsp[(2) - (8)].nameFunction), argsInFunction);
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 306 "./sintactico.y"
    {;}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 312 "./sintactico.y"
    {;
		/* Con esto hacemos que la función pueda interpretarse así:
		function $algo$() {stmt_list}		*/
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 324 "./sintactico.y"
    { 
			printf("El tipo fue... %d, para el ID = '%s'\n", (yyvsp[(1) - (2)].type_int), (yyvsp[(2) - (2)].identificador));
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 332 "./sintactico.y"
    { 
		ex((yyvsp[(2) - (2)].nPtr));			/* Ejecutar los nodos */ 
		freeNode((yyvsp[(2) - (2)].nPtr)); 	/* Liberar los nodos */
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 340 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 341 "./sintactico.y"
    { (yyval.nPtr) = NULL; }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 342 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 343 "./sintactico.y"
    { printf("Array detected...\n"); (yyval.nPtr) = NULL;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 344 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 345 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINTN, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 346 "./sintactico.y"
    { (yyval.nPtr) = opr(RAND, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 347 "./sintactico.y"
    { (yyval.nPtr) = opr(READ, 1, id((yyvsp[(3) - (5)].sIndex))); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 348 "./sintactico.y"
    { (yyval.nPtr) = opr(_READ_, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 349 "./sintactico.y"
    { (yyval.nPtr) = opr(PUTS, 1, conStr((yyvsp[(3) - (5)].cadena), typeCadena)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 350 "./sintactico.y"
    { (yyval.nPtr) = opr(BREAK, 0); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 351 "./sintactico.y"
    { (yyval.nPtr) = opr(EXIT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 352 "./sintactico.y"
    { (yyval.nPtr) = opr(PRASCII, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 353 "./sintactico.y"
    { (yyval.nPtr) = opr(CLEAR_STACK, 0); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 354 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VARS, 0); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 355 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VARS, 0); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 356 "./sintactico.y"
    { 
		 			(yyval.nPtr) = opr(INITIALIZE_IDENTIFIER, 2, idWithType((yyvsp[(2) - (5)].identificador), (yyvsp[(1) - (5)].type_int)), (yyvsp[(4) - (5)].nPtr)); 
										}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 359 "./sintactico.y"
    { 
							/* Buscar si ya está definida la variable, sino hay que
								crearla con el valor de la expresión.
							Sino hay que sobreescribir con el valor de dicha expresión */
							(yyval.nPtr) = opr('=', 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); 
										}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 365 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGNACION_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 366 "./sintactico.y"
    { 
			(yyval.nPtr) = opr(ARRAY_SIMPLE_ASIGN, 3, idArray((yyvsp[(1) - (7)].idArray)), (yyvsp[(3) - (7)].nPtr), (yyvsp[(6) - (7)].nPtr)); 
	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 369 "./sintactico.y"
    { (yyval.nPtr) = opr(INITRAND, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 370 "./sintactico.y"
    { (yyval.nPtr) = opr(_INITRAND_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 371 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_HAPPY, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 372 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_SAD, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 373 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_NO, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 375 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_HAPPY_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 376 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_SAD_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 377 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_NO_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 378 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_ADD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 379 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SUB, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 380 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MUL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 381 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_DIV, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 382 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MOD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 383 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_POW, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 384 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTLEFT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 385 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTRIGHT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 386 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_AND, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 387 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_OR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 388 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGNACION_PASCAL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 390 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_ADD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 391 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SUB_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 392 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MUL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 393 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_DIV_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 394 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MOD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 395 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTLEFT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 396 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTRIGHT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 397 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_AND_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 398 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_OR_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 399 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_PASCAL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 400 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_POW_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 401 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 402 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 404 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 405 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 406 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVE, 2, (yyvsp[(2) - (5)].nPtr), id((yyvsp[(4) - (5)].sIndex))); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 408 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVE_, 2, (yyvsp[(2) - (5)].nPtr), idS((yyvsp[(4) - (5)].identificador))); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 409 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 410 "./sintactico.y"
    { (yyval.nPtr) = opr(ADDASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 411 "./sintactico.y"
    { (yyval.nPtr) = opr(SUBASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 413 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 414 "./sintactico.y"
    { (yyval.nPtr) = opr(_ADDASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 415 "./sintactico.y"
    { (yyval.nPtr) = opr(_SUBASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 416 "./sintactico.y"
    { (yyval.nPtr) = opr(SWAP, 2, id((yyvsp[(1) - (4)].sIndex)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 417 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_, 2, idS((yyvsp[(1) - (4)].identificador)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 419 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_ID_VAR_, 2, idS((yyvsp[(1) - (4)].identificador)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 420 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_VAR_ID_, 2, id((yyvsp[(1) - (4)].sIndex)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 421 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_ADD, 0); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 422 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_SUB, 0); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 423 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_MUL, 0); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 424 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_DIV, 0); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 425 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 426 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 427 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 428 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 430 "./sintactico.y"
    { (yyval.nPtr) = opr(_INCR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 431 "./sintactico.y"
    { (yyval.nPtr) = opr(_DECR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 432 "./sintactico.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 434 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 435 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS, 5, id((yyvsp[(2) - (12)].sIndex)), (yyvsp[(4) - (12)].nPtr), (yyvsp[(6) - (12)].nPtr), (yyvsp[(9) - (12)].nPtr), (yyvsp[(11) - (12)].nPtr)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 436 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 437 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 438 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 439 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 440 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 441 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 442 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 443 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH, 4, (yyvsp[(3) - (11)].nPtr), (yyvsp[(7) - (11)].nPtr), id((yyvsp[(9) - (11)].sIndex)), (yyvsp[(11) - (11)].nPtr)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 445 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 446 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 447 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 448 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 449 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 450 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 451 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 452 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 453 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 454 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH_ID, 4, (yyvsp[(3) - (11)].nPtr), (yyvsp[(7) - (11)].nPtr), idS((yyvsp[(9) - (11)].identificador)), (yyvsp[(11) - (11)].nPtr)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 455 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 456 "./sintactico.y"
    { (yyval.nPtr) = opr(UNLESS, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 457 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 458 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 459 "./sintactico.y"
    { (yyval.nPtr) = NULL; }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 460 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 461 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(2) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 462 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(3) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr)); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 464 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_ID, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 465 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_VAR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 466 "./sintactico.y"
    { (yyval.nPtr) = opr(SYSTEM, 1, conStr((yyvsp[(3) - (5)].cadena), typeSystem)); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 467 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 468 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE_AND_ASSIGN, 2, idS((yyvsp[(3) - (7)].identificador)), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 469 "./sintactico.y"
    {	
			/* Declaración de un array */
			(yyval.nPtr) = opr(DECLARE_ARRAY, 2, idArray((yyvsp[(3) - (7)].idArray)), (yyvsp[(5) - (7)].nPtr)); 
	}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 473 "./sintactico.y"
    {
		/*printf("Tipo para esta shit %d\n", $5);*/
		(yyval.nPtr) = NULL;
	}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 480 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 481 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 485 "./sintactico.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].iValue)); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 486 "./sintactico.y"
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
#line 495 "./sintactico.y"
    { (yyval.nPtr) = conStr((yyvsp[(1) - (1)].cadena), typeCadena); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 496 "./sintactico.y"
    { (yyval.nPtr) = opr(ARRAY_POS, 2, idArray((yyvsp[(1) - (4)].idArray)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 497 "./sintactico.y"
    { (yyval.nPtr) = opr(PAR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 498 "./sintactico.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 499 "./sintactico.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 500 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 501 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 502 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 503 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 504 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 505 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 506 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 507 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 508 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 509 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 510 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 511 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 512 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 513 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 514 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 515 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 516 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 517 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 518 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 519 "./sintactico.y"
    { (yyval.nPtr) = opr('%', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 520 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 521 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 522 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 523 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 524 "./sintactico.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 525 "./sintactico.y"
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 526 "./sintactico.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 527 "./sintactico.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 528 "./sintactico.y"
    { (yyval.nPtr) = opr(ANDBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 529 "./sintactico.y"
    { (yyval.nPtr) = opr(ORBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 530 "./sintactico.y"
    { (yyval.nPtr) = opr(XOROP, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 531 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTLEFT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 532 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTRIGHT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 533 "./sintactico.y"
    { (yyval.nPtr) = opr(STRLEN, 1, conStr((yyvsp[(3) - (4)].cadena), typeStrlen)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 534 "./sintactico.y"
    { (yyval.nPtr) = opr(ABS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 535 "./sintactico.y"
    { (yyval.nPtr) = opr(FACTORIAL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 536 "./sintactico.y"
    { (yyval.nPtr) = opr(SUMATORIA, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 537 "./sintactico.y"
    { (yyval.nPtr) = opr(SQRT, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 538 "./sintactico.y"
    { (yyval.nPtr) = opr(ACOS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 539 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 540 "./sintactico.y"
    { (yyval.nPtr) = opr(ATAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 541 "./sintactico.y"
    { (yyval.nPtr) = opr(CEIL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 542 "./sintactico.y"
    { (yyval.nPtr) = opr(COS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 543 "./sintactico.y"
    { (yyval.nPtr) = opr(COSH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 544 "./sintactico.y"
    { (yyval.nPtr) = opr(EXP, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 545 "./sintactico.y"
    { (yyval.nPtr) = opr(LN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 546 "./sintactico.y"
    { (yyval.nPtr) = opr(FLOOR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 547 "./sintactico.y"
    { (yyval.nPtr) = opr(SIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 548 "./sintactico.y"
    { (yyval.nPtr) = opr(SINH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 549 "./sintactico.y"
    { (yyval.nPtr) = opr(TAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 550 "./sintactico.y"
    { (yyval.nPtr) = opr(TANH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 551 "./sintactico.y"
    { (yyval.nPtr) = opr(CALL, 0); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 552 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 553 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 554 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 555 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 556 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 557 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VAR, 1, id((yyvsp[(2) - (2)].sIndex))); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 558 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_CONST, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 559 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_ID, 1, idS((yyvsp[(2) - (2)].identificador))); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 560 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 561 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(2) - (2)].sIndex))); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 562 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 563 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(2) - (2)].identificador))); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 564 "./sintactico.y"
    { (yyval.nPtr) = opr(POP, 0); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 565 "./sintactico.y"
    { (yyval.nPtr) = opr(POP, 0); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 566 "./sintactico.y"
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
#line 580 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;



/* Line 1806 of yacc.c  */
#line 5446 "y.tab.c"
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
#line 582 "./sintactico.y"

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


