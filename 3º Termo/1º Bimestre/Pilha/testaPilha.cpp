#include<stdio.h>
#include<conio2.h>
#include "pilha.h"

char  menu(void)
{
    clrscr();
    printf("\n1 - Inicializa");
    printf("\n2 - Insere (PUSH)");
    printf("\n3 - Retira (POP)");
    printf("\n4 - Mostra elemento do topo");
    printf("\n5 - Exibe Pilha");
    printf("\n[ESC] - Sair\n");
    printf("\nDigite a opcao desejada: ");
    
    return getche();
}

int main(void)
{
    TpPilha pilha1,pilha2;
    char opcao, elemento;

    //inicializa(pilha);
    do
    {
    	opcao=menu();
        switch(opcao)
        {
        case '1':
            inicializa(pilha1);
            inicializa(pilha2);
            printf("\nPilhas inicializadas!\n");
            getch();
            break;
        case '2':
			if( !cheia(pilha1.TOPO && pilha2.TOPO  ) )
			{
				printf("\nDigite o elemento da Pilha 1: ");
                fflush(stdin);
				scanf("%c",&elemento);
				insere(pilha1,elemento);
				printf("\n\nElemento inserido!\n");
				printf("\nDigite o elemento da  Pilha 2: ");
                fflush(stdin);
				scanf("%c",&elemento);
				insere(pilha2,elemento);
				printf("\n\nElemento inserido!\n");
			}
			else
				printf("\nNao e possivel inserir, Pilha esta cheia!\n");
            getch();
            break;
        case '3':
        	if( !vazia(pilha.TOPO) )
       			printf("\nElemento [%c] retirado da pilha!\n",retira(pilha));
			else
				printf("\nNao e possivel retirar, pilha esta vazia!\n");
            getch();
            break;
        case '4':
        	if( !vazia(pilha.TOPO) )
        		printf("\nElemento [%c] do topo!\n",elementoTopo(pilha));
        	else
        		printf("\nA pilha esta vazia!\n");
            getch();
            break;
        case '5':
        	if( !vazia(pilha.TOPO) )
        		exibe(pilha);
        	else
        		printf("\nA pilha esta vazia!\n");
            getch();
            break;
        }
    }while(opcao!=27);
}
