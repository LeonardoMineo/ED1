#include<stdio.h>

#define TF 10

void EncherVetor( int Vetor[TF],int &TL)
{
	int n;
	printf("\nNumero: ");
	scanf("%d",&n);
	while(n>0)
	{
		Vetor[TL]=n;
		printf("\nNumero (ou 0 para Sair): ");
		scanf("%d",&n);
		TL++;
	}
}

void Inverter(int Vetor[TF], int AuxTL, int i)
{
	int aux;
	if(i<=AuxTL)
	{
		aux=Vetor[i];
		Vetor[i]=Vetor[AuxTL];
		Vetor[AuxTL]=aux;
	    Inverter(Vetor,AuxTL-1,i+1);
	}
}

int main (void)
{
	int Vetor[TF],TL=0,i,AuxTL;
	EncherVetor(Vetor,TL);
	printf("Vetor:\n");
	for(i=0;i<TL;i++)
		printf("%d\n",Vetor[i]);
	i=0;
	AuxTL=TL-1;
	Inverter(Vetor,AuxTL,i);
	printf("Vetor Invertido:\n");
	for(i=0;i<TL;i++)
		printf("%d\n",Vetor[i]);
}
