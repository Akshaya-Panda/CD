#include <stdio.h>
#include <string.h>
//starting state
int dfa = 1;
void A(char c)
{
if (c == 'a')
dfa = 3;
else if (c == 'b')
dfa = 2;
else
dfa = -1;
}
// This function is for the first state B of DFA
void B(char c)
{
if (c == 'a')
dfa = 5;
else if (c == 'b')
dfa = 4;
else
dfa = -1;
}
void C(char c)
{
if (c == 'a')
dfa = 7;
else if (c == 'b')
dfa = 6;
else
dfa = -1;
}
void D(char c)
{
if (c == 'a')
dfa = 3;
else if (c == 'b')
dfa = 2;
else
dfa = -1;
}
void E(char c)
{
if (c == 'a')
dfa = 5;
else if (c == 'b')
dfa = 4 ;
else
dfa = -1;
}
void F(char c)
{
if (c == 'a')
dfa = 7;
else if (c == 'b')
dfa = 6;
else
dfa = -1;
}
void G(char c)
{
if (c == 'a')
dfa = 3;
else if (c == 'b')
dfa = 2;
else
dfa = -1;
}
int isAccepted(char str[])
{
// store length of string
int i, len = strlen(str);
for (i = 0; i < len; i++) {
if (dfa == 1)
A(str[i]);
else if (dfa == 2)
B(str[i]);
else if (dfa == 3)
C(str[i]);
else if (dfa == 4)
D(str[i]);
else if (dfa == 5)
E(str[i]);
else if (dfa == 6)
F(str[i]);
else if (dfa == 7)
G(str[i]);
else
return 0;
}
}
int main()
{
char str[50];
printf("enter the string\n");
scanf("%s",str);
if (isAccepted(str))
printf("%s is ACCEPTED",str);
else
printf("%s is NOT ACCEPTED",str);
return 0;
}
