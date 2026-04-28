#define MAXPILHA 10

struct Pilha{
	char Pilha[MAXPILHA];
	int Topo;

};

void Inicializar (Pilha &p);
void PUSH (Pilha &p, char  Elemento);
char POP (Pilha &p);
char Cheia (int Topo);
char Vazia (int Topo);
int VerificarPilha(Pilha p, char Copia[50]);


void Inicializar (Pilha &p)
{
	p.Topo=-1;
}

void PUSH (Pilha &p, char Elemento)
{
	p.Pilha[++p.Topo]=Elemento;
}

char POP (Pilha &p)
{
	return p.Pilha[p.Topo--];
}

char Cheia (int Topo)
{
	return Topo==MAXPILHA-1;
}	

char Vazia (int Topo)
{
	return Topo==-1;
}

int VerificarPilha(Pilha p, char Copia[50])
{
	int i=0,Cont=0;
	while(!Vazia(p.Topo))
	{
		if(POP(p)!=Copia[i])
			Cont++;
		i++;
	}
	if(Cont>0)
		return i;
	else
		return -1;
		
}

