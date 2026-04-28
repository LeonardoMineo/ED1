#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio2.h>
#include"TADex01.h"

int main (void)
{
	char NomeArq[50];
	printf("\n Nome do arquivo: ");
	fflush(stdin);
	gets(NomeArq);
	VerificarArq(NomeArq);
	Maiusculo(NomeArq);
	
	return 0;
	
}

