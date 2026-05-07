#include<stdio.h>


int Fib(int fib)
{
	if(fib==0 || fib==1)
		return 1;
	else 
		return Fib(fib-1)+Fib(fib-2);
}

int main (void)
{
	int fib,ValorFib;
	printf("\n Qual fibonacci deseja achar?\n");
	scanf("%d",&fib);
	ValorFib=Fib(fib);
	printf("\n O valor do Fibonacci(%d)= %d",fib,ValorFib);
	return 0;
	
}
