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
#line 17 "./sintactico.y"

	#include	<stdio.h>
	#include	<stdlib.h>
	#include	<stdarg.h>
	#include	"calc3.h"
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
	/* FIXME, cambiar de int a short */
	nodeType *conStr(char value[], short type);
	nodeType *idArray(char value[]);
	void freeNode(nodeType *p);
	void yyerror(char *s); 
	/* TODO Cambiar por una lista de identificadores */
	double sym[26]; /* symbol table */
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
#line 106 "y.tab.c"

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
     ID_ARRAY = 263,
     INT_TYPE = 264,
     DECIMAL_TYPE = 265,
     BOOL_TYPE = 266,
     WHILE = 267,
     IF = 268,
     PRINT = 269,
     RAND = 270,
     INITRAND = 271,
     INCR = 272,
     DECR = 273,
     DO = 274,
     READ = 275,
     ASIGNACION_PASCAL = 276,
     LETSET = 277,
     TO = 278,
     MOVE = 279,
     MOVASM = 280,
     ADDASM = 281,
     SUBASM = 282,
     SWAP = 283,
     SHIFTLEFT = 284,
     SHIFTRIGHT = 285,
     PUTS = 286,
     STRLEN = 287,
     _SWAP_ID_VAR_ = 288,
     _SWAP_VAR_ID_ = 289,
     IFTHEN = 290,
     IFEND = 291,
     PRINTN = 292,
     PRASCII = 293,
     DECLARE = 294,
     DECLARE_AND_ASSIGN = 295,
     FUNCTION = 296,
     PAR = 297,
     ASIGN_ADD = 298,
     ASIGN_SUB = 299,
     ASIGN_MUL = 300,
     ASIGN_DIV = 301,
     ASIGN_MOD = 302,
     ASIGN_SHIFTLEFT = 303,
     ASIGN_SHIFTRIGHT = 304,
     ASIGN_AND = 305,
     ASIGN_OR = 306,
     ASIGN_POW = 307,
     XOROP = 308,
     _ASIGN_ADD_ = 309,
     _ASIGN_SUB_ = 310,
     _ASIGN_MUL_ = 311,
     _ASIGN_DIV_ = 312,
     _ASIGN_MOD_ = 313,
     _ASIGN_SHIFTLEFT_ = 314,
     _ASIGN_SHIFTRIGHT_ = 315,
     _ASIGN_AND_ = 316,
     _ASIGN_OR_ = 317,
     _ASIGN_PASCAL_ = 318,
     _LETSET_ = 319,
     _ASIGN_POW_ = 320,
     OPVAR = 321,
     OPVAR_ADD = 322,
     OPVAR_SUB = 323,
     OPVAR_MUL = 324,
     OPVAR_DIV = 325,
     OPVAR_POW = 326,
     FACE_HAPPY = 327,
     FACE_SAD = 328,
     FACE_NO = 329,
     _FACE_HAPPY_ = 330,
     _FACE_SAD_ = 331,
     _FACE_NO_ = 332,
     INITIALIZE_IDENTIFIER = 333,
     PRINCIPIO = 334,
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
     IFX = 424,
     ELSE = 425,
     OR = 426,
     AND = 427,
     ORBITS = 428,
     ANDBITS = 429,
     NE = 430,
     EQ = 431,
     LE = 432,
     GE = 433,
     NEGACION = 434,
     UMINUS = 435
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define VARIABLE 259
#define FUNCNAME 260
#define CADENA 261
#define ID 262
#define ID_ARRAY 263
#define INT_TYPE 264
#define DECIMAL_TYPE 265
#define BOOL_TYPE 266
#define WHILE 267
#define IF 268
#define PRINT 269
#define RAND 270
#define INITRAND 271
#define INCR 272
#define DECR 273
#define DO 274
#define READ 275
#define ASIGNACION_PASCAL 276
#define LETSET 277
#define TO 278
#define MOVE 279
#define MOVASM 280
#define ADDASM 281
#define SUBASM 282
#define SWAP 283
#define SHIFTLEFT 284
#define SHIFTRIGHT 285
#define PUTS 286
#define STRLEN 287
#define _SWAP_ID_VAR_ 288
#define _SWAP_VAR_ID_ 289
#define IFTHEN 290
#define IFEND 291
#define PRINTN 292
#define PRASCII 293
#define DECLARE 294
#define DECLARE_AND_ASSIGN 295
#define FUNCTION 296
#define PAR 297
#define ASIGN_ADD 298
#define ASIGN_SUB 299
#define ASIGN_MUL 300
#define ASIGN_DIV 301
#define ASIGN_MOD 302
#define ASIGN_SHIFTLEFT 303
#define ASIGN_SHIFTRIGHT 304
#define ASIGN_AND 305
#define ASIGN_OR 306
#define ASIGN_POW 307
#define XOROP 308
#define _ASIGN_ADD_ 309
#define _ASIGN_SUB_ 310
#define _ASIGN_MUL_ 311
#define _ASIGN_DIV_ 312
#define _ASIGN_MOD_ 313
#define _ASIGN_SHIFTLEFT_ 314
#define _ASIGN_SHIFTRIGHT_ 315
#define _ASIGN_AND_ 316
#define _ASIGN_OR_ 317
#define _ASIGN_PASCAL_ 318
#define _LETSET_ 319
#define _ASIGN_POW_ 320
#define OPVAR 321
#define OPVAR_ADD 322
#define OPVAR_SUB 323
#define OPVAR_MUL 324
#define OPVAR_DIV 325
#define OPVAR_POW 326
#define FACE_HAPPY 327
#define FACE_SAD 328
#define FACE_NO 329
#define _FACE_HAPPY_ 330
#define _FACE_SAD_ 331
#define _FACE_NO_ 332
#define INITIALIZE_IDENTIFIER 333
#define PRINCIPIO 334
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
#define IFX 424
#define ELSE 425
#define OR 426
#define AND 427
#define ORBITS 428
#define ANDBITS 429
#define NE 430
#define EQ 431
#define LE 432
#define GE 433
#define NEGACION 434
#define UMINUS 435




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 51 "./sintactico.y"
 
	double iValue; 		/* integer value */
	char sIndex;		/* symbol table index */ 
	char cadena[1000];
	/* Id: */
	char identificador[100];
	/* El string que guarda el array */
	char idArray[100];
	char nameFunction[100];
	nodeType *nPtr; 	/* node pointer */
	short type_int;



/* Line 293 of yacc.c  */
#line 517 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 529 "y.tab.c"

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
#define YYLAST   7895

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  205
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNRULES -- Number of states.  */
#define YYNSTATES  619

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   435

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   201,     2,     2,     2,   200,   203,     2,
     191,   192,   183,   181,   193,   182,   188,   184,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   196,
     174,   197,   173,   198,   199,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   194,     2,   195,   185,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   189,   204,   190,   202,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   175,   176,
     177,   178,   179,   180,   186,   187
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
     774,   776,   779,   781,   783,   785,   790,   795,   797,   800,
     803,   806,   809,   813,   817,   821,   825,   829,   833,   837,
     841,   845,   849,   853,   857,   861,   865,   869,   873,   877,
     881,   885,   889,   893,   897,   901,   905,   909,   913,   918,
     923,   928,   935,   940,   945,   950,   955,   960,   965,   970,
     975,   980,   985,   990,   995,  1000,  1005,  1008,  1013,  1018,
    1023,  1028,  1033,  1036,  1041,  1044,  1049,  1052,  1057,  1060,
    1064,  1066,  1070
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     206,     0,    -1,   207,   209,   213,   188,    -1,   207,    81,
       5,   189,   215,   190,    -1,    -1,     9,    -1,    10,    -1,
      11,    -1,    41,     5,   191,   210,   192,   189,   215,   190,
      -1,    -1,   211,    -1,   147,    -1,    -1,   211,   193,   212,
      -1,   212,    -1,   208,     7,    -1,   208,     7,   194,   195,
      -1,   213,   214,    -1,    -1,   196,    -1,   216,   196,    -1,
     149,     7,   194,   216,   195,   196,    -1,    14,   191,   216,
     192,   196,    -1,    37,   191,   216,   192,   196,    -1,    15,
     216,   196,    -1,    20,   191,     4,   192,   196,    -1,    20,
     191,     7,   192,   196,    -1,    31,   191,     6,   192,   196,
      -1,    97,   196,    -1,    99,   191,   216,   192,   196,    -1,
      38,   191,   216,   192,   196,    -1,   160,   191,   192,   196,
      -1,   161,   191,   192,   196,    -1,   162,   191,   192,   196,
      -1,   208,     7,   197,   216,   196,    -1,     4,   197,   216,
     196,    -1,     7,   197,   216,   196,    -1,     8,   194,   216,
     195,   197,   216,   196,    -1,     4,   197,   198,   196,    -1,
       7,   197,   198,   196,    -1,     4,   197,    72,   196,    -1,
       4,   197,    73,   196,    -1,     4,   197,    74,   196,    -1,
       7,   197,    72,   196,    -1,     7,   197,    73,   196,    -1,
       7,   197,    74,   196,    -1,     4,    43,   216,   196,    -1,
       4,    44,   216,   196,    -1,     4,    45,   216,   196,    -1,
       4,    46,   216,   196,    -1,     4,    47,   216,   196,    -1,
       4,    52,   216,   196,    -1,     4,    48,   216,   196,    -1,
       4,    49,   216,   196,    -1,     4,    50,   216,   196,    -1,
       4,    51,   216,   196,    -1,     4,    21,   216,   196,    -1,
       7,    43,   216,   196,    -1,     7,    44,   216,   196,    -1,
       7,    45,   216,   196,    -1,     7,    46,   216,   196,    -1,
       7,    47,   216,   196,    -1,     7,    48,   216,   196,    -1,
       7,    49,   216,   196,    -1,     7,    50,   216,   196,    -1,
       7,    51,   216,   196,    -1,     7,    21,   216,   196,    -1,
       7,    52,   216,   196,    -1,    22,     4,   197,   216,   196,
      -1,    22,     4,    23,   216,   196,    -1,    22,     7,   197,
     216,   196,    -1,    22,     7,    23,   216,   196,    -1,    24,
     216,    23,     4,   196,    -1,    24,   216,    23,     7,   196,
      -1,    25,     4,   193,   216,   196,    -1,    26,     4,   193,
     216,   196,    -1,    27,     4,   193,   216,   196,    -1,    25,
       7,   193,   216,   196,    -1,    26,     7,   193,   216,   196,
      -1,    27,     7,   193,   216,   196,    -1,     4,    28,     4,
     196,    -1,     7,    28,     7,   196,    -1,     7,    28,     4,
     196,    -1,     4,    28,     7,   196,    -1,    66,   197,   181,
     196,    -1,    66,   197,   182,   196,    -1,    66,   197,   183,
     196,    -1,    66,   197,   184,   196,    -1,    66,   197,   185,
     196,    -1,    66,   197,   168,   196,    -1,     4,   181,   199,
     196,    -1,     4,   182,   199,   196,    -1,     7,   181,   199,
     196,    -1,     7,   182,   199,   196,    -1,    12,   191,   216,
     192,   214,    -1,   107,     4,   197,   216,   193,   216,   193,
     182,   216,   214,    -1,   107,     4,   197,   216,   193,   216,
     193,   181,   216,   189,   215,   190,    -1,   107,     4,   197,
     216,   193,   216,   193,   183,   216,   214,    -1,   107,     4,
     197,   216,   193,   216,   193,   184,   216,   214,    -1,   107,
       4,   197,   216,   193,   216,   193,   185,   216,   214,    -1,
     107,     4,   197,   216,   193,   216,   193,   168,   216,   214,
      -1,   107,     4,   197,   216,   193,   216,   193,   200,   216,
     214,    -1,   107,     4,   197,   216,   193,   216,   193,    29,
     216,   214,    -1,   107,     4,   197,   216,   193,   216,   193,
      30,   216,   214,    -1,   108,   191,   216,   188,   188,   188,
     216,   193,     4,   192,   214,    -1,   107,     7,   197,   216,
     193,   216,   193,   182,   216,   214,    -1,   107,     7,   197,
     216,   193,   216,   193,   181,   216,   214,    -1,   107,     7,
     197,   216,   193,   216,   193,   183,   216,   214,    -1,   107,
       7,   197,   216,   193,   216,   193,   184,   216,   214,    -1,
     107,     7,   197,   216,   193,   216,   193,   185,   216,   214,
      -1,   107,     7,   197,   216,   193,   216,   193,   168,   216,
     214,    -1,   107,     7,   197,   216,   193,   216,   193,   200,
     216,   214,    -1,   107,     7,   197,   216,   193,   216,   193,
      29,   216,   214,    -1,   107,     7,   197,   216,   193,   216,
     193,    30,   216,   214,    -1,   108,   191,   216,   188,   188,
     188,   216,   193,     7,   192,   214,    -1,    13,   191,   216,
     192,   214,    -1,   106,   191,   216,   192,   214,    -1,    13,
     191,   216,   192,   214,   170,   214,    -1,   189,   215,   190,
      -1,   189,   190,    -1,    35,   215,    36,    -1,    19,   214,
      12,   191,   216,   192,   196,    -1,    19,    35,   215,    36,
      12,   191,   216,   192,   196,    -1,     7,    85,   216,   196,
      -1,     4,    85,   216,   196,    -1,   148,   191,     6,   192,
     196,    -1,    39,   191,     7,   192,   196,    -1,    39,   191,
       7,   193,   216,   192,   196,    -1,   149,   191,     8,   193,
     216,   192,   196,    -1,    39,   191,     7,   193,   208,   193,
     216,   192,   196,    -1,   214,    -1,   215,   214,    -1,     3,
      -1,     7,    -1,     6,    -1,     8,   194,   216,   195,    -1,
      42,   191,   216,   192,    -1,     4,    -1,   182,   216,    -1,
     201,   216,    -1,   202,   216,    -1,   167,   216,    -1,   216,
     181,   216,    -1,   216,   163,   216,    -1,   216,   182,   216,
      -1,   216,   164,   216,    -1,   216,   183,   216,    -1,   216,
     166,   216,    -1,   216,   184,   216,    -1,   216,   165,   216,
      -1,   216,   174,   216,    -1,   216,    96,   216,    -1,   216,
     173,   216,    -1,   216,    95,   216,    -1,   216,   185,   216,
      -1,   216,   168,   216,    -1,   216,   200,   216,    -1,   216,
     180,   216,    -1,   216,   179,   216,    -1,   216,   177,   216,
      -1,   216,   178,   216,    -1,   216,   172,   216,    -1,   216,
     171,   216,    -1,   216,   203,   216,    -1,   216,   204,   216,
      -1,   216,    53,   216,    -1,   216,    29,   216,    -1,   216,
      30,   216,    -1,    32,   191,     6,   192,    -1,   130,   191,
     216,   192,    -1,   131,   191,   216,   192,    -1,   132,   191,
     216,   193,   216,   192,    -1,   133,   191,   216,   192,    -1,
     134,   191,   216,   192,    -1,   135,   191,   216,   192,    -1,
     136,   191,   216,   192,    -1,   137,   191,   216,   192,    -1,
     138,   191,   216,   192,    -1,   139,   191,   216,   192,    -1,
     140,   191,   216,   192,    -1,   142,   191,   216,   192,    -1,
     141,   191,   216,   192,    -1,   143,   191,   216,   192,    -1,
     144,   191,   216,   192,    -1,   145,   191,   216,   192,    -1,
     146,   191,   216,   192,    -1,    98,     5,    -1,   104,   191,
       4,   192,    -1,   104,   191,     7,   192,    -1,   105,   191,
       4,   192,    -1,   105,   191,     7,   192,    -1,   153,   191,
       4,   192,    -1,   153,     4,    -1,   153,   191,   216,   192,
      -1,   153,     7,    -1,   157,   191,     4,   192,    -1,   157,
       4,    -1,   157,   191,     7,   192,    -1,   157,     7,    -1,
     157,   191,   192,    -1,   157,    -1,   216,    66,   216,    -1,
     191,   216,   192,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   259,   259,   269,   272,   276,   280,   284,   291,   294,
     298,   299,   300,   307,   308,   312,   315,   320,   324,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   346,   352,   353,   356,   357,
     358,   359,   360,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     391,   392,   393,   395,   396,   397,   398,   400,   401,   402,
     403,   404,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   417,   418,   419,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   451,   452,   453,   454,   455,   456,   460,
     467,   468,   472,   473,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   562
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "FUNCNAME",
  "CADENA", "ID", "ID_ARRAY", "INT_TYPE", "DECIMAL_TYPE", "BOOL_TYPE",
  "WHILE", "IF", "PRINT", "RAND", "INITRAND", "INCR", "DECR", "DO", "READ",
  "ASIGNACION_PASCAL", "LETSET", "TO", "MOVE", "MOVASM", "ADDASM",
  "SUBASM", "SWAP", "SHIFTLEFT", "SHIFTRIGHT", "PUTS", "STRLEN",
  "_SWAP_ID_VAR_", "_SWAP_VAR_ID_", "IFTHEN", "IFEND", "PRINTN", "PRASCII",
  "DECLARE", "DECLARE_AND_ASSIGN", "FUNCTION", "PAR", "ASIGN_ADD",
  "ASIGN_SUB", "ASIGN_MUL", "ASIGN_DIV", "ASIGN_MOD", "ASIGN_SHIFTLEFT",
  "ASIGN_SHIFTRIGHT", "ASIGN_AND", "ASIGN_OR", "ASIGN_POW", "XOROP",
  "_ASIGN_ADD_", "_ASIGN_SUB_", "_ASIGN_MUL_", "_ASIGN_DIV_",
  "_ASIGN_MOD_", "_ASIGN_SHIFTLEFT_", "_ASIGN_SHIFTRIGHT_", "_ASIGN_AND_",
  "_ASIGN_OR_", "_ASIGN_PASCAL_", "_LETSET_", "_ASIGN_POW_", "OPVAR",
  "OPVAR_ADD", "OPVAR_SUB", "OPVAR_MUL", "OPVAR_DIV", "OPVAR_POW",
  "FACE_HAPPY", "FACE_SAD", "FACE_NO", "_FACE_HAPPY_", "_FACE_SAD_",
  "_FACE_NO_", "INITIALIZE_IDENTIFIER", "PRINCIPIO", "FUNCION", "PROC",
  "_ASIGNACION_", "_READ_", "_INITRAND_", "CONCATENATE_DIGITS",
  "CONCATENATE_DIGITS_ID", "CONCATENATE_DIGITS_VAR", "_MOVE_", "_MOVASM_",
  "_ADDASM_", "_SUBASM_", "_SWAP_", "_INCR_", "_DECR_", "_GT_", "_LT_",
  "BREAK", "CALL", "EXIT", "INCR_FUNC_ID", "INCR_FUNC_VAR", "DECR_FUNC_ID",
  "DECR_FUNC_VAR", "INCREMENTAR", "DECREMENTAR", "UNLESS", "FOR",
  "FOREACH", "FOREACH_ID", "FOR_MENOS", "FOR_MENOS_ID", "FOR_MAS",
  "FOR_MAS_ID", "FOR_MUL", "FOR_MUL_ID", "FOR_DIV", "FOR_DIV_ID",
  "FOR_POW", "FOR_POW_ID", "FOR_MOD", "FOR_MOD_ID", "FOR_SHIFTLEFTF",
  "FOR_SHIFTLEFTF_ID", "FOR_SHIFTRIGHT", "FOR_SHIFTRIGHT_ID", "FOR_OR",
  "FOR_OR_ID", "FOR_AND", "FOR_AND_ID", "ABS", "FACTORIAL", "SUMATORIA",
  "SQRT", "ACOS", "ASIN", "ATAN", "CEIL", "COS", "COSH", "EXP", "FLOOR",
  "LN", "SIN", "SINH", "TAN", "TANH", "VOID", "SYSTEM", "ARRAY",
  "DECLARE_ARRAY", "ARRAY_POS", "ARRAY_SIMPLE_ASIGN", "PUSH", "PUSH_VAR",
  "PUSH_ID", "PUSH_CONST", "POP", "POP_VAR", "POP_ID", "CLEAR_STACK",
  "PUSH_VARS", "POP_VARS", "EXPR_MAS", "EXPR_MENOS", "EXPR_DIV",
  "EXPR_MUL", "EXPR_NOT", "EXPR_ELEVADO", "IFX", "ELSE", "OR", "AND",
  "'>'", "'<'", "ORBITS", "ANDBITS", "NE", "EQ", "LE", "GE", "'+'", "'-'",
  "'*'", "'/'", "'^'", "NEGACION", "UMINUS", "'.'", "'{'", "'}'", "'('",
  "')'", "','", "'['", "']'", "';'", "'='", "'?'", "'@'", "'%'", "'!'",
  "'~'", "'&'", "'|'", "$accept", "program", "funciones", "type_specifier",
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
     425,   426,   427,    62,    60,   428,   429,   430,   431,   432,
     433,    43,    45,    42,    47,    94,   434,   435,    46,   123,
     125,    40,    41,    44,    91,    93,    59,    61,    63,    64,
      37,    33,   126,    38,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   205,   206,   207,   207,   208,   208,   208,   209,   209,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     215,   215,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216
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
       1,     2,     1,     1,     1,     4,     4,     1,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       4,     6,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     4,     4,     4,
       4,     4,     2,     4,     2,     4,     2,     4,     2,     3,
       1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     9,     1,     0,     0,    18,     0,     0,     0,
      12,     0,   132,   137,   134,   133,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     2,     0,     0,    19,     0,     0,     0,
      17,     0,    11,     0,     0,    10,    14,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   194,
       0,   196,   198,     0,     0,     0,     0,   141,   138,   119,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    15,     0,     0,     3,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,     0,     0,     0,   199,     0,     0,
       0,   118,   202,     0,   166,   167,   165,   201,   153,   151,
     143,   145,   149,   147,   155,   162,   161,   152,   150,   159,
     160,   158,   157,   142,   144,   146,   148,   154,   156,   163,
     164,     0,     0,    13,    56,    80,    83,    46,    47,    48,
      49,    50,    52,    53,    54,    55,    51,   124,    90,    91,
      40,    41,    42,    38,    35,    66,    82,    81,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    67,   123,    92,
      93,    43,    44,    45,    39,    36,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,   136,    89,    84,    85,    86,    87,    88,
       0,   187,   188,   189,   190,     0,     0,     0,     0,   169,
     170,     0,   172,   173,   174,   175,   176,   177,   178,   179,
     181,   180,   182,   183,   184,   185,     0,     0,     0,   191,
     193,   195,   197,    31,    32,    33,     0,    16,     0,     0,
      94,   115,    22,   135,     0,     0,    25,    26,    69,    68,
      71,    70,    72,    73,    74,    77,    75,    78,    76,    79,
      27,    23,    30,   126,     0,     0,    29,   116,     0,     0,
       0,     0,   125,     0,     0,    34,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,    21,     0,    37,
     117,     0,   121,     0,   127,     0,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   100,     0,    95,    97,
      98,    99,   101,   112,   113,   110,   106,   105,   107,   108,
     109,   111,     0,     0,   144,     0,   104,   114,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    79,     6,    84,    85,    86,     9,    87,
      88,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
static const yytype_int16 yypact[] =
{
    -175,    12,   -34,  -175,    47,    52,  -175,  -133,  -130,   806,
      -1,  2406,  -175,   250,  -175,   456,  -134,  -175,  -175,  -175,
    -129,  -128,  -127,  2923,  2606,  -123,     7,  2923,     9,    16,
      20,  -121,  -118,  2406,  -117,  -116,  -115,  -114,  -136,  -112,
      73,  -111,  -110,  -109,   -95,    25,   -94,   -91,   -79,   -78,
     -72,   -71,   -70,   -68,   -67,   -66,   -65,   -64,   -63,   -62,
     -61,   -60,   -59,   -58,   -56,    -4,    -3,    27,   -55,   -54,
     -51,  2923,  2923,  -175,  1006,  2923,  -175,  2923,  2923,   135,
    -175,  3098,  -175,   136,   -48,   -46,  -175,  -175,  1206,  2923,
      26,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,
    2923,  2923,   -50,   -49,   216,  2923,    36,  2923,  2923,  2923,
    2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,   -30,   -29,
    2688,  2923,  2923,  2923,  2923,  -175,  -175,   -23,  3145,  2406,
     160,    37,   -18,   -17,  3054,   -20,   -16,   -15,   -11,   -10,
      28,   169,   170,  1406,  2923,  2923,   177,  2923,  -146,  -175,
    -175,  2923,    38,    42,  2923,   -12,    30,  2923,  2923,  2923,
    2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,
    2923,  2923,  2923,  2923,  2923,   180,    34,   221,  -175,  -175,
    2999,  -175,  -175,    21,    39,    43,    48,  1127,  1127,  -175,
    1606,  3194,  1127,  1127,    33,  2923,  2923,  2923,  2923,  2923,
    2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,
    2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  -175,
    2923,  2923,  2923,    40,    49,    45,  -175,  -175,  3238,    41,
      50,  3285,  3334,  3378,  3425,  3474,  3518,  3565,  3614,  3658,
    3705,  3754,    51,    53,    54,    55,    56,    57,  3798,  3845,
      58,    59,  3894,  3938,  3985,  4034,  4078,  4125,  4174,  4218,
    4265,  4314,  4358,    60,    61,    63,    64,    65,    66,  4405,
    4454,  4498,  4545,  4638,  2923,  -175,  1806,    72,    74,    77,
    2923,  2923,  2923,  2923,    44,  2923,  2923,  2923,  2923,  2923,
    2923,    78,    80,  -175,  4685,  4729,  -174,  4778,    68,    69,
      89,    90,    91,    95,  4852,    81,   100,   111,   114,  4901,
    2923,  2923,  4945,  4992,  5041,  5085,  5132,  5181,  5272,  5321,
    5365,  5412,  5505,  5552,  5596,  5645,  5719,  5768,  5812,  5859,
     115,  2923,   116,   118,  5952,   119,   120,  -175,   112,   117,
     121,  -175,  -175,  2923,  7431,  7431,  7431,  7431,  7431,  7431,
    7431,  7431,  7431,  7431,  1127,  7475,  7522,  7571,  7571,  7571,
    7571,  7571,  7571,  7597,  7597,  7691,  7691,   927,  7431,  7431,
    7431,   123,  2406,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,   122,  2406,  2406,   126,
    5999,   224,  2923,   127,   128,  6043,  6092,  6139,  6183,   130,
     131,  6232,  6279,  6323,  6372,  6419,  6463,   132,  -175,   133,
     134,   137,  2768,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     138,  -175,  -175,  -175,  -175,  2406,  6512,  6559,   143,  -175,
    -175,  2923,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,   140,  6603,  2923,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  6725,  -175,  2006,  2923,
    -175,    71,  -175,  -175,   124,  6770,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,   139,  6816,  -175,  -175,  2923,  2923,
     150,  6865,  -175,   144,  6910,  -175,  -175,  6956,  2406,  2923,
     145,  2923,   146,  7005,  7050,  2923,  -175,  -175,   147,  -175,
    -175,  7096,  -175,  7151,  -175,   196,   203,  7242,  -175,   148,
     149,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,
    2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,  2923,    46,
    -175,  -175,   604,   604,   604,  7291,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     171,   174,  2843,  2923,  -175,  -175,  -175,  2406,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  2406,  2406,  7335,  2206,  -175,  -175,  -175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,    -8,  -175,  -175,  -175,    14,  -175,    -9,
      -7,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -139
static const yytype_int16 yytable[] =
{
      80,   178,    83,   176,   179,   280,   282,     4,    17,    18,
      19,   132,     3,   135,   133,   130,   136,   128,   441,   442,
     137,   134,   298,   138,   139,   335,   143,   140,   336,   155,
     229,   181,   156,   230,   182,   299,   300,   301,   302,   303,
     250,   278,   305,   251,   279,   306,   307,     5,   429,   308,
     590,   430,     7,   591,    17,    18,    19,     8,    10,    11,
     121,   148,   122,   123,   124,   187,   188,   190,   131,   191,
     141,   192,   193,   142,   144,   145,   146,   147,   150,   227,
     151,   152,   153,   228,   149,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   154,   157,   248,   249,
     158,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   159,   160,   269,   270,   271,   272,   273,   161,
     162,   163,   276,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   227,   175,   184,   185,   294,   295,
     186,   297,   194,   223,   224,   304,    82,   225,   309,   242,
     243,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   263,
     264,   274,   277,   285,   334,   291,   292,   286,   287,   281,
     283,   227,   288,   289,   296,   310,   330,   177,   180,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   337,   368,   369,   370,    83,   183,    12,
     125,   290,    14,   126,   127,   551,   552,   311,   331,   332,
     343,   338,   560,   561,   371,   339,   494,   375,   372,   373,
     340,   528,     0,     0,     0,     0,   376,   388,    32,   389,
     390,   391,   392,   393,   396,   397,   409,   410,    37,   411,
     412,   413,   414,   422,   444,   445,   423,   227,   420,   424,
     437,    89,   438,   451,   425,   426,   427,   428,    90,   431,
     432,   433,   434,   435,   436,   446,   447,   448,   244,   245,
     246,   449,   452,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   453,   456,   457,   454,   476,   483,   478,
     479,   481,   482,   484,    40,   529,     0,   485,   487,   489,
      42,    43,   492,   496,   497,   477,   502,   503,   510,   511,
     512,   520,   531,   513,   516,   101,   522,   486,   535,     0,
     537,   542,   544,   548,   570,   571,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   612,   553,   488,   613,     0,     0,    66,
       0,   562,     0,    67,     0,     0,     0,   554,   555,   556,
     557,   558,     0,    71,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,   559,     0,    72,     0,
       0,     0,     0,   568,     0,     0,     0,    75,   490,   491,
       0,     0,     0,     0,   247,     0,   495,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   103,     0,   514,     0,   515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   517,   104,     0,     0,
       0,     0,     0,     0,     0,   521,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   524,     0,     0,     0,     0,   105,     0,   227,
       0,     0,     0,   527,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,     0,
       0,     0,   533,   534,     0,     0,     0,     0,     0,   540,
       0,     0,     0,   541,     0,   543,     0,     0,     0,   547,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   594,   595,   596,     0,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,     0,     0,     0,     0,     0,   347,   614,     0,     0,
     615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   616,   617,     0,   227,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,    24,    25,     0,    26,     0,    27,    28,
      29,    30,     0,   195,   196,    31,    32,   118,   119,    33,
       0,    34,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,     0,   120,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     592,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
     200,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,     0,     0,    66,     0,     0,
       0,    67,     0,     0,    68,    69,    70,   201,   202,   203,
     204,    71,   205,     0,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   593,   216,   217,   218,
       0,     0,     0,    74,     0,    75,     0,     0,     0,     0,
      76,     0,     0,     0,   220,    77,    78,   221,   222,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,   195,   196,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,   198,    73,    74,     0,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   199,   200,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   202,   203,   204,     0,   205,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,     0,     0,
     221,   222,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,   195,   196,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,   198,     0,    74,   189,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   199,   200,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   202,   203,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,     0,     0,
     221,   222,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,   226,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,   293,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,     0,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,   341,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,   421,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,     0,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,   526,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,   618,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,    33,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
       0,     0,     0,    67,     0,     0,    68,    69,    70,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    74,     0,    75,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    77,    78,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    24,    25,     0,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,     0,
       0,   129,     0,    34,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,   125,     0,    14,   126,   127,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,    66,
     265,   266,   267,    67,     0,     0,    68,    69,    70,     0,
       0,    12,   125,    71,    14,   126,   127,    17,    18,    19,
       0,     0,     0,     0,     0,     0,    40,     0,    72,     0,
       0,     0,    42,    43,     0,    74,     0,    75,     0,     0,
      32,     0,    76,     0,     0,     0,     0,    77,    78,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,    66,     0,     0,     0,    67,    12,   125,     0,    14,
     126,   127,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
      72,     0,    42,    43,     0,    32,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    37,   268,     0,     0,    77,
      78,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,    66,     0,     0,     0,    67,    12,   125,     0,    14,
     126,   127,     0,     0,     0,    71,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,    42,    43,     0,
      72,     0,     0,     0,     0,    32,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    77,
      78,     0,     0,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
      67,     0,    12,   333,     0,    14,   126,   127,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,    72,     0,    42,    43,     0,
       0,    32,     0,     0,    75,     0,     0,     0,     0,     0,
     148,    37,     0,     0,    77,    78,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,    66,   284,     0,     0,
      67,     0,     0,   195,   196,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,    42,    43,    72,     0,   197,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
     198,     0,     0,     0,    77,    78,     0,   195,   196,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,     0,     0,   199,
     200,   197,    66,     0,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,   198,     0,    71,     0,     0,     0,
       0,     0,     0,     0,   195,   196,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,   199,   200,     0,     0,     0,   197,     0,
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   219,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   275,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,   342,   197,     0,     0,
       0,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   374,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   377,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     378,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   379,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   380,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     381,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   382,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   383,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     384,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   385,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   386,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     387,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   394,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   395,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     398,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   399,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   400,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     401,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   402,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   403,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     404,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   405,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   406,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,   195,   196,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,   197,     0,     0,
     407,     0,     0,     0,   220,     0,     0,   221,   222,     0,
     198,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,   199,
     200,   197,     0,     0,   408,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,     0,   197,     0,
       0,   415,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,   201,   202,   203,
     204,     0,   205,     0,     0,   206,   207,   208,   209,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     199,   200,     0,     0,     0,     0,     0,     0,     0,   416,
       0,     0,     0,     0,   220,     0,     0,   221,   222,     0,
       0,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,     0,     0,     0,
     417,   197,     0,     0,     0,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,   418,   197,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,     0,   195,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   200,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,   201,   202,   203,   204,     0,   205,   195,   196,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   199,   200,     0,     0,     0,     0,
     419,   197,     0,     0,     0,     0,     0,     0,   220,     0,
       0,   221,   222,     0,   198,     0,     0,     0,   201,   202,
     203,   204,     0,   205,     0,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   199,   200,     0,     0,   439,     0,     0,
       0,   195,   196,     0,     0,   220,     0,     0,   221,   222,
       0,     0,   201,   202,   203,   204,     0,   205,     0,     0,
     206,   207,   208,   209,     0,   197,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,     0,   198,     0,
       0,   440,     0,     0,     0,     0,     0,     0,     0,   220,
     195,   196,   221,   222,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,   204,     0,   205,   199,   200,   206,
     207,   208,   209,     0,   197,   210,   211,   212,   213,   214,
     215,   216,   217,   218,     0,     0,     0,   198,     0,     0,
     443,     0,     0,     0,   195,   196,     0,     0,   220,     0,
       0,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,   200,   197,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     199,   200,     0,     0,   450,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     195,   196,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   199,   200,     0,
       0,     0,     0,   455,   197,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,   198,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   458,     0,     0,   199,   200,   197,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     199,   200,     0,     0,   459,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     195,   196,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   199,   200,     0,
       0,     0,     0,   460,   197,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,   198,   201,   202,
     203,   204,     0,   205,     0,     0,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,     0,   199,   200,   461,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
       0,     0,     0,     0,   462,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     195,   196,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   199,   200,     0,
       0,     0,     0,   463,   197,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,   198,     0,     0,
       0,     0,     0,     0,   195,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,   200,   197,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     199,   200,     0,     0,   464,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
       0,     0,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   199,   200,     0,
       0,     0,     0,   465,     0,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,     0,     0,     0,   466,   197,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     199,   200,     0,     0,   467,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   200,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   199,   200,     0,     0,     0,     0,   468,   197,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,   201,   202,   203,   204,     0,
     205,     0,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     199,   200,     0,     0,   469,     0,     0,     0,   195,   196,
       0,     0,   220,     0,     0,   221,   222,     0,     0,   201,
     202,   203,   204,     0,   205,     0,     0,   206,   207,   208,
     209,     0,   197,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,   198,     0,     0,   470,     0,
       0,     0,     0,     0,     0,     0,   220,   195,   196,   221,
     222,     0,     0,     0,     0,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   199,   200,   206,   207,   208,   209,
       0,   197,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,     0,   198,     0,     0,   471,     0,     0,
       0,   195,   196,     0,     0,   220,     0,     0,   221,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   200,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   195,   196,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   199,   200,     0,
       0,   472,   197,     0,     0,     0,     0,     0,     0,   220,
       0,     0,   221,   222,     0,   198,     0,     0,     0,     0,
       0,   201,   202,   203,   204,     0,   205,     0,     0,   206,
     207,   208,   209,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   199,   200,     0,     0,     0,     0,
     473,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,   221,   222,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
       0,     0,     0,     0,   474,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   195,   196,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   199,   200,     0,
       0,   475,   197,     0,     0,     0,     0,     0,     0,   220,
       0,     0,   221,   222,     0,   198,     0,     0,     0,     0,
       0,     0,   195,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,   200,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   199,   200,
       0,     0,     0,     0,   480,   197,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   195,   196,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   199,   200,     0,
       0,     0,   197,     0,   493,     0,     0,     0,     0,   220,
       0,     0,   221,   222,     0,   198,   201,   202,   203,   204,
       0,   205,   195,   196,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,     0,   199,   200,   197,     0,     0,   498,
       0,     0,     0,   220,     0,     0,   221,   222,     0,   198,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   199,   200,
       0,     0,     0,     0,     0,   197,     0,     0,   499,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   195,   196,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   199,   200,     0,
       0,     0,   197,     0,     0,   500,     0,     0,     0,   220,
       0,     0,   221,   222,     0,   198,   201,   202,   203,   204,
       0,   205,   195,   196,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,     0,   199,   200,   197,     0,     0,   501,
       0,     0,     0,   220,     0,     0,   221,   222,     0,   198,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   199,   200,
       0,     0,     0,     0,     0,   197,     0,     0,   504,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   195,   196,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   199,   200,     0,
       0,     0,   197,     0,     0,   505,     0,     0,     0,   220,
       0,     0,   221,   222,     0,   198,   201,   202,   203,   204,
       0,   205,   195,   196,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,     0,   199,   200,   197,     0,     0,   506,
       0,     0,     0,   220,     0,     0,   221,   222,     0,   198,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,   195,   196,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   199,   200,
       0,     0,     0,     0,     0,   197,     0,     0,   507,     0,
       0,     0,   220,     0,     0,   221,   222,     0,   198,     0,
       0,     0,   201,   202,   203,   204,     0,   205,   195,   196,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,   199,   200,     0,
       0,     0,   197,     0,     0,   508,     0,     0,     0,   220,
       0,     0,   221,   222,     0,   198,   201,   202,   203,   204,
       0,   205,   195,   196,   206,   207,   208,   209,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,     0,     0,     0,   199,   200,   197,     0,     0,   509,
       0,     0,     0,   220,     0,     0,   221,   222,     0,   198,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,     0,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   199,   200,
       0,     0,     0,     0,     0,   518,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,     0,     0,
       0,     0,   201,   202,   203,   204,     0,   205,     0,     0,
     206,   207,   208,   209,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,     0,     0,     0,     0,     0,
       0,     0,   519,     0,   195,   196,     0,     0,     0,   220,
       0,     0,   221,   222,     0,     0,   201,   202,   203,   204,
       0,   205,     0,     0,   206,   207,   208,   209,   197,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,     0,
       0,   198,     0,     0,     0,     0,     0,     0,   523,   195,
     196,     0,     0,   220,     0,     0,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   200,     0,   197,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   199,   200,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   199,   200,     0,     0,     0,     0,     0,   197,     0,
       0,   525,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,   201,   202,   203,   204,     0,   205,   195,
     196,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,     0,     0,     0,     0,
     199,   200,   530,   197,     0,     0,     0,     0,     0,     0,
     220,     0,     0,   221,   222,     0,   198,     0,     0,   201,
     202,   203,   204,     0,   205,   195,   196,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,   199,   200,     0,   532,   197,
       0,     0,     0,     0,     0,     0,   220,     0,     0,   221,
     222,     0,   198,     0,     0,     0,     0,     0,   201,   202,
     203,   204,     0,   205,   195,   196,   206,   207,   208,   209,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   199,   200,     0,     0,     0,     0,   536,   197,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,   201,   202,   203,   204,     0,   205,   195,
     196,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,     0,     0,     0,     0,
     199,   200,   538,   197,     0,     0,     0,     0,     0,     0,
     220,     0,     0,   221,   222,     0,   198,     0,     0,   201,
     202,   203,   204,     0,   205,   195,   196,   206,   207,   208,
     209,     0,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,   199,   200,     0,     0,   197,
       0,     0,   539,     0,     0,     0,   220,     0,     0,   221,
     222,     0,   198,     0,     0,     0,     0,     0,   201,   202,
     203,   204,     0,   205,     0,     0,   206,   207,   208,   209,
     195,   196,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   199,   200,     0,     0,     0,     0,     0,   545,     0,
       0,     0,     0,     0,   197,   220,     0,     0,   221,   222,
       0,     0,     0,   201,   202,   203,   204,   198,   205,     0,
       0,   206,   207,   208,   209,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,     0,     0,     0,     0,
       0,     0,     0,   546,     0,     0,   199,   200,     0,     0,
     220,     0,     0,   221,   222,     0,     0,     0,     0,   201,
     202,   203,   204,     0,   205,     0,     0,   206,   207,   208,
     209,   195,   196,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     0,     0,     0,     0,     0,     0,   549,     0,
       0,     0,     0,     0,     0,   197,   220,     0,     0,   221,
     222,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     195,   196,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   199,   200,     0,
       0,     0,     0,   550,   197,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,   198,     0,     0,
       0,     0,     0,     0,   195,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,   200,   197,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,   201,   202,   203,   204,     0,
     205,     0,     0,   206,   207,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
     199,   200,     0,     0,     0,   569,     0,     0,     0,     0,
       0,     0,   220,     0,     0,   221,   222,     0,     0,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     195,   196,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,     0,     0,     0,
     597,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,   198,   201,   202,
     203,   204,     0,  -138,   195,   196,  -138,  -138,  -138,  -138,
       0,     0,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,     0,     0,     0,     0,     0,   199,   200,   197,     0,
       0,  -138,     0,     0,     0,   220,     0,     0,   221,   222,
       0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   200,     0,     0,     0,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
     195,   196,   206,   207,   208,   209,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   199,   200,     0,
       0,     0,     0,     0,   197,     0,   195,   196,     0,     0,
       0,   220,     0,     0,   221,   222,     0,   198,   201,   202,
     203,   204,     0,   205,     0,     0,     0,   207,   208,   209,
     197,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     0,     0,   198,     0,     0,   199,   200,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,   221,   222,
       0,     0,     0,     0,     0,   201,   202,   203,   204,     0,
     205,     0,   199,   200,     0,   208,   209,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   196,   220,     0,     0,   221,   222,     0,     0,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
       0,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,   214,   215,   216,   217,   218,   198,     0,     0,
     201,   202,   203,   204,     0,   205,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222,     0,     0,     0,     0,
     216,   217,   218,     0,     0,     0,   199,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,     0,     0,
     221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,   203,   204,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,     0,     0,   221,   222
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-175))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       9,     4,    10,     7,     7,    23,    23,    41,     9,    10,
      11,     4,     0,     4,     7,    24,     7,    23,   192,   193,
       4,    27,   168,     7,     4,     4,    33,     7,     7,     4,
       4,     4,     7,     7,     7,   181,   182,   183,   184,   185,
       4,     4,     4,     7,     7,     7,     4,    81,     4,     7,
       4,     7,     5,     7,     9,    10,    11,     5,   191,   189,
     194,   197,   191,   191,   191,    71,    72,    74,   191,    75,
     191,    77,    78,   191,   191,   191,   191,   191,     5,    88,
     191,   191,   191,    89,   196,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   191,   191,   104,   105,
     191,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   191,   191,   120,   121,   122,   123,   124,   191,
     191,   191,   129,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   143,   191,   191,   191,   144,   145,
     191,   147,     7,     7,   192,   151,   147,   193,   154,   199,
     199,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   199,
     199,   194,    12,   193,   180,     6,     6,   193,   193,   197,
     197,   190,   193,   193,     7,   197,     6,   191,   191,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   192,   220,   221,   222,   225,   191,     3,
       4,   193,     6,     7,     8,    29,    30,   197,   194,     8,
     197,   192,    29,    30,   194,   192,    12,   196,   189,   225,
     192,   170,    -1,    -1,    -1,    -1,   196,   196,    32,   196,
     196,   196,   196,   196,   196,   196,   196,   196,    42,   196,
     196,   196,   196,   191,   196,   196,   192,   276,   274,   192,
     192,    21,   192,   192,   280,   281,   282,   283,    28,   285,
     286,   287,   288,   289,   290,   196,   196,   196,    72,    73,
      74,   196,   192,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   192,   310,   311,   192,   192,   196,   193,
     192,   192,   192,   196,    98,   191,    -1,   196,   195,   197,
     104,   105,   196,   196,   196,   331,   196,   196,   196,   196,
     196,   188,   193,   196,   196,    85,   196,   343,   188,    -1,
     196,   196,   196,   196,   196,   196,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   192,   168,   372,   192,    -1,    -1,   153,
      -1,   168,    -1,   157,    -1,    -1,    -1,   181,   182,   183,
     184,   185,    -1,   167,   181,   182,   183,   184,   185,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,   182,    -1,
      -1,    -1,    -1,   200,    -1,    -1,    -1,   191,   417,   418,
      -1,    -1,    -1,    -1,   198,    -1,   422,   201,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,    -1,   442,    -1,   442,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   455,   197,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   478,    -1,    -1,    -1,    -1,    21,    -1,   488,
      -1,    -1,    -1,   489,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,   518,   519,    -1,    -1,    -1,    -1,    -1,   528,
      -1,    -1,    -1,   529,    -1,   531,    -1,    -1,    -1,   535,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   572,   573,   574,    -1,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,    -1,    -1,    -1,    -1,    -1,   592,   593,    -1,    -1,
     597,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   612,   613,    -1,   615,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    -1,    22,    -1,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,   181,   182,    35,
      -1,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,   148,   149,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,   163,   164,   165,
     166,   167,   168,    -1,    -1,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,   191,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    29,    30,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    66,   188,   189,    -1,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    95,    96,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
     203,   204,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    29,    30,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    66,    -1,   189,   190,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    95,    96,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
     203,   204,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,    -1,    -1,   153,
      72,    73,    74,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,     3,     4,   167,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,   182,    -1,
      -1,    -1,   104,   105,    -1,   189,    -1,   191,    -1,    -1,
      32,    -1,   196,    -1,    -1,    -1,    -1,   201,   202,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,     3,     4,    -1,     6,
       7,     8,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     182,    -1,   104,   105,    -1,    32,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,    42,   198,    -1,    -1,   201,
     202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,     3,     4,    -1,     6,
       7,     8,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,
     182,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,   201,
     202,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,     3,     4,    -1,     6,     7,     8,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   182,    -1,   104,   105,    -1,
      -1,    32,    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,
     197,    42,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    23,    -1,    -1,
     157,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,   104,   105,   182,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,   201,   202,    -1,    29,    30,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    95,
      96,    53,   153,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
     201,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,   192,    53,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    29,    30,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
     196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      66,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    95,
      96,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,
     166,    -1,   168,    -1,    -1,   171,   172,   173,   174,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,
      -1,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    53,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,   192,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,    -1,   168,    29,    30,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    95,    96,    -1,    -1,    -1,    -1,
     192,    53,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    66,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    -1,    -1,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    95,    96,    -1,    -1,   192,    -1,    -1,
      -1,    29,    30,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    -1,    -1,
     171,   172,   173,   174,    -1,    53,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    -1,    66,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      29,    30,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,    -1,   168,    95,    96,   171,
     172,   173,   174,    -1,    53,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,    66,    -1,    -1,
     192,    -1,    -1,    -1,    29,    30,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      95,    96,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      29,    30,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    95,    96,    -1,
      -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    66,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,   188,    -1,    -1,    95,    96,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      95,    96,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      29,    30,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    95,    96,    -1,
      -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    66,   163,   164,
     165,   166,    -1,   168,    -1,    -1,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,    -1,    -1,    95,    96,   193,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,    -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      29,    30,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    95,    96,    -1,
      -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      95,    96,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      -1,    -1,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    95,    96,    -1,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,    -1,    -1,    -1,   192,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      95,    96,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    95,    96,    -1,    -1,    -1,    -1,   192,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    -1,    -1,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      95,    96,    -1,    -1,   192,    -1,    -1,    -1,    29,    30,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    -1,   163,
     164,   165,   166,    -1,   168,    -1,    -1,   171,   172,   173,
     174,    -1,    53,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,    66,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   200,    29,    30,   203,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    95,    96,   171,   172,   173,   174,
      -1,    53,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,    66,    -1,    -1,   192,    -1,    -1,
      -1,    29,    30,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    29,    30,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    95,    96,    -1,
      -1,   192,    53,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    66,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,    -1,   168,    -1,    -1,   171,
     172,   173,   174,    -1,    -1,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    95,    96,    -1,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,   203,   204,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,    -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    29,    30,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    95,    96,    -1,
      -1,   192,    53,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    95,    96,
      -1,    -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    29,    30,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    95,    96,    -1,
      -1,    -1,    53,    -1,   195,    -1,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    66,   163,   164,   165,   166,
      -1,   168,    29,    30,   171,   172,   173,   174,    -1,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,    -1,    -1,    95,    96,    53,    -1,    -1,   196,
      -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    95,    96,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,   196,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    29,    30,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    95,    96,    -1,
      -1,    -1,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    66,   163,   164,   165,   166,
      -1,   168,    29,    30,   171,   172,   173,   174,    -1,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,    -1,    -1,    95,    96,    53,    -1,    -1,   196,
      -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    95,    96,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,   196,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    29,    30,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    95,    96,    -1,
      -1,    -1,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    66,   163,   164,   165,   166,
      -1,   168,    29,    30,   171,   172,   173,   174,    -1,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,    -1,    -1,    95,    96,    53,    -1,    -1,   196,
      -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    29,    30,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    95,    96,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,   196,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    29,    30,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    95,    96,    -1,
      -1,    -1,    53,    -1,    -1,   196,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    66,   163,   164,   165,   166,
      -1,   168,    29,    30,   171,   172,   173,   174,    -1,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,    -1,    -1,    95,    96,    53,    -1,    -1,   196,
      -1,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    -1,    -1,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    95,    96,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    -1,    -1,
      -1,    -1,   163,   164,   165,   166,    -1,   168,    -1,    -1,
     171,   172,   173,   174,    -1,    -1,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    29,    30,    -1,    -1,    -1,   200,
      -1,    -1,   203,   204,    -1,    -1,   163,   164,   165,   166,
      -1,   168,    -1,    -1,   171,   172,   173,   174,    53,    -1,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,   195,    29,
      30,    -1,    -1,   200,    -1,    -1,   203,   204,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    95,    96,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,   163,   164,   165,   166,    -1,   168,    29,
      30,   171,   172,   173,   174,    -1,    -1,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,    -1,    -1,
      95,    96,   192,    53,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,   203,   204,    -1,    66,    -1,    -1,   163,
     164,   165,   166,    -1,   168,    29,    30,   171,   172,   173,
     174,    -1,    -1,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,    95,    96,    -1,   192,    53,
      -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,
     204,    -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    95,    96,    -1,    -1,    -1,    -1,   192,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,   163,   164,   165,   166,    -1,   168,    29,
      30,   171,   172,   173,   174,    -1,    -1,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,    -1,    -1,
      95,    96,   192,    53,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,   203,   204,    -1,    66,    -1,    -1,   163,
     164,   165,   166,    -1,   168,    29,    30,   171,   172,   173,
     174,    -1,    -1,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,    95,    96,    -1,    -1,    53,
      -1,    -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,
     204,    -1,    66,    -1,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,    -1,   168,    -1,    -1,   171,   172,   173,   174,
      29,    30,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    95,    96,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    53,   200,    -1,    -1,   203,   204,
      -1,    -1,    -1,   163,   164,   165,   166,    66,   168,    -1,
      -1,   171,   172,   173,   174,    -1,    -1,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,    -1,    95,    96,    -1,    -1,
     200,    -1,    -1,   203,   204,    -1,    -1,    -1,    -1,   163,
     164,   165,   166,    -1,   168,    -1,    -1,   171,   172,   173,
     174,    29,    30,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    53,   200,    -1,    -1,   203,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      29,    30,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    95,    96,    -1,
      -1,    -1,    -1,   192,    53,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    -1,    -1,   171,   172,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      95,    96,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      29,    30,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    66,   163,   164,
     165,   166,    -1,   168,    29,    30,   171,   172,   173,   174,
      -1,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,    -1,    -1,    95,    96,    53,    -1,
      -1,   196,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      29,    30,   171,   172,   173,   174,    -1,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    95,    96,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    29,    30,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    66,   163,   164,
     165,   166,    -1,   168,    -1,    -1,    -1,   172,   173,   174,
      53,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    66,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,
     168,    -1,    95,    96,    -1,   173,   174,    -1,    -1,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,   200,    -1,    -1,   203,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,   182,   183,   184,   185,    66,    -1,    -1,
     163,   164,   165,   166,    -1,   168,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204,    -1,    -1,    -1,    -1,
     183,   184,   185,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
     203,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,    -1,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,   204
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   206,   207,     0,    41,    81,   209,     5,     5,   213,
     191,   189,     3,     4,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    19,    20,    22,    24,    25,    26,
      27,    31,    32,    35,    37,    38,    39,    42,    66,    97,
      98,    99,   104,   105,   106,   107,   108,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   148,   149,   153,   157,   160,   161,
     162,   167,   182,   188,   189,   191,   196,   201,   202,   208,
     214,   216,   147,   208,   210,   211,   212,   214,   215,    21,
      28,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    85,   181,   182,   197,    21,    28,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    85,   181,   182,
     197,   194,   191,   191,   191,     4,     7,     8,   216,    35,
     214,   191,     4,     7,   216,     4,     7,     4,     7,     4,
       7,   191,   191,   215,   191,   191,   191,   191,   197,   196,
       5,   191,   191,   191,   191,     4,     7,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,     7,   191,     4,     7,
     191,     4,     7,   191,   191,   191,   191,   216,   216,   190,
     215,   216,   216,   216,     7,    29,    30,    53,    66,    95,
      96,   163,   164,   165,   166,   168,   171,   172,   173,   174,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   196,
     200,   203,   204,     7,   192,   193,   190,   214,   216,     4,
       7,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   199,   199,    72,    73,    74,   198,   216,   216,
       4,     7,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   199,   199,    72,    73,    74,   198,   216,
     216,   216,   216,   216,   194,   196,   215,    12,     4,     7,
      23,   197,    23,   197,    23,   193,   193,   193,   193,   193,
     193,     6,     6,    36,   216,   216,     7,   216,   168,   181,
     182,   183,   184,   185,   216,     4,     7,     4,     7,   216,
     197,   197,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
       6,   194,     8,     4,   216,     4,     7,   192,   192,   192,
     192,   190,   192,   197,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   194,   189,   212,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   195,   192,   192,   192,
     216,    36,   191,   192,   192,   216,   216,   216,   216,     4,
       7,   216,   216,   216,   216,   216,   216,   192,   192,   192,
     192,   192,   193,   192,   196,   196,   196,   196,   196,   196,
     192,   192,   192,   192,   192,   192,   216,   216,   188,   192,
     192,   193,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   216,   193,   192,
     192,   192,   192,   196,   196,   196,   216,   195,   215,   197,
     214,   214,   196,   195,    12,   216,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   208,   216,   196,   214,   193,   193,
     188,   216,   196,   195,   216,   196,   190,   216,   170,   191,
     192,   193,   192,   216,   216,   188,   192,   196,   192,   196,
     214,   216,   196,   216,   196,   193,   193,   216,   196,   192,
     192,    29,    30,   168,   181,   182,   183,   184,   185,   200,
      29,    30,   168,   181,   182,   183,   184,   185,   200,   193,
     196,   196,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
       4,     7,    66,   182,   214,   214,   214,   189,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   192,   192,   216,   215,   214,   214,   190
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
#line 259 "./sintactico.y"
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
#line 269 "./sintactico.y"
    {
			push_l_funcion(&idFunciones, (yyvsp[(3) - (6)].nameFunction), (yyvsp[(5) - (6)].nPtr));
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 272 "./sintactico.y"
    {;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 276 "./sintactico.y"
    { 
		(yyval.type_int) = INT;
		argsInFunction++; 
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 280 "./sintactico.y"
    {
		(yyval.type_int) = DECIMAL;
		argsInFunction++;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 284 "./sintactico.y"
    {
		(yyval.type_int) = BOOL;
		argsInFunction++;
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 291 "./sintactico.y"
    {
		printf("function declaration: %s-%d\n", (yyvsp[(2) - (8)].nameFunction), argsInFunction);
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 294 "./sintactico.y"
    {;}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 300 "./sintactico.y"
    {;
		/* Con esto hacemos que la función pueda interpretarse así:
		function $algo$() {stmt_list}		*/
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 312 "./sintactico.y"
    { 
			printf("El tipo fue... %d, para el ID = '%s'\n", (yyvsp[(1) - (2)].type_int), (yyvsp[(2) - (2)].identificador));
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 320 "./sintactico.y"
    { 
		ex((yyvsp[(2) - (2)].nPtr));			/* Ejecutar los nodos */ 
		freeNode((yyvsp[(2) - (2)].nPtr)); 	/* Liberar los nodos */
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 328 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 329 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 330 "./sintactico.y"
    { printf("Array detected...\n"); (yyval.nPtr) = NULL;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 331 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 332 "./sintactico.y"
    { (yyval.nPtr) = opr(PRINTN, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 333 "./sintactico.y"
    { (yyval.nPtr) = opr(RAND, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 334 "./sintactico.y"
    { (yyval.nPtr) = opr(READ, 1, id((yyvsp[(3) - (5)].sIndex))); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 335 "./sintactico.y"
    { (yyval.nPtr) = opr(_READ_, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 336 "./sintactico.y"
    { (yyval.nPtr) = opr(PUTS, 1, conStr((yyvsp[(3) - (5)].cadena), typeCadena)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 337 "./sintactico.y"
    { (yyval.nPtr) = opr(BREAK, 0); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 338 "./sintactico.y"
    { (yyval.nPtr) = opr(EXIT, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 339 "./sintactico.y"
    { (yyval.nPtr) = opr(PRASCII, 1, (yyvsp[(3) - (5)].nPtr)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 340 "./sintactico.y"
    { (yyval.nPtr) = opr(CLEAR_STACK, 0); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 341 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VARS, 0); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 342 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VARS, 0); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 343 "./sintactico.y"
    { 
		 			(yyval.nPtr) = opr(INITIALIZE_IDENTIFIER, 2, idWithType((yyvsp[(2) - (5)].identificador), (yyvsp[(1) - (5)].type_int)), (yyvsp[(4) - (5)].nPtr)); 
										}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 346 "./sintactico.y"
    { 
							/* Buscar si ya está definida la variable, sino hay que
								crearla con el valor de la expresión.
							Sino hay que sobreescribir con el valor de dicha expresión */
							(yyval.nPtr) = opr('=', 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); 
										}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 352 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGNACION_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 353 "./sintactico.y"
    { 
			(yyval.nPtr) = opr(ARRAY_SIMPLE_ASIGN, 3, idArray((yyvsp[(1) - (7)].idArray)), (yyvsp[(3) - (7)].nPtr), (yyvsp[(6) - (7)].nPtr)); 
	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 356 "./sintactico.y"
    { (yyval.nPtr) = opr(INITRAND, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 357 "./sintactico.y"
    { (yyval.nPtr) = opr(_INITRAND_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 358 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_HAPPY, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 359 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_SAD, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 360 "./sintactico.y"
    { (yyval.nPtr) = opr(FACE_NO, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 362 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_HAPPY_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 363 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_SAD_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 364 "./sintactico.y"
    { (yyval.nPtr) = opr(_FACE_NO_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 365 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_ADD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 366 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SUB, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 367 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MUL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 368 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_DIV, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 369 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_MOD, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 370 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_POW, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 371 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTLEFT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 372 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_SHIFTRIGHT, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 373 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_AND, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 374 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGN_OR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 375 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIGNACION_PASCAL, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 377 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_ADD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 378 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SUB_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 379 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MUL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 380 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_DIV_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 381 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_MOD_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 382 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTLEFT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 383 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_SHIFTRIGHT_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 384 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_AND_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 385 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_OR_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 386 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_PASCAL_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 387 "./sintactico.y"
    { (yyval.nPtr) = opr(_ASIGN_POW_, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 388 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 389 "./sintactico.y"
    { (yyval.nPtr) = opr(LETSET, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 391 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 392 "./sintactico.y"
    { (yyval.nPtr) = opr(_LETSET_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 393 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVE, 2, (yyvsp[(2) - (5)].nPtr), id((yyvsp[(4) - (5)].sIndex))); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 395 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVE_, 2, (yyvsp[(2) - (5)].nPtr), idS((yyvsp[(4) - (5)].identificador))); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 396 "./sintactico.y"
    { (yyval.nPtr) = opr(MOVASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 397 "./sintactico.y"
    { (yyval.nPtr) = opr(ADDASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 398 "./sintactico.y"
    { (yyval.nPtr) = opr(SUBASM, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 400 "./sintactico.y"
    { (yyval.nPtr) = opr(_MOVASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 401 "./sintactico.y"
    { (yyval.nPtr) = opr(_ADDASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 402 "./sintactico.y"
    { (yyval.nPtr) = opr(_SUBASM_, 2, idS((yyvsp[(2) - (5)].identificador)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 403 "./sintactico.y"
    { (yyval.nPtr) = opr(SWAP, 2, id((yyvsp[(1) - (4)].sIndex)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 404 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_, 2, idS((yyvsp[(1) - (4)].identificador)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 406 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_ID_VAR_, 2, idS((yyvsp[(1) - (4)].identificador)), id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 407 "./sintactico.y"
    { (yyval.nPtr) = opr(_SWAP_VAR_ID_, 2, id((yyvsp[(1) - (4)].sIndex)), idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 408 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_ADD, 0); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 409 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_SUB, 0); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 410 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_MUL, 0); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 411 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_DIV, 0); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 412 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 413 "./sintactico.y"
    { (yyval.nPtr) = opr(OPVAR_POW, 0); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 414 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 415 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR, 1, id((yyvsp[(1) - (4)].sIndex))); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 417 "./sintactico.y"
    { (yyval.nPtr) = opr(_INCR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 418 "./sintactico.y"
    { (yyval.nPtr) = opr(_DECR_, 1, idS((yyvsp[(1) - (4)].identificador))); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 419 "./sintactico.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 421 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 422 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS, 5, id((yyvsp[(2) - (12)].sIndex)), (yyvsp[(4) - (12)].nPtr), (yyvsp[(6) - (12)].nPtr), (yyvsp[(9) - (12)].nPtr), (yyvsp[(11) - (12)].nPtr)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 423 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 424 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 425 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 426 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 427 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 428 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 429 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT, 5, id((yyvsp[(2) - (10)].sIndex)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 430 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH, 4, (yyvsp[(3) - (11)].nPtr), (yyvsp[(7) - (11)].nPtr), id((yyvsp[(9) - (11)].sIndex)), (yyvsp[(11) - (11)].nPtr)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 432 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MENOS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 433 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MAS_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 434 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MUL_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 435 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_DIV_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 436 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 437 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_POW_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 438 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_MOD_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 439 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTLEFTF_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 440 "./sintactico.y"
    { (yyval.nPtr) = opr(FOR_SHIFTRIGHT_ID, 5, idS((yyvsp[(2) - (10)].identificador)), (yyvsp[(4) - (10)].nPtr), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr), (yyvsp[(10) - (10)].nPtr)); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 441 "./sintactico.y"
    { (yyval.nPtr) = opr(FOREACH_ID, 4, (yyvsp[(3) - (11)].nPtr), (yyvsp[(7) - (11)].nPtr), idS((yyvsp[(9) - (11)].identificador)), (yyvsp[(11) - (11)].nPtr)); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 442 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 443 "./sintactico.y"
    { (yyval.nPtr) = opr(UNLESS, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 444 "./sintactico.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 445 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 446 "./sintactico.y"
    { (yyval.nPtr) = NULL; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 447 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 448 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(2) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 449 "./sintactico.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(3) - (9)].nPtr), (yyvsp[(7) - (9)].nPtr)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 451 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_ID, 2, idS((yyvsp[(1) - (4)].identificador)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 452 "./sintactico.y"
    { (yyval.nPtr) = opr(CONCATENATE_DIGITS_VAR, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 453 "./sintactico.y"
    { (yyval.nPtr) = opr(SYSTEM, 1, conStr((yyvsp[(3) - (5)].cadena), typeSystem)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 454 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE, 1, idS((yyvsp[(3) - (5)].identificador))); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 455 "./sintactico.y"
    { (yyval.nPtr) = opr(DECLARE_AND_ASSIGN, 2, idS((yyvsp[(3) - (7)].identificador)), (yyvsp[(5) - (7)].nPtr)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 456 "./sintactico.y"
    {	
			/* Declaración de un array */
			(yyval.nPtr) = opr(DECLARE_ARRAY, 2, idArray((yyvsp[(3) - (7)].idArray)), (yyvsp[(5) - (7)].nPtr)); 
	}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 460 "./sintactico.y"
    {
		/*printf("Tipo para esta shit %d\n", $5);*/
		(yyval.nPtr) = NULL;
	}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 467 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 468 "./sintactico.y"
    { (yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 472 "./sintactico.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].iValue)); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 473 "./sintactico.y"
    { 
		
		(yyval.nPtr) = idS((yyvsp[(1) - (1)].identificador)); 
		if(!buscar(identificadores, (yyvsp[(1) - (1)].identificador))) {
			fprintf(stdout, "Error, variable '%s' no declarada\n", (yyvsp[(1) - (1)].identificador));
		}		

	 }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 481 "./sintactico.y"
    { (yyval.nPtr) = conStr((yyvsp[(1) - (1)].cadena), typeCadena); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 482 "./sintactico.y"
    { (yyval.nPtr) = opr(ARRAY_POS, 2, idArray((yyvsp[(1) - (4)].idArray)), (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 483 "./sintactico.y"
    { (yyval.nPtr) = opr(PAR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 484 "./sintactico.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex)); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 485 "./sintactico.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 486 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 487 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 488 "./sintactico.y"
    { (yyval.nPtr) = opr(NEGACION, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 489 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 490 "./sintactico.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 491 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 492 "./sintactico.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 493 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 494 "./sintactico.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 495 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 496 "./sintactico.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 497 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 498 "./sintactico.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 499 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 500 "./sintactico.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 501 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 502 "./sintactico.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 503 "./sintactico.y"
    { (yyval.nPtr) = opr('%', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 504 "./sintactico.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 505 "./sintactico.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 506 "./sintactico.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 507 "./sintactico.y"
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 508 "./sintactico.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 509 "./sintactico.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 510 "./sintactico.y"
    { (yyval.nPtr) = opr(ANDBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 511 "./sintactico.y"
    { (yyval.nPtr) = opr(ORBITS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 512 "./sintactico.y"
    { (yyval.nPtr) = opr(XOROP, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 513 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTLEFT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 514 "./sintactico.y"
    { (yyval.nPtr) = opr(SHIFTRIGHT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 515 "./sintactico.y"
    { (yyval.nPtr) = opr(STRLEN, 1, conStr((yyvsp[(3) - (4)].cadena), typeStrlen)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 516 "./sintactico.y"
    { (yyval.nPtr) = opr(ABS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 517 "./sintactico.y"
    { (yyval.nPtr) = opr(FACTORIAL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 518 "./sintactico.y"
    { (yyval.nPtr) = opr(SUMATORIA, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 519 "./sintactico.y"
    { (yyval.nPtr) = opr(SQRT, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 520 "./sintactico.y"
    { (yyval.nPtr) = opr(ACOS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 521 "./sintactico.y"
    { (yyval.nPtr) = opr(ASIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 522 "./sintactico.y"
    { (yyval.nPtr) = opr(ATAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 523 "./sintactico.y"
    { (yyval.nPtr) = opr(CEIL, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 524 "./sintactico.y"
    { (yyval.nPtr) = opr(COS, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 525 "./sintactico.y"
    { (yyval.nPtr) = opr(COSH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 526 "./sintactico.y"
    { (yyval.nPtr) = opr(EXP, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 527 "./sintactico.y"
    { (yyval.nPtr) = opr(LN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 528 "./sintactico.y"
    { (yyval.nPtr) = opr(FLOOR, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 529 "./sintactico.y"
    { (yyval.nPtr) = opr(SIN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 530 "./sintactico.y"
    { (yyval.nPtr) = opr(SINH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 531 "./sintactico.y"
    { (yyval.nPtr) = opr(TAN, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 532 "./sintactico.y"
    { (yyval.nPtr) = opr(TANH, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 533 "./sintactico.y"
    { (yyval.nPtr) = opr(CALL, 0); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 534 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 535 "./sintactico.y"
    { (yyval.nPtr) = opr(INCR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 536 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 537 "./sintactico.y"
    { (yyval.nPtr) = opr(DECR_FUNC_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 538 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 539 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_VAR, 1, id((yyvsp[(2) - (2)].sIndex))); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 540 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_CONST, 1, (yyvsp[(3) - (4)].nPtr)); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 541 "./sintactico.y"
    { (yyval.nPtr) = opr(PUSH_ID, 1, idS((yyvsp[(2) - (2)].identificador))); }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 542 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(3) - (4)].sIndex))); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 543 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_VAR, 1, id((yyvsp[(2) - (2)].sIndex))); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 544 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(3) - (4)].identificador))); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 545 "./sintactico.y"
    { (yyval.nPtr) = opr(POP_ID, 1, idS((yyvsp[(2) - (2)].identificador))); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 546 "./sintactico.y"
    { (yyval.nPtr) = opr(POP, 0); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 547 "./sintactico.y"
    { (yyval.nPtr) = opr(POP, 0); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 548 "./sintactico.y"
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

  case 202:

/* Line 1806 of yacc.c  */
#line 562 "./sintactico.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;



/* Line 1806 of yacc.c  */
#line 5188 "y.tab.c"
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
#line 564 "./sintactico.y"

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


