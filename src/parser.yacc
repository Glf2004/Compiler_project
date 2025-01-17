%{
#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(const char *s); 
extern int  yywrap();
}

%}



%union {
  A_pos pos;
  A_tokenId tokenId;
  A_tokenNum tokenNum;
  A_type type;
  A_program program;
  A_programElementList programElementList;
  A_programElement programElement;
  A_arithExpr arithExpr;
  A_exprUnit exprUnit;
  A_structDef structDef;
  A_varDeclStmt varDeclStmt;
  A_fnDeclStmt fnDeclStmt;
  A_fnDef fnDef;
  //+
  A_boolUOp boolUOp;
  A_rightVal rightVal;
  A_leftVal leftVal;
  A_fnCall fnCall;
  A_arithBiOpExpr arithBiOpExpr;
  A_arithUExpr arithUExpr;
  A_varDecl varDecl;
  A_varDef varDef;
  A_boolExpr boolExpr;
  A_indexExpr indexExpr;
  A_arrayExpr arrayExpr;
  A_memberExpr memberExpr;
  A_boolUnit boolUnit;
  A_boolBiOpExpr boolBiOpExpr;
  A_boolUOpExpr boolUOpExpr;
  A_comExpr comExpr;
  A_assignStmt assignStmt;
  A_rightValList rightValList;
  A_varDefScalar varDefScalar;
  A_varDefArray varDefArray;
  A_varDeclScalar varDeclScalar;
  A_varDeclArray varDeclArray;
  A_varDeclList varDeclList;
  A_paramDecl paramDecl;
  A_fnDecl fnDecl;
  A_codeBlockStmt codeBlockStmt;
  A_callStmt callStmt;
  A_returnStmt returnStmt;
  A_codeBlockStmtList codeBlockStmtList;
}

%token <pos> ADD
%token <pos> SUB
%token <pos> MUL
%token <pos> DIV
%token <pos> SEMICOLON 
%token <pos> LEFT_PARENT 
%token <pos> RIGHT_PARENT 
%token <pos> LEFT_SQUARE_BRACKET 
%token <pos> RIGHT_SQUARE_BRACKET 
%token <pos> LEFT_BRACE 
%token <pos> RIGHT_BRACE
%token <pos> GREATER 
%token <pos> NOT_LESS_THEN 
%token <pos> LESS
%token <pos> NOT_GREATER_THEN 
%token <pos> EQUAL 
%token <pos> NOT_EQUAL 
%token <pos> ASSIGN 
%token <pos> COMMA 
%token <pos> COLON 
%token <pos> LET 
%token <pos> POINT 
%token <pos> RET 
%token <pos> AND 
%token <pos> OR 
%token <pos> NOT 
%token <pos> FN 
%token <pos> IF 
%token <pos> ELSE 
%token <pos> WHILE 
%token <pos> BREAK 
%token <pos> CONTINUE 
%token <pos> RIGHT_ARROW 
%token <pos> INT 
%token <pos> STRUCT 

%token <tokenNum> NUM
%token <tokenId> ID

%type <program> Program
%type <arithExpr> ArithExpr
%type <programElementList> ProgramElementList
%type <programElement> ProgramElement
%type <exprUnit> ExprUnit
%type <structDef> StructDef
%type <varDeclStmt> VarDeclStmt
%type <fnDeclStmt> FnDeclStmt
%type <fnDef> FnDef
%type <type> Type 
%type <varDecl> VarDecl 
%type <varDef> VarDef 
%type <rightVal> RightVal 
%type <boolExpr> BoolExpr 
%type <arithUExpr> ArithUExpr 
%type <fnCall> FnCall 
%type <indexExpr> IndexExpr 
%type <arrayExpr> ArrayExpr 
%type <memberExpr> MemberExpr 
%type <boolUnit> BoolUnit 
%type <boolUOpExpr> BoolUOpExpr 
%type <comExpr> ComExpr 
%type <leftVal> LeftVal 
%type <assignStmt> AssignStmt
%type <rightValList> RightValList
%type <varDefScalar> VarDefScalar
%type <varDefArray> VarDefArray 
%type <varDeclScalar> VarDeclScalar 
%type <varDeclArray> VarDeclArray 
%type <varDeclList> VarDeclList  
%type <paramDecl> ParamDecl 
%type <fnDecl> FnDecl 
%type <codeBlockStmt> CodeBlockStmt 
%type <callStmt> CallStmt 
%type <returnStmt> ReturnStmt 
%type <codeBlockStmtList> CodeBlockStmtList 
%type <boolUOp> BoolUOp

%start Program
%left ADD SUB
%left MUL DIV
%left OR AND

%%                   /* beginning of rules section */
//1
Program: ProgramElementList 
{  
  root = A_Program($1);
  $$ = A_Program($1);
}
;

ProgramElementList: ProgramElement ProgramElementList
{
  $$ = A_ProgramElementList($1, $2);
}
|
{
  $$ = nullptr;
}
;

ProgramElement: VarDeclStmt
{
  $$ = A_ProgramVarDeclStmt($1->pos, $1);
}
| StructDef
{
  $$ = A_ProgramStructDef($1->pos, $1);
}
| FnDeclStmt
{
  $$ = A_ProgramFnDeclStmt($1->pos, $1);
}
| FnDef
{
  $$ = A_ProgramFnDef($1->pos, $1);
}
| SEMICOLON
{
  $$ = A_ProgramNullStmt($1);
}
;


ArithExpr: ArithExpr ADD ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_add, $1, $3));
}
| ArithExpr SUB ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_sub, $1, $3));
}
| ArithExpr MUL ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_mul, $1, $3));
}
| ArithExpr DIV ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_div, $1, $3));
}
| ExprUnit
{
  $$ = A_ExprUnit($1->pos, $1);
}
;
//+++++++++++++++++++++++++++++++++++++
//2
Type:
INT{
  $$ = A_NativeType($1,A_intTypeKind);
}
|
ID{
  $$ = A_StructType($1->pos,$1->id);
};

//3
//A_varDecl A_VarDecl_Scalar(A_pos pos, A_varDeclScalar declScalar);
//A_varDecl A_VarDecl_Array(A_pos pos, A_varDeclArray declArray);
VarDecl:
VarDeclScalar{
  $$ = A_VarDecl_Scalar($1->pos,$1);
}
|
VarDeclArray{
  $$ = A_VarDecl_Array($1->pos,$1);
};


//4
//A_varDef A_VarDef_Scalar(A_pos pos, A_varDefScalar defScalar);
//A_varDef A_VarDef_Array(A_pos pos, A_varDefArray defArray);
VarDef:
VarDefScalar{
  $$ = A_VarDef_Scalar($1->pos,$1);
}
|
VarDefArray{
  $$ = A_VarDef_Array($1->pos,$1);
};

//5
//A_rightVal A_ArithExprRVal(A_pos pos, A_arithExpr arithExpr);
//A_rightVal A_BoolExprRVal(A_pos pos, A_boolExpr boolExpr);
RightVal:
ArithExpr{
  $$ = A_ArithExprRVal($1->pos,$1);
}

//7
//A_boolExpr A_BoolBiOp_Expr(A_pos pos, A_boolBiOpExpr boolBiOpExpr);
//A_boolExpr A_BoolExpr(A_pos pos, A_boolUnit boolUnit);
BoolExpr:
BoolExpr AND BoolExpr {
  A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr($1->pos, A_and, $1, $3);
  $$ = A_BoolBiOp_Expr($1->pos, boolBiOpExpr);
}
| BoolExpr OR BoolExpr
{
  A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr($1->pos, A_or, $1, $3);
  $$ = A_BoolBiOp_Expr($1->pos, boolBiOpExpr);
}
|
BoolUnit{
  $$ = A_BoolExpr($1->pos,$1);
};

//10
//A_exprUnit A_NumExprUnit(A_pos pos, int num);
//A_exprUnit A_IdExprUnit(A_pos pos, char* id);
//A_exprUnit A_ArithExprUnit(A_pos pos, A_arithExpr arithExpr);
//A_exprUnit A_CallExprUnit(A_pos pos, A_fnCall callExpr);
//A_exprUnit A_ArrayExprUnit(A_pos pos, A_arrayExpr arrayExpr);
//A_exprUnit A_MemberExprUnit(A_pos pos, A_memberExpr memberExpr);
//A_exprUnit A_ArithUExprUnit(A_pos pos, A_arithUExpr arithUExpr);
ExprUnit:
NUM{
  $$ = A_NumExprUnit($1->pos,$1->num);
}
|
ID{
  $$ = A_IdExprUnit($1->pos,$1->id);
}
|
LEFT_PARENT ArithExpr RIGHT_PARENT { 
  $$ = A_ArithExprUnit($1,$2); 
}
|
FnCall{
  $$ = A_CallExprUnit($1->pos,$1);
}
|
ArrayExpr{
  $$ = A_ArrayExprUnit($1->pos,$1);
}
|
MemberExpr{
  $$ = A_MemberExprUnit($1->pos,$1);
}
|
SUB ExprUnit %prec NEG {
  if ($2->kind == A_numExprKind) {
    $$ = A_NumExprUnit($2->pos, -($2->u.num));
  } else {
    A_arithUExpr arithUExpr = A_ArithUExpr($1, A_neg, $2);
    $$ = A_ArithUExprUnit($1, arithUExpr);
  }
};

//11
//A_fnCall A_FnCall(A_pos pos, char* fn, A_rightValList vals);
FnCall:
ID LEFT_PARENT RightValList RIGHT_PARENT{
  $$ = A_FnCall($1->pos,$1->id,$3);
};

//12
//A_indexExpr A_NumIndexExpr(A_pos pos, int num);
//A_indexExpr A_IdIndexExpr(A_pos pos, char* id);
IndexExpr:
NUM{
  $$ = A_NumIndexExpr($1->pos,$1->num);
}
|
ID{
  $$ = A_IdIndexExpr($1->pos,$1->id);
};

//13
//A_arrayExpr A_ArrayExpr(A_pos pos, A_leftVal arr, A_indexExpr idx);
ArrayExpr:
LeftVal LEFT_SQUARE_BRACKET IndexExpr RIGHT_SQUARE_BRACKET{
  $$ = A_ArrayExpr($1->pos,$1,$3);
};

//14
//A_memberExpr A_MemberExpr(A_pos pos, A_leftVal structId, char* memberId);
MemberExpr:
LeftVal POINT ID{
  $$ = A_MemberExpr($1->pos,$1,$3->id);
};


//15
//A_boolUnit A_ComExprUnit(A_pos pos, A_comExpr comExpr);
//A_boolUnit A_BoolExprUnit(A_pos pos, A_boolExpr boolExpr);
//A_boolUnit A_BoolUOpExprUnit(A_pos pos, A_boolUOpExpr boolUOpExpr);
BoolUnit:
LEFT_PARENT ComExpr RIGHT_PARENT{
  $$ = A_ComExprUnit($2->pos,$2);
}
|
LEFT_PARENT BoolExpr RIGHT_PARENT{
  $$ = A_BoolExprUnit($1,$2);
}
|
LEFT_PARENT BoolUOp BoolUnit RIGHT_PARENT
{
  A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr($3->pos, $2, $3);
  $$ = A_BoolUOpExprUnit($3->pos, boolUOpExpr);
}


//17
//A_boolUOpExpr A_BoolUOpExpr(A_pos pos, A_boolUOp op, A_boolUnit cond);
BoolUOp:
NOT
  {
  $$ = A_not;
  }
;

//18 
//A_comExpr A_ComExpr(A_pos pos, A_comOp op, A_exprUnit left, A_exprUnit right);
ComExpr:
ExprUnit GREATER ExprUnit{
  $$ = A_ComExpr($1->pos,A_gt,$1,$3);
}
|
ExprUnit NOT_GREATER_THEN ExprUnit{
  $$ = A_ComExpr($1->pos,A_le,$1,$3);
}
|
ExprUnit LESS ExprUnit{
  $$ = A_ComExpr($1->pos,A_lt,$1,$3);
}
|
ExprUnit NOT_LESS_THEN ExprUnit{
  $$ = A_ComExpr($1->pos,A_ge,$1,$3);
}
|
ExprUnit NOT_EQUAL ExprUnit{
  $$ = A_ComExpr($1->pos,A_ne,$1,$3);
}
|
ExprUnit EQUAL ExprUnit{
  $$ = A_ComExpr($1->pos,A_eq,$1,$3);
};

//19
//A_leftVal A_IdExprLVal(A_pos pos, char* id);
//A_leftVal A_ArrExprLVal(A_pos pos, A_arrayExpr arrExpr);
//A_leftVal A_MemberExprLVal(A_pos pos, A_memberExpr memberExpr);
LeftVal:
ArrayExpr{
  $$ = A_ArrExprLVal($1->pos,$1);
}
|
MemberExpr{
  $$ = A_MemberExprLVal($1->pos,$1);
}
|
ID{
  $$ = A_IdExprLVal($1->pos,$1->id);
};


//20
//A_assignStmt A_AssignStmt(A_pos pos, A_leftVal leftVal, A_rightVal rightVal);
AssignStmt:
LeftVal ASSIGN RightVal SEMICOLON{
 $$ = A_AssignStmt($1->pos,$1,$3);
};

//21 函数传参用到的list
//A_rightValList A_RightValList(A_rightVal head, A_rightValList tail);
RightValList:
RightVal COMMA RightValList{
  $$ = A_RightValList($1,$3);
}
|
RightVal{
  $$ = A_RightValList($1,NULL);
}
|
{
  $$ = NULL;
};

//22 定义 var:int = 1
//A_varDefScalar A_VarDefScalar(A_pos pos, char* id, A_type type, A_rightVal val);
VarDefScalar:
ID COLON Type ASSIGN RightVal{
  $$ = A_VarDefScalar($1->pos,$1->id,$3,$5);
};

//23 带数组的 比如a[1]:int = {1}
//A_varDefArray A_VarDefArray(A_pos pos, char* id, int len, A_type type, A_rightValList vals);
VarDefArray:
ID LEFT_SQUARE_BRACKET NUM RIGHT_SQUARE_BRACKET COLON Type ASSIGN LEFT_BRACE RightValList RIGHT_BRACE{
  $$ = A_VarDefArray($1->pos,$1->id,$3->num,$6,$9);
};

//24 a:int
//A_varDeclScalar A_VarDeclScalar(A_pos pos, char* id, A_type type);
VarDeclScalar:
ID COLON Type{
  $$ = A_VarDeclScalar($1->pos,$1->id,$3);
};

//25 a[1]:int
//A_varDeclArray A_VarDeclArray(A_pos pos, char* id, int len, A_type type);
VarDeclArray:
ID LEFT_SQUARE_BRACKET NUM RIGHT_SQUARE_BRACKET COLON Type{
  $$ = A_VarDeclArray($1->pos,$1->id,$3->num,$6);
}

//26
//A_varDeclStmt A_VarDeclStmt(A_pos pos, A_varDecl varDecl);
//A_varDeclStmt A_VarDefStmt(A_pos pos, A_varDef varDef);
//let a/a[1]:int
//let a:int = 6
VarDeclStmt:
LET VarDecl SEMICOLON{
  $$ = A_VarDeclStmt($1,$2);
}
|
LET VarDef SEMICOLON{
  $$ = A_VarDefStmt($1,$2);
};

//27
//A_varDeclList A_VarDeclList(A_varDecl head, A_varDeclList tail);
//a:int,b:int
VarDeclList:
VarDecl COMMA VarDeclList{
  $$ = A_VarDeclList($1,$3);
}
|
VarDecl{
  $$ = A_VarDeclList($1,NULL);
}
|
{
  $$ = NULL;
};


//28
//A_structDef A_StructDef(A_pos pos, char* id, A_varDeclList varDecls);
StructDef:
STRUCT ID LEFT_BRACE VarDeclList RIGHT_BRACE{
  $$ = A_StructDef($1,$2->id,$4);
};

//29
//A_paramDecl A_ParamDecl(A_varDeclList varDecls)
ParamDecl:
VarDeclList{
  $$ = A_ParamDecl($1);
};

//30 声明函数 fn f(a:int)->int
//A_fnDecl A_FnDecl(A_pos pos, char* id, A_paramDecl paramDecl, A_type type);
FnDecl:
FN ID LEFT_PARENT ParamDecl RIGHT_PARENT{
  $$ = A_FnDecl($1,$2->id,$4,NULL);
}
|
FN ID LEFT_PARENT ParamDecl RIGHT_PARENT RIGHT_ARROW Type{
  $$ = A_FnDecl($1,$2->id,$4,$7);
};

//31
//A_fnDef A_FnDef(A_pos pos, A_fnDecl fnDecl, A_codeBlockStmtList stmts);
FnDef:
FnDecl LEFT_BRACE CodeBlockStmtList RIGHT_BRACE{
  $$ = A_FnDef($1->pos,$1,$3);
};

//32
//A_codeBlockStmt A_BlockNullStmt(A_pos pos);
//A_codeBlockStmt A_BlockVarDeclStmt(A_pos pos, A_varDeclStmt varDeclStmt);
//A_codeBlockStmt A_BlockAssignStmt(A_pos pos, A_assignStmt assignStmt);
//A_codeBlockStmt A_BlockCallStmt(A_pos pos, A_callStmt callStmt);
//A_codeBlockStmt A_BlockIfStmt(A_pos pos, A_ifStmt ifStmt);
//A_codeBlockStmt A_BlockWhileStmt(A_pos pos, A_whileStmt whileStmt);
//A_codeBlockStmt A_BlockReturnStmt(A_pos pos, A_returnStmt returnStmt);
//A_codeBlockStmt A_BlockContinueStmt(A_pos pos);
//A_codeBlockStmt A_BlockBreakStmt(A_pos pos);
CodeBlockStmt:
VarDeclStmt{
  $$ = A_BlockVarDeclStmt($1->pos,$1);
}
|
AssignStmt{
  $$ = A_BlockAssignStmt($1->pos,$1);
}
|
CallStmt{
  $$ = A_BlockCallStmt($1->pos,$1);
}
|
IF BoolUnit LEFT_BRACE CodeBlockStmtList RIGHT_BRACE ELSE LEFT_BRACE CodeBlockStmtList RIGHT_BRACE{
  A_ifStmt ifStmt = A_IfStmt($1, $2, $4, $8);
  $$ = A_BlockIfStmt($1, ifStmt);
}
|
IF BoolUnit LEFT_BRACE CodeBlockStmtList RIGHT_BRACE{
  A_ifStmt ifStmt = A_IfStmt($1, $2, $4, NULL);
  $$ = A_BlockIfStmt($1, ifStmt);
}
|
WHILE BoolUnit LEFT_BRACE CodeBlockStmtList RIGHT_BRACE{
  A_whileStmt whileStmt = A_WhileStmt($1, $2, $4);
  $$ = A_BlockWhileStmt($1, whileStmt);
}
|
ReturnStmt{
  $$ = A_BlockReturnStmt($1->pos,$1);
}
|
CONTINUE SEMICOLON{
  $$ = A_BlockContinueStmt($1);
}
|
BREAK SEMICOLON{
  $$ = A_BlockBreakStmt($1);
}
|
SEMICOLON{
  $$ = A_BlockNullStmt($1);
};


//35
//A_fnDeclStmt A_FnDeclStmt(A_pos pos, A_fnDecl fnDecl);
FnDeclStmt:
FnDecl SEMICOLON{
  $$ = A_FnDeclStmt($1->pos,$1);
};

//36
//A_callStmt A_CallStmt(A_pos pos, A_fnCall fnCall);
CallStmt:
FnCall SEMICOLON{
  $$ = A_CallStmt($1->pos,$1);
};

//37
//A_returnStmt A_ReturnStmt(A_pos pos, A_rightVal retVal);
ReturnStmt:
RET RightVal SEMICOLON{
  $$ = A_ReturnStmt($1,$2);
}
| RET SEMICOLON{
  $$ = A_ReturnStmt($1,NULL);
}
;


//38
//A_codeBlockStmtList A_CodeBlockStmtList(A_codeBlockStmt head, A_codeBlockStmtList tail);
CodeBlockStmtList:
CodeBlockStmt CodeBlockStmtList{
  $$ = A_CodeBlockStmtList($1,$2);
}
|
{
  $$ = NULL;
}


%%

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


