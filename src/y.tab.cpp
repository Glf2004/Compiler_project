/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.yacc"

#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(const char *s); 
extern int  yywrap();
}


#line 86 "y.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "y.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_SUB = 4,                        /* SUB  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_LEFT_PARENT = 8,                /* LEFT_PARENT  */
  YYSYMBOL_RIGHT_PARENT = 9,               /* RIGHT_PARENT  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 10,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 11,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_BRACE = 12,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 13,               /* RIGHT_BRACE  */
  YYSYMBOL_GREATER = 14,                   /* GREATER  */
  YYSYMBOL_NOT_LESS_THEN = 15,             /* NOT_LESS_THEN  */
  YYSYMBOL_LESS = 16,                      /* LESS  */
  YYSYMBOL_NOT_GREATER_THEN = 17,          /* NOT_GREATER_THEN  */
  YYSYMBOL_EQUAL = 18,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 19,                 /* NOT_EQUAL  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 21,                     /* COMMA  */
  YYSYMBOL_COLON = 22,                     /* COLON  */
  YYSYMBOL_LET = 23,                       /* LET  */
  YYSYMBOL_POINT = 24,                     /* POINT  */
  YYSYMBOL_RET = 25,                       /* RET  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_FN = 29,                        /* FN  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_BREAK = 33,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 34,                  /* CONTINUE  */
  YYSYMBOL_RIGHT_ARROW = 35,               /* RIGHT_ARROW  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_STRUCT = 37,                    /* STRUCT  */
  YYSYMBOL_NUM = 38,                       /* NUM  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_NEG = 40,                       /* NEG  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Program = 42,                   /* Program  */
  YYSYMBOL_ProgramElementList = 43,        /* ProgramElementList  */
  YYSYMBOL_ProgramElement = 44,            /* ProgramElement  */
  YYSYMBOL_ArithExpr = 45,                 /* ArithExpr  */
  YYSYMBOL_Type = 46,                      /* Type  */
  YYSYMBOL_VarDecl = 47,                   /* VarDecl  */
  YYSYMBOL_VarDef = 48,                    /* VarDef  */
  YYSYMBOL_RightVal = 49,                  /* RightVal  */
  YYSYMBOL_BoolExpr = 50,                  /* BoolExpr  */
  YYSYMBOL_ExprUnit = 51,                  /* ExprUnit  */
  YYSYMBOL_FnCall = 52,                    /* FnCall  */
  YYSYMBOL_IndexExpr = 53,                 /* IndexExpr  */
  YYSYMBOL_ArrayExpr = 54,                 /* ArrayExpr  */
  YYSYMBOL_MemberExpr = 55,                /* MemberExpr  */
  YYSYMBOL_BoolUnit = 56,                  /* BoolUnit  */
  YYSYMBOL_BoolUOp = 57,                   /* BoolUOp  */
  YYSYMBOL_ComExpr = 58,                   /* ComExpr  */
  YYSYMBOL_LeftVal = 59,                   /* LeftVal  */
  YYSYMBOL_AssignStmt = 60,                /* AssignStmt  */
  YYSYMBOL_RightValList = 61,              /* RightValList  */
  YYSYMBOL_VarDefScalar = 62,              /* VarDefScalar  */
  YYSYMBOL_VarDefArray = 63,               /* VarDefArray  */
  YYSYMBOL_VarDeclScalar = 64,             /* VarDeclScalar  */
  YYSYMBOL_VarDeclArray = 65,              /* VarDeclArray  */
  YYSYMBOL_VarDeclStmt = 66,               /* VarDeclStmt  */
  YYSYMBOL_VarDeclList = 67,               /* VarDeclList  */
  YYSYMBOL_StructDef = 68,                 /* StructDef  */
  YYSYMBOL_ParamDecl = 69,                 /* ParamDecl  */
  YYSYMBOL_FnDecl = 70,                    /* FnDecl  */
  YYSYMBOL_FnDef = 71,                     /* FnDef  */
  YYSYMBOL_CodeBlockStmt = 72,             /* CodeBlockStmt  */
  YYSYMBOL_FnDeclStmt = 73,                /* FnDeclStmt  */
  YYSYMBOL_CallStmt = 74,                  /* CallStmt  */
  YYSYMBOL_ReturnStmt = 75,                /* ReturnStmt  */
  YYSYMBOL_CodeBlockStmtList = 76          /* CodeBlockStmtList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   148,   148,   155,   160,   165,   169,   173,   177,   181,
     188,   192,   196,   200,   204,   212,   216,   224,   228,   237,
     241,   249,   257,   261,   267,   280,   284,   288,   292,   296,
     300,   304,   316,   324,   328,   335,   342,   352,   356,   360,
     370,   379,   383,   387,   391,   395,   399,   408,   412,   416,
     424,   431,   435,   439,   446,   453,   460,   467,   477,   481,
     489,   493,   497,   505,   512,   519,   523,   530,   545,   549,
     553,   557,   562,   567,   572,   576,   580,   584,   592,   599,
     606,   609,   618,   622
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "SUB", "MUL",
  "DIV", "SEMICOLON", "LEFT_PARENT", "RIGHT_PARENT", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_BRACE", "RIGHT_BRACE", "GREATER",
  "NOT_LESS_THEN", "LESS", "NOT_GREATER_THEN", "EQUAL", "NOT_EQUAL",
  "ASSIGN", "COMMA", "COLON", "LET", "POINT", "RET", "AND", "OR", "NOT",
  "FN", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RIGHT_ARROW", "INT",
  "STRUCT", "NUM", "ID", "NEG", "$accept", "Program", "ProgramElementList",
  "ProgramElement", "ArithExpr", "Type", "VarDecl", "VarDef", "RightVal",
  "BoolExpr", "ExprUnit", "FnCall", "IndexExpr", "ArrayExpr", "MemberExpr",
  "BoolUnit", "BoolUOp", "ComExpr", "LeftVal", "AssignStmt",
  "RightValList", "VarDefScalar", "VarDefArray", "VarDeclScalar",
  "VarDeclArray", "VarDeclStmt", "VarDeclList", "StructDef", "ParamDecl",
  "FnDecl", "FnDef", "CodeBlockStmt", "FnDeclStmt", "CallStmt",
  "ReturnStmt", "CodeBlockStmtList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-130)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-50)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,  -130,   -29,    -2,    15,    14,  -130,     2,  -130,  -130,
      54,  -130,  -130,     1,    63,    88,  -130,  -130,  -130,  -130,
     108,    98,  -130,  -130,  -130,    79,    91,    57,  -130,  -130,
      92,    92,  -130,    25,   124,   124,   123,   126,   127,   130,
    -130,  -130,    47,  -130,  -130,    79,  -130,  -130,   121,   128,
    -130,  -130,   125,    43,   120,  -130,   134,   131,    13,  -130,
      13,  -130,    32,   122,   139,  -130,  -130,    77,    81,    82,
      30,   135,   136,  -130,  -130,    13,  -130,    51,    13,   110,
    -130,  -130,   129,    13,   112,    57,    92,   117,  -130,  -130,
      94,    13,    13,    13,    13,  -130,    30,  -130,     9,   105,
    -130,   124,   144,    79,    79,   133,   146,  -130,  -130,   145,
     150,  -130,    57,  -130,   147,  -130,  -130,    57,  -130,   102,
     102,  -130,  -130,   105,  -130,   124,   124,    13,    13,    13,
      13,    13,    13,   151,  -130,   148,   149,    13,  -130,  -130,
    -130,   143,   137,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,   138,  -130,  -130,   152,    57,   153,    13,
    -130,    79,   154,   155,  -130,  -130
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     9,     0,     0,     0,     0,     2,     4,     5,     6,
       0,     8,     7,     0,     0,     0,    19,    20,    17,    18,
       0,     0,     1,     3,    78,    83,     0,     0,    58,    59,
      62,    62,    77,     0,     0,     0,     0,     0,    49,     0,
      47,    48,     0,    69,    68,    83,    70,    74,     0,     0,
      15,    16,    56,     0,    61,    64,     0,     0,     0,    81,
       0,    25,    26,    21,     0,    14,    28,    29,    30,     0,
       0,     0,     0,    76,    75,    53,    79,     0,     0,     0,
      82,    67,     0,     0,     0,     0,    62,    65,    63,    31,
       0,     0,     0,     0,     0,    80,     0,    40,     0,     0,
      24,     0,     0,    83,    83,    52,     0,    33,    34,     0,
       0,    36,     0,    54,     0,    56,    60,     0,    27,    10,
      11,    12,    13,    14,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,    53,    32,    35,
      50,    57,     0,    66,    22,    23,    41,    44,    43,    42,
      46,    45,    39,    72,    73,    51,     0,     0,     0,    53,
      57,    83,     0,     0,    55,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,   159,  -130,   -47,   -69,   168,  -130,   -28,   -11,
     -55,   -25,  -130,   -23,   -21,    -7,  -130,  -130,   -19,  -130,
    -129,  -130,  -130,  -130,  -130,    12,   -24,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    63,    52,    54,    15,   105,    98,
      65,    66,   109,    67,    68,   100,   101,   102,    69,    43,
     106,    16,    17,    18,    19,    44,    55,     9,    56,    10,
      11,    45,    12,    46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    80,    40,    89,    41,    64,    42,    57,   155,     1,
      13,    26,     8,    90,    22,    99,   115,    58,   124,     8,
      39,    60,    40,    27,    41,     2,    42,    71,    72,    58,
     162,     3,    59,    60,    58,   125,   126,    20,    96,     4,
      75,   123,   -49,   141,   119,   120,   121,   122,   143,    90,
     110,    61,    62,    84,    21,   113,   -49,    77,    97,   135,
     136,    24,   116,    61,    62,    85,    25,    78,    61,    62,
      28,    79,   146,   147,   148,   149,   150,   151,    39,    39,
      40,    40,    41,    41,    42,    42,    32,   -47,   160,   107,
     108,   -48,    77,    50,   133,    29,    51,    91,    92,    93,
      94,   -47,     2,   118,    33,   -48,    79,    93,    94,    34,
      31,    35,    36,    37,   144,   145,    30,   163,    38,   127,
     128,   129,   130,   131,   132,    91,    92,    93,    94,    49,
      73,    53,    70,    74,    81,    75,    39,    76,    40,    82,
      41,    86,    42,    87,    88,    83,    95,   103,   104,   111,
     114,   112,   117,   134,   137,   138,   139,   140,   142,   157,
     152,   153,   154,   156,   159,   161,    23,   164,   165,   158,
      14
};

static const yytype_uint8 yycheck[] =
{
      25,    45,    25,    58,    25,    33,    25,    31,   137,     7,
      39,    10,     0,    60,     0,    70,    85,     4,     9,     7,
      45,     8,    45,    22,    45,    23,    45,    34,    35,     4,
     159,    29,     7,     8,     4,    26,    27,    39,     8,    37,
       8,    96,    10,   112,    91,    92,    93,    94,   117,    96,
      78,    38,    39,    10,    39,    83,    24,    10,    28,   103,
     104,     7,    86,    38,    39,    22,    12,    20,    38,    39,
       7,    24,   127,   128,   129,   130,   131,   132,   103,   104,
     103,   104,   103,   104,   103,   104,     7,    10,   157,    38,
      39,    10,    10,    36,   101,     7,    39,     3,     4,     5,
       6,    24,    23,     9,    25,    24,    24,     5,     6,    30,
      12,    32,    33,    34,   125,   126,     8,   161,    39,    14,
      15,    16,    17,    18,    19,     3,     4,     5,     6,    38,
       7,    39,     8,     7,    13,     8,   161,     7,   161,    11,
     161,    21,   161,     9,    13,    20,     7,    12,    12,    39,
      38,    22,    35,     9,    21,     9,    11,     7,    11,    22,
       9,    13,    13,    20,    12,    12,     7,    13,    13,    31,
       2
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    23,    29,    37,    42,    43,    44,    66,    68,
      70,    71,    73,    39,    47,    48,    62,    63,    64,    65,
      39,    39,     0,    43,     7,    12,    10,    22,     7,     7,
       8,    12,     7,    25,    30,    32,    33,    34,    39,    52,
      54,    55,    59,    60,    66,    72,    74,    75,    76,    38,
      36,    39,    46,    39,    47,    67,    69,    67,     4,     7,
       8,    38,    39,    45,    49,    51,    52,    54,    55,    59,
       8,    56,    56,     7,     7,     8,     7,    10,    20,    24,
      76,    13,    11,    20,    10,    22,    21,     9,    13,    51,
      45,     3,     4,     5,     6,     7,     8,    28,    50,    51,
      56,    57,    58,    12,    12,    49,    61,    38,    39,    53,
      49,    39,    22,    49,    38,    46,    67,    35,     9,    45,
      45,    45,    45,    51,     9,    26,    27,    14,    15,    16,
      17,    18,    19,    56,     9,    76,    76,    21,     9,    11,
       7,    46,    11,    46,    50,    50,    51,    51,    51,    51,
      51,    51,     9,    13,    13,    61,    20,    22,    31,    12,
      46,    12,    61,    76,    13,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    45,    45,    45,    46,    46,    47,    47,    48,
      48,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    52,    53,    53,    54,    55,    56,    56,    56,
      57,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      60,    61,    61,    61,    62,    63,    64,    65,    66,    66,
      67,    67,    67,    68,    69,    70,    70,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    74,
      75,    75,    76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     3,     1,     1,
       1,     2,     4,     1,     1,     4,     3,     3,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       4,     3,     1,     0,     5,    10,     3,     6,     3,     3,
       3,     1,     0,     5,     1,     5,     7,     4,     1,     1,
       1,     9,     5,     5,     1,     2,     2,     1,     2,     2,
       3,     2,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ProgramElementList  */
#line 149 "parser.yacc"
{  
  root = A_Program((yyvsp[0].programElementList));
  (yyval.program) = A_Program((yyvsp[0].programElementList));
}
#line 1266 "y.tab.cpp"
    break;

  case 3: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 156 "parser.yacc"
{
  (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement), (yyvsp[0].programElementList));
}
#line 1274 "y.tab.cpp"
    break;

  case 4: /* ProgramElementList: %empty  */
#line 160 "parser.yacc"
{
  (yyval.programElementList) = nullptr;
}
#line 1282 "y.tab.cpp"
    break;

  case 5: /* ProgramElement: VarDeclStmt  */
#line 166 "parser.yacc"
{
  (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
}
#line 1290 "y.tab.cpp"
    break;

  case 6: /* ProgramElement: StructDef  */
#line 170 "parser.yacc"
{
  (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
}
#line 1298 "y.tab.cpp"
    break;

  case 7: /* ProgramElement: FnDeclStmt  */
#line 174 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
}
#line 1306 "y.tab.cpp"
    break;

  case 8: /* ProgramElement: FnDef  */
#line 178 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
}
#line 1314 "y.tab.cpp"
    break;

  case 9: /* ProgramElement: SEMICOLON  */
#line 182 "parser.yacc"
{
  (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
}
#line 1322 "y.tab.cpp"
    break;

  case 10: /* ArithExpr: ArithExpr ADD ArithExpr  */
#line 189 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_add, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1330 "y.tab.cpp"
    break;

  case 11: /* ArithExpr: ArithExpr SUB ArithExpr  */
#line 193 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_sub, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1338 "y.tab.cpp"
    break;

  case 12: /* ArithExpr: ArithExpr MUL ArithExpr  */
#line 197 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_mul, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1346 "y.tab.cpp"
    break;

  case 13: /* ArithExpr: ArithExpr DIV ArithExpr  */
#line 201 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_div, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1354 "y.tab.cpp"
    break;

  case 14: /* ArithExpr: ExprUnit  */
#line 205 "parser.yacc"
{
  (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos, (yyvsp[0].exprUnit));
}
#line 1362 "y.tab.cpp"
    break;

  case 15: /* Type: INT  */
#line 212 "parser.yacc"
   {
  (yyval.type) = A_NativeType((yyvsp[0].pos),A_intTypeKind);
}
#line 1370 "y.tab.cpp"
    break;

  case 16: /* Type: ID  */
#line 216 "parser.yacc"
  {
  (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1378 "y.tab.cpp"
    break;

  case 17: /* VarDecl: VarDeclScalar  */
#line 224 "parser.yacc"
             {
  (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].varDeclScalar)->pos,(yyvsp[0].varDeclScalar));
}
#line 1386 "y.tab.cpp"
    break;

  case 18: /* VarDecl: VarDeclArray  */
#line 228 "parser.yacc"
            {
  (yyval.varDecl) = A_VarDecl_Array((yyvsp[0].varDeclArray)->pos,(yyvsp[0].varDeclArray));
}
#line 1394 "y.tab.cpp"
    break;

  case 19: /* VarDef: VarDefScalar  */
#line 237 "parser.yacc"
            {
  (yyval.varDef) = A_VarDef_Scalar((yyvsp[0].varDefScalar)->pos,(yyvsp[0].varDefScalar));
}
#line 1402 "y.tab.cpp"
    break;

  case 20: /* VarDef: VarDefArray  */
#line 241 "parser.yacc"
           {
  (yyval.varDef) = A_VarDef_Array((yyvsp[0].varDefArray)->pos,(yyvsp[0].varDefArray));
}
#line 1410 "y.tab.cpp"
    break;

  case 21: /* RightVal: ArithExpr  */
#line 249 "parser.yacc"
         {
  (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos,(yyvsp[0].arithExpr));
}
#line 1418 "y.tab.cpp"
    break;

  case 22: /* BoolExpr: BoolExpr AND BoolExpr  */
#line 257 "parser.yacc"
                      {
  A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, A_and, (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr));
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, boolBiOpExpr);
}
#line 1427 "y.tab.cpp"
    break;

  case 23: /* BoolExpr: BoolExpr OR BoolExpr  */
#line 262 "parser.yacc"
{
  A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, A_or, (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr));
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, boolBiOpExpr);
}
#line 1436 "y.tab.cpp"
    break;

  case 24: /* BoolExpr: BoolUnit  */
#line 267 "parser.yacc"
        {
  (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos,(yyvsp[0].boolUnit));
}
#line 1444 "y.tab.cpp"
    break;

  case 25: /* ExprUnit: NUM  */
#line 280 "parser.yacc"
   {
  (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1452 "y.tab.cpp"
    break;

  case 26: /* ExprUnit: ID  */
#line 284 "parser.yacc"
  {
  (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1460 "y.tab.cpp"
    break;

  case 27: /* ExprUnit: LEFT_PARENT ArithExpr RIGHT_PARENT  */
#line 288 "parser.yacc"
                                   { 
  (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos),(yyvsp[-1].arithExpr)); 
}
#line 1468 "y.tab.cpp"
    break;

  case 28: /* ExprUnit: FnCall  */
#line 292 "parser.yacc"
      {
  (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos,(yyvsp[0].fnCall));
}
#line 1476 "y.tab.cpp"
    break;

  case 29: /* ExprUnit: ArrayExpr  */
#line 296 "parser.yacc"
         {
  (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1484 "y.tab.cpp"
    break;

  case 30: /* ExprUnit: MemberExpr  */
#line 300 "parser.yacc"
          {
  (yyval.exprUnit) = A_MemberExprUnit((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1492 "y.tab.cpp"
    break;

  case 31: /* ExprUnit: SUB ExprUnit  */
#line 304 "parser.yacc"
                       {
  if ((yyvsp[0].exprUnit)->kind == A_numExprKind) {
    (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].exprUnit)->pos, -((yyvsp[0].exprUnit)->u.num));
  } else {
    A_arithUExpr arithUExpr = A_ArithUExpr((yyvsp[-1].pos), A_neg, (yyvsp[0].exprUnit));
    (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[-1].pos), arithUExpr);
  }
}
#line 1505 "y.tab.cpp"
    break;

  case 32: /* FnCall: ID LEFT_PARENT RightValList RIGHT_PARENT  */
#line 316 "parser.yacc"
                                        {
  (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].rightValList));
}
#line 1513 "y.tab.cpp"
    break;

  case 33: /* IndexExpr: NUM  */
#line 324 "parser.yacc"
   {
  (yyval.indexExpr) = A_NumIndexExpr((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1521 "y.tab.cpp"
    break;

  case 34: /* IndexExpr: ID  */
#line 328 "parser.yacc"
  {
  (yyval.indexExpr) = A_IdIndexExpr((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1529 "y.tab.cpp"
    break;

  case 35: /* ArrayExpr: LeftVal LEFT_SQUARE_BRACKET IndexExpr RIGHT_SQUARE_BRACKET  */
#line 335 "parser.yacc"
                                                          {
  (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].indexExpr));
}
#line 1537 "y.tab.cpp"
    break;

  case 36: /* MemberExpr: LeftVal POINT ID  */
#line 342 "parser.yacc"
                {
  (yyval.memberExpr) = A_MemberExpr((yyvsp[-2].leftVal)->pos,(yyvsp[-2].leftVal),(yyvsp[0].tokenId)->id);
}
#line 1545 "y.tab.cpp"
    break;

  case 37: /* BoolUnit: LEFT_PARENT ComExpr RIGHT_PARENT  */
#line 352 "parser.yacc"
                                {
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-1].comExpr)->pos,(yyvsp[-1].comExpr));
}
#line 1553 "y.tab.cpp"
    break;

  case 38: /* BoolUnit: LEFT_PARENT BoolExpr RIGHT_PARENT  */
#line 356 "parser.yacc"
                                 {
  (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos),(yyvsp[-1].boolExpr));
}
#line 1561 "y.tab.cpp"
    break;

  case 39: /* BoolUnit: LEFT_PARENT BoolUOp BoolUnit RIGHT_PARENT  */
#line 361 "parser.yacc"
{
  A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr((yyvsp[-1].boolUnit)->pos, (yyvsp[-2].boolUOp), (yyvsp[-1].boolUnit));
  (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[-1].boolUnit)->pos, boolUOpExpr);
}
#line 1570 "y.tab.cpp"
    break;

  case 40: /* BoolUOp: NOT  */
#line 371 "parser.yacc"
  {
  (yyval.boolUOp) = A_not;
  }
#line 1578 "y.tab.cpp"
    break;

  case 41: /* ComExpr: ExprUnit GREATER ExprUnit  */
#line 379 "parser.yacc"
                         {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_gt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1586 "y.tab.cpp"
    break;

  case 42: /* ComExpr: ExprUnit NOT_GREATER_THEN ExprUnit  */
#line 383 "parser.yacc"
                                  {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_le,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1594 "y.tab.cpp"
    break;

  case 43: /* ComExpr: ExprUnit LESS ExprUnit  */
#line 387 "parser.yacc"
                      {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_lt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1602 "y.tab.cpp"
    break;

  case 44: /* ComExpr: ExprUnit NOT_LESS_THEN ExprUnit  */
#line 391 "parser.yacc"
                               {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ge,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1610 "y.tab.cpp"
    break;

  case 45: /* ComExpr: ExprUnit NOT_EQUAL ExprUnit  */
#line 395 "parser.yacc"
                           {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ne,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1618 "y.tab.cpp"
    break;

  case 46: /* ComExpr: ExprUnit EQUAL ExprUnit  */
#line 399 "parser.yacc"
                       {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_eq,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1626 "y.tab.cpp"
    break;

  case 47: /* LeftVal: ArrayExpr  */
#line 408 "parser.yacc"
         {
  (yyval.leftVal) = A_ArrExprLVal((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1634 "y.tab.cpp"
    break;

  case 48: /* LeftVal: MemberExpr  */
#line 412 "parser.yacc"
          {
  (yyval.leftVal) = A_MemberExprLVal((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1642 "y.tab.cpp"
    break;

  case 49: /* LeftVal: ID  */
#line 416 "parser.yacc"
  {
  (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1650 "y.tab.cpp"
    break;

  case 50: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 424 "parser.yacc"
                                 {
 (yyval.assignStmt) = A_AssignStmt((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].rightVal));
}
#line 1658 "y.tab.cpp"
    break;

  case 51: /* RightValList: RightVal COMMA RightValList  */
#line 431 "parser.yacc"
                           {
  (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal),(yyvsp[0].rightValList));
}
#line 1666 "y.tab.cpp"
    break;

  case 52: /* RightValList: RightVal  */
#line 435 "parser.yacc"
        {
  (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal),NULL);
}
#line 1674 "y.tab.cpp"
    break;

  case 53: /* RightValList: %empty  */
#line 439 "parser.yacc"
{
  (yyval.rightValList) = NULL;
}
#line 1682 "y.tab.cpp"
    break;

  case 54: /* VarDefScalar: ID COLON Type ASSIGN RightVal  */
#line 446 "parser.yacc"
                             {
  (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-4].tokenId)->pos,(yyvsp[-4].tokenId)->id,(yyvsp[-2].type),(yyvsp[0].rightVal));
}
#line 1690 "y.tab.cpp"
    break;

  case 55: /* VarDefArray: ID LEFT_SQUARE_BRACKET NUM RIGHT_SQUARE_BRACKET COLON Type ASSIGN LEFT_BRACE RightValList RIGHT_BRACE  */
#line 453 "parser.yacc"
                                                                                                     {
  (yyval.varDefArray) = A_VarDefArray((yyvsp[-9].tokenId)->pos,(yyvsp[-9].tokenId)->id,(yyvsp[-7].tokenNum)->num,(yyvsp[-4].type),(yyvsp[-1].rightValList));
}
#line 1698 "y.tab.cpp"
    break;

  case 56: /* VarDeclScalar: ID COLON Type  */
#line 460 "parser.yacc"
             {
  (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,(yyvsp[0].type));
}
#line 1706 "y.tab.cpp"
    break;

  case 57: /* VarDeclArray: ID LEFT_SQUARE_BRACKET NUM RIGHT_SQUARE_BRACKET COLON Type  */
#line 467 "parser.yacc"
                                                          {
  (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-5].tokenId)->pos,(yyvsp[-5].tokenId)->id,(yyvsp[-3].tokenNum)->num,(yyvsp[0].type));
}
#line 1714 "y.tab.cpp"
    break;

  case 58: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 477 "parser.yacc"
                     {
  (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos),(yyvsp[-1].varDecl));
}
#line 1722 "y.tab.cpp"
    break;

  case 59: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 481 "parser.yacc"
                    {
  (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos),(yyvsp[-1].varDef));
}
#line 1730 "y.tab.cpp"
    break;

  case 60: /* VarDeclList: VarDecl COMMA VarDeclList  */
#line 489 "parser.yacc"
                         {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl),(yyvsp[0].varDeclList));
}
#line 1738 "y.tab.cpp"
    break;

  case 61: /* VarDeclList: VarDecl  */
#line 493 "parser.yacc"
       {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl),NULL);
}
#line 1746 "y.tab.cpp"
    break;

  case 62: /* VarDeclList: %empty  */
#line 497 "parser.yacc"
{
  (yyval.varDeclList) = NULL;
}
#line 1754 "y.tab.cpp"
    break;

  case 63: /* StructDef: STRUCT ID LEFT_BRACE VarDeclList RIGHT_BRACE  */
#line 505 "parser.yacc"
                                            {
  (yyval.structDef) = A_StructDef((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].varDeclList));
}
#line 1762 "y.tab.cpp"
    break;

  case 64: /* ParamDecl: VarDeclList  */
#line 512 "parser.yacc"
           {
  (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
}
#line 1770 "y.tab.cpp"
    break;

  case 65: /* FnDecl: FN ID LEFT_PARENT ParamDecl RIGHT_PARENT  */
#line 519 "parser.yacc"
                                        {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].paramDecl),NULL);
}
#line 1778 "y.tab.cpp"
    break;

  case 66: /* FnDecl: FN ID LEFT_PARENT ParamDecl RIGHT_PARENT RIGHT_ARROW Type  */
#line 523 "parser.yacc"
                                                         {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos),(yyvsp[-5].tokenId)->id,(yyvsp[-3].paramDecl),(yyvsp[0].type));
}
#line 1786 "y.tab.cpp"
    break;

  case 67: /* FnDef: FnDecl LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 530 "parser.yacc"
                                               {
  (yyval.fnDef) = A_FnDef((yyvsp[-3].fnDecl)->pos,(yyvsp[-3].fnDecl),(yyvsp[-1].codeBlockStmtList));
}
#line 1794 "y.tab.cpp"
    break;

  case 68: /* CodeBlockStmt: VarDeclStmt  */
#line 545 "parser.yacc"
           {
  (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos,(yyvsp[0].varDeclStmt));
}
#line 1802 "y.tab.cpp"
    break;

  case 69: /* CodeBlockStmt: AssignStmt  */
#line 549 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos,(yyvsp[0].assignStmt));
}
#line 1810 "y.tab.cpp"
    break;

  case 70: /* CodeBlockStmt: CallStmt  */
#line 553 "parser.yacc"
        {
  (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos,(yyvsp[0].callStmt));
}
#line 1818 "y.tab.cpp"
    break;

  case 71: /* CodeBlockStmt: IF BoolUnit LEFT_BRACE CodeBlockStmtList RIGHT_BRACE ELSE LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 557 "parser.yacc"
                                                                                                  {
  A_ifStmt ifStmt = A_IfStmt((yyvsp[-8].pos), (yyvsp[-7].boolUnit), (yyvsp[-5].codeBlockStmtList), (yyvsp[-1].codeBlockStmtList));
  (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[-8].pos), ifStmt);
}
#line 1827 "y.tab.cpp"
    break;

  case 72: /* CodeBlockStmt: IF BoolUnit LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 562 "parser.yacc"
                                                    {
  A_ifStmt ifStmt = A_IfStmt((yyvsp[-4].pos), (yyvsp[-3].boolUnit), (yyvsp[-1].codeBlockStmtList), NULL);
  (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[-4].pos), ifStmt);
}
#line 1836 "y.tab.cpp"
    break;

  case 73: /* CodeBlockStmt: WHILE BoolUnit LEFT_BRACE CodeBlockStmtList RIGHT_BRACE  */
#line 567 "parser.yacc"
                                                       {
  A_whileStmt whileStmt = A_WhileStmt((yyvsp[-4].pos), (yyvsp[-3].boolUnit), (yyvsp[-1].codeBlockStmtList));
  (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[-4].pos), whileStmt);
}
#line 1845 "y.tab.cpp"
    break;

  case 74: /* CodeBlockStmt: ReturnStmt  */
#line 572 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos,(yyvsp[0].returnStmt));
}
#line 1853 "y.tab.cpp"
    break;

  case 75: /* CodeBlockStmt: CONTINUE SEMICOLON  */
#line 576 "parser.yacc"
                  {
  (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
}
#line 1861 "y.tab.cpp"
    break;

  case 76: /* CodeBlockStmt: BREAK SEMICOLON  */
#line 580 "parser.yacc"
               {
  (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
}
#line 1869 "y.tab.cpp"
    break;

  case 77: /* CodeBlockStmt: SEMICOLON  */
#line 584 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
}
#line 1877 "y.tab.cpp"
    break;

  case 78: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 592 "parser.yacc"
                {
  (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos,(yyvsp[-1].fnDecl));
}
#line 1885 "y.tab.cpp"
    break;

  case 79: /* CallStmt: FnCall SEMICOLON  */
#line 599 "parser.yacc"
                {
  (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos,(yyvsp[-1].fnCall));
}
#line 1893 "y.tab.cpp"
    break;

  case 80: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 606 "parser.yacc"
                      {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos),(yyvsp[-1].rightVal));
}
#line 1901 "y.tab.cpp"
    break;

  case 81: /* ReturnStmt: RET SEMICOLON  */
#line 609 "parser.yacc"
               {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos),NULL);
}
#line 1909 "y.tab.cpp"
    break;

  case 82: /* CodeBlockStmtList: CodeBlockStmt CodeBlockStmtList  */
#line 618 "parser.yacc"
                               {
  (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt),(yyvsp[0].codeBlockStmtList));
}
#line 1917 "y.tab.cpp"
    break;

  case 83: /* CodeBlockStmtList: %empty  */
#line 622 "parser.yacc"
{
  (yyval.codeBlockStmtList) = NULL;
}
#line 1925 "y.tab.cpp"
    break;


#line 1929 "y.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 627 "parser.yacc"


extern "C"{
void yyerror(const char * s)
{
  fprintf(stderr, "%s\n",s);
}
int yywrap()
{
  return(1);
}
}


