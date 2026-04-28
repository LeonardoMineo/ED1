#include<stdio.h>
#include<conio2.h>
#include"TADex1M2.h"

void Inserir (TpPilhaM2 &PM)
{
	int Qtde,NP,Elem;
	printf("\nQuantas pilhas deseja criar?\n");
	scanf("%d",&Qtde);
	Inicializar(PM,Qtde);
	clrscr();
	printf("\nEm qual pilha deseja inserir(0 ou 1)?\n");
	scanf("%d",&NP);
	while(NP!=2)
	{
		if(NP==0 || NP==1)
		{
			printf("Elemento:");
			fflush(stdin);
			scanf("%d",&Elem);
			if(!Cheia(PM,NP))
				PUSH(PM,Elem,NP);
			else
				printf("\n Pilha Cheia!\n");
			clrscr();
			printf("\nEm qual pilha deseja inserir(0,1 ou 2 para sair)?\n");
			scanf("%d",&NP);
		}
		else
		{
			clrscr();
			printf("Pilha nao encontrada!\n");
			printf("\nEm qual pilha deseja inserir(0,1 ou 2 para sair)?\n");
			scanf("%d",&NP);
		}
	}
}

void Concatenacao (TpPilhaM2 &PM)
{
	int NP1=1,NP2=2,Elem;
	while(!Vazia(PM,NP1))
	{
		Elem=POP(PM,NP1);
		PUSH(PM,Elem,NP2);	
	}
	NP1=0;
	while(!Vazia(PM,NP2))
	{
		Elem=POP(PM,NP2);
		PUSH(PM,Elem,NP1);
	}
}


int main (void)
{
	int NP=0;
	TpPilhaM2 PM;
	Inserir(PM);
	Concatenacao(PM);
	printf("\n");
	printf("Concatenacao:");
	Exibir(PM,NP);
}

