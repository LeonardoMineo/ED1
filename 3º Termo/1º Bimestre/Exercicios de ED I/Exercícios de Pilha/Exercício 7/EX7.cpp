#include<stdio.h>

#include<conio2.h>
#include "PilhaEx07.h"



void Polidromo (Pilha &p)
{
	Pilha Aux;
	char Elem,Copia[50];
	int pos,i=0;
	Inicializar(p);
	printf("\n Inserir elemento na Pilha: ");
	fflush(stdin);
	scanf("%c",&Elem);
	while(!Cheia(p.Topo) && Elem>'0')
	{
		PUSH(p,Elem);
		Copia[i]=Elem;
		fflush(stdin);
		scanf("%c",&Elem);
		i++;
	}
	
	
	pos=VerificarPilha(p,Copia);
	
	if(pos!=-1)
		printf("\n Nao e um Polimedro!");
	else
		
		
		printf("\n A palavra e um Polimedro!");
}



int main (void)
{
	Pilha p;
	Polidromo(p);
	
	return 0;
}

