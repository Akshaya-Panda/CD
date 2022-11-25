%{
int count=0;
char ch=0;
%}
digit[0-9]
letter[a-zA-Z_]

%%
{letter}({letter}|{digit})* {
 count++;
}

%%
int yywrap(){}
int main()
{
 yylex();
 printf("count: %d",count);
 return 0;
}
