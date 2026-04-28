#include<stdio.h>
#include<conio2.h>
#include"TADex07.h"

void CriarArq(char NomeArq[50])
{
	FILE*PtrTxt=fopen(NomeArq,"w");
	printf("\n Arquivo criado!\n");
	fclose(PtrTxt);
}

void VerificarArq(char NomeArq[50])
{
	FILE*PtrTxt=fopen(NomeArq,"r");
	
	if(PtrTxt== NULL)
		CriarArq(NomeArq);
	else
		printf("\n Arquivo pronto para uso!\n");
	
	fclose(PtrTxt);
}

void Inversao (char NomeArq[50],Pilha &p)
{
	FILE*PtrTxt=fopen(NomeArq,"r");
	FILE*PtrNovo=fopen("Invertido.txt","w");
	Inicializar(p);
	char CHR;
	
	CHR=fgetc(PtrTxt);
	while(!feof(PtrTxt )&& !Cheia(p.Topo))
	{
		PUSH(p,CHR);
		CHR=fgetc(PtrTxt);
	}
	
	
	while(!Vazia(p.Topo))
	{
		
		fputc(POP(p),PtrNovo);
	}
	
	
	fclose(PtrTxt);
	fclose(PtrNovo);
}

int main (void)
{
	Pilha p;
	char NomeArq[50];
	printf("\n Nome do arquivo: ");
	fflush(stdin);
	gets(NomeArq);
	VerificarArq(NomeArq);
	Inversao(NomeArq,p);
	
	
	
	return 0;
}
