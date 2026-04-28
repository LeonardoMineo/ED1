#include<stdio.h>
#include<string.h>
#include<conio2.h>
#include<ctype.h>
#include"TADex10.h"

int main (void)
{
	char NomeArq[50];
	printf("\n Nome do Arquivo: ");
	fflush(stdin);
	gets(NomeArq);
	Verificar(NomeArq);
	Gravar(NomeArq);
	Exibir(NomeArq);
	
	return 0;
}

