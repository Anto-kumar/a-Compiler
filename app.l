%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "app.tab.h" 
// return 1 if there  is no input anymore

%}
%option noyywrap


%%
"begin"	    		{		return BEG;			}
"end"				{		return END;			}
"int"	    		{		return INT;			}
"deci"				{		return DECI;		}
"str"		        {		return STR;			}
"array"		        {		return ARR;			}
"plus"		        {		return PLUS;		}
"minus"		        {		return MINUS;		}
"into" 	            {		return MUL;			}
"div"		        {		return DIV;			}
"power"	            {		return POWER;		}
"mod"		        {		return MOD;			}	
"incre"		        {		return INCRE;		}
"decre"		        {		return DECRE;		}
"eqe"		        {		return EQUAL;		}
"grt"		        {		return GREATER;		}
"less"		        {		return LESS;		}
"ge"	            {		return GRTEQUAL;	}
"le"	            {		return LESSEQUAL;	}
"ne"	            {		return NOTEQUAL;	}
"abs"		        {		return ABSOLUTE;	}
"fact"	            {		return FACTORIAL;	}
"if"                {		return IF;			}
"else"              {		return ELSE;		}
"elif"              {		return ELIF;		}
[(]			        {		return LP;			}
[)]			        {		return RP;			}
"{"                 {		return LB;			}
"}"                 {		return RB;			}
"or"		        {		return OR;			}
"and"		        {		return AND;			}
"not"		        {		return NOT;			}
"["                 {		return LTB;			}
"]"                 {		return RTB;			}
"="                 {		return ASSIGN;		}
"--"                {		return DIVIDER;		}
"choose"            {		return SWITCH;		}
"match"             {		return CASE;		}
"default"           {		return DEFAULT;		}
"loop1"		        {		return FROM;		}
"loop2"             {		return WHILE;		}
"repeat"            {		return DO;			}
"range"             {		return RANGE;		}
"show"              {		return PRINT;		}
"scan"              {		return SCAN;		}
":"                 {		return COLON;		}
"NL"		        {		return NEWLINE;		}
[;]	 				{	    return SEMICOLON;	}
","	 				{		return COMMA;       }
"sin"               {       return SIN;         }
"cos"               {       return COS;         }
"tan"               {       return TAN;         }
"log10"             {       return LOG10;       }
"log2"              {       return LOG2;        }
"func"              {       return FUNC;        }

[ \n\t]*	        ;


