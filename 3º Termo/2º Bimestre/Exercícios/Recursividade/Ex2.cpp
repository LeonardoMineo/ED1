#include<stdio.h>

int Elevacao(int x, int y)
{
	if(y==0)
		return 1;
	else  
		return x*Elevacao(x,y-1);
}

int main (void)
{
	int x,y,Resultado;
	printf("Elevacao:\n");
	printf("\nNumero e valor a elevalo: ");
	scanf("%d %d",&x,&y);
	Resultado=Elevacao(x,y);
	printf("Resultado: %d",Resultado);
}
