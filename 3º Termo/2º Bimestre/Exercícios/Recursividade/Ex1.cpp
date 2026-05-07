#include<stdio.h>

int MDC(int x, int y)
{
	if(y==0)
		return x;
	else return  MDC(y,x%y); 
}

int main (void)
{
	int x,y,Resultado;
	printf("Numeros para achar o MDC: ");
	scanf("%d %d",&x,&y);
	Resultado=MDC(x,y);
	printf("\n Resultado: %d",Resultado);
	return 0;
}
