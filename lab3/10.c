
#include <stdio.h>
#include <string.h>
int dfa=1;

void q1(char c)
{
	if(c=='a')	dfa=2;
	else if(c=='b')	dfa = 1;
	else dfa = -1;
}

void q2(char c)
{
	if(c=='b')	dfa=3;
	else if(c=='a')	dfa = 2;
	else dfa = -1;
}

void q3(char c)
{
	if(c=='a')	dfa=4;
	else if(c=='b')	dfa = 3;
	else dfa = -1;
}

void q4(char c)
{
	if(c=='b')	dfa=3;
	else if(c=='a')	dfa = 4;
	else dfa = -1;
}



int isAccepted(char str[])
{
	int i,len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(dfa == 1)
			q1(str[i]);
		else if(dfa==2)
			q2(str[i]);
		else if(dfa==3)
			q3(str[i]);
		else if(dfa==4)
			q4(str[i]);
		else
			return 0;	
	}
	if(dfa==3 || dfa == 4)
		return 1;
	else	return 0;
}
int main()
{
	char str[50];
	printf("Enter the string -: ");
	gets(str);
	if(isAccepted(str))
		printf("\nAccepted");
	else
		printf("\nRejected");
	return 0;
}

