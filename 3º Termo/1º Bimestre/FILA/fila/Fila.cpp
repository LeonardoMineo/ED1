#include<stdio.h>
#include<conio2.h>
#include<ctype.h>
#include<string.h>
#include"TADFila.h"

char Menu(void)
{
	clrscr();
	printf("\n ### Menu: ###");
	printf("\n [A] Inicializar");
	printf("\n [B] Inserir");
	printf("\n [C] Retirar");
	printf("\n [D] Mostra Elemnto do Inico");
	printf("\n [E] Inserir");
	printf("\n [ESC] Sair\n");
	return toupper(getche());	
}



int main (void)
{
	TpFila Fila;
	char op ,Elemento;

	
	do{
		op=Menu();
		switch(op){
			
			case 'A': Inicializar(Fila);
					  printf("\n Fila iniciada!");	
					  getch();
					  break;
			
			case 'B': if(!FilaCheia(Fila.FIM))
		              {
		              	printf("\n Digite o Elemento:");
		              	fflush(stdin);
		              	scanf("%c",&Elemento);
		              	Inserir(Fila,Elemento);
		              	printf("\n Elemento inserido na Fila!");
					  }
					  else
					  	printf("\n Fila cheia!");
					  
					  getch();
					  break;
					  
			case 'C': if(!FilaVazia(Fila.FIM))
					  {
					  	Retirar(Fila);
					  	printf("\n Elemento retirado!");
					  }
					  else
						printf("\n Fila vazia!");
					  
					  getch();
					break;
					  
			case 'D': if(!FilaVazia(Fila.FIM))
					  	printf("\n Elemento do inico [%c]",ElementoInico(Fila));
					  
					  else 
					  	printf("\n Fila Vazia!");
					  	
					 getch();
				 break;
			
		}
		
		
	}while(op!=27);

}
