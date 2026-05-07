	#include<stdio.h>
	
	int Rec(int n, int m)
	{
		if(n==m || n==0)
			return 1;
		else
			return Rec(n-1,m)+Rec(n-1,m+1);
	}
	
	int main (void)
	{
		int n=5,m=3,Resultado;
		Resultado=Rec(n,m);
		printf("O resultado da recursividade(5,3)=%d",Resultado);
		return 0;
	}
