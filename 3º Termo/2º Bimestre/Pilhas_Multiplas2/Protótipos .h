// Pilha Múltiplas: Caso 2
#define MAXPILHA 10
struct TpPilhaM2{
 int Base[MAXPILHA],Topo[MAXPILHA];
 char Pilha[MAXPILHA];
};
//Protótpos das Operações Associadas
void Inicializar (TpPilhaM2 &PM,int QtdePilhas);
char Vazia(TpPilhaM2 PM, int NP);
char cheia(TpPilhaM2 PM, int NP);
void PUSH(TpPilhaM2 &PM, char Elem, int NP );
char POP(TpPilhaM2 &PM, int NP);
char ElementoTopo(TpPilhaM2 PM, int NP);
char Exibir(TpPilhaM2 PM, int NP);

void Inicializar (TpPilhaM2 &PM,int QtdePilhas)
{
	int i;
	for(i=0;i<=QtdePilhas;i++)
	{
		PM.Base[i] = i * (MAXPILHA/QtdePilhas);
		PM.Topo[i] = PM.Base[i] -1;
	}
}

char Vazia(TpPilhaM2 &PM, int NP)
{
	return PM.Base[NP-1] == PM.Topo[NP-1] +1;
}


char cheia(TpPilhaM2 &PM, int NP)
{
	return PM.Topo[NP-1] == PM.Base[NP] -1;	
}

void PUSH(TpPilhaM2 &PM, char Elem, int NP )
{
	PM.Pilha[++PM.Topo[NP-1]] = Elem;
}

char POP(TpPilhaM2 &PM, int NP)
{
	return PM.Pilha[PM.Topo[NP-1]--];
}

char ElementoTopo(TpPilhaM2 PM, int NP)
{
	return PM.Pilha[PM.Topo[NP-1]];
}

char Exibir(TpPilhaM2 PM, int NP)
{
	while(!Vazia(PM,NP))
		printf("%c",POP(PM,NP));

}
