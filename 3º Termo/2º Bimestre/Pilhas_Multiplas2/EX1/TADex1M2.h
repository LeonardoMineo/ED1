#define MAXPILHA 30
struct TpPilhaM2{
 int Base[MAXPILHA],Topo[MAXPILHA], Pilha[MAXPILHA];
 
};

//Protótpos das Operações Associadas
void Inicializar (TpPilhaM2 &PM,int QtdePilhas);
int Vazia(TpPilhaM2 PM, int NP);
int Cheia(TpPilhaM2 PM, int NP);
void PUSH(TpPilhaM2 &PM, char Elem, int NP );
int POP(TpPilhaM2 &PM, int NP);
int ElementoTopo(TpPilhaM2 PM, int NP);
void Exibir(TpPilhaM2 PM, int NP);

void Inicializar (TpPilhaM2 &PM,int QtdePilhas)
{
	int i;
	for(i=0;i<=QtdePilhas;i++)
	{
		PM.Base[i] = i * (MAXPILHA/QtdePilhas);
		PM.Topo[i] = PM.Base[i]-1;
	}
}

int Vazia(TpPilhaM2 PM, int NP)
{
	return PM.Base[NP]==PM.Topo[NP]+1;
}

int Cheia(TpPilhaM2 PM, int NP)
{
	return PM.Topo[NP]==PM.Base[NP+1]-1;
}

void PUSH(TpPilhaM2 &PM, int Elem, int NP )
{
	 PM.Pilha[++PM.Topo[NP]]= Elem;
}

int POP(TpPilhaM2 &PM, int NP)
{
	return	PM.Pilha[PM.Topo[NP]--];
}

int ElementoTopo(TpPilhaM2 PM, int NP)
{
	return PM.Pilha[PM.Topo[NP]];
}

void Exibir(TpPilhaM2 PM, int NP)
{
	while(!Vazia(PM,NP))
		printf("\n %d",POP(PM,NP));
}
