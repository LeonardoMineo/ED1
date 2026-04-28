#include<stdio.h>
#include<conio2.h>
#include"TADex2M1.h"
#include<ctype.h>



void Inserir (TpPilhaM1 &PM)
{
	int Elem,NP;
	char op;
	
	printf("Qual pilha deseja inserir(1 OU 2)?\n");
	scanf("%d",&NP);
	while(NP!=0)
	{
		if(NP==1 || NP==2)
		{
			clrscr();
			printf("Elemento:");
			scanf("%d",&Elem);
			PMPush(PM,Elem,NP);
			
			printf("Deseja continuar inserindo (S/N)?\n");
			if(toupper(getch())=='S')
				clrscr();
			else
				NP=0;
		}
		else
		{
			clrscr();
			printf("Pilha nao encontrada, tente novamente!\n");
			printf("Qual pilha deseja inserir(1,2 ou 0 para sair)?\n");
			scanf("%d",&NP);
		}
		
	}
}

void Exclusao(TpPilhaM1 &PM)
{
	int NP=1,Elem,Aux;
	if(!PMVazia(PM.Topo1,NP))
	{
		clrscr();
		printf("PILHA:\n");
		PMExibir(PM,NP);
		printf("\nQual elemento deseja excluir?\n");
		scanf("%d",&Elem);
		while(!PMVazia(PM.Topo1,NP))
		{
			Aux=PMPOP(PM,NP);
			if(Aux!=Elem)
				PMPush(PM,Aux,NP+1);
		}
		printf("\nExcluido com sucesso!\n");
		while(!PMVazia(PM.Topo2,NP+1))
		{
			Aux=PMPOP(PM,NP+1);
			PMPush(PM,Aux,NP);
		}
	}
	else
		{
		clrscr();
		printf("PILHA:\n");
		PMExibir(PM,NP+1);
		printf("\nQual elemento deseja excluir?\n");
		scanf("%d",&Elem);
		while(!PMVazia(PM.Topo2,NP+1))
		{
			Aux=PMPOP(PM,NP+1);
			if(Aux!=Elem)
				PMPush(PM,Aux,NP);
		}
		printf("\nExcluido com Sucesso\n");
		while(!PMVazia(PM.Topo1,NP))
		{
			Aux=PMPOP(PM,NP);
			PMPush(PM,Aux,NP+1);
		}
	}
}

void Exibir (TpPilhaM1 &PM)
{
	int NP=1;
	printf("\nPILHA:\n");
	if(!PMVazia(PM.Topo1,NP))
		PMExibir(PM,NP);
	else
		PMExibir(PM,NP+1);
}

int main (void)
{
	TpPilhaM1 PM;
	Inicializar(PM);
	Inserir(PM);
	Exclusao(PM);
	Exibir(PM);
	
}
