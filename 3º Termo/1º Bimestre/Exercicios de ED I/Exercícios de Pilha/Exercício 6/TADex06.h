#define MAXPILHA 500

struct Pilha{
	char Pilha[MAXPILHA];
	int Topo;
};

void Inicializar(Pilha &p);
void PUSH(Pilha &p, char Elem);
char POP(Pilha &p);
char Cheia(int Topo);
char Vazia(int Topo);

void Inicializar(Pilha &p)
{
	p.Topo=-1;
}

void PUSH(Pilha &p, char Elem)
{
	p.Pilha[++p.Topo]=Elem;
}

char POP (Pilha &p){
	return p.Pilha[p.Topo--];
}

char Cheia (int Topo)
{
	 return Topo==MAXPILHA-1;
}

char Vazia ( int Topo)
{
	 return Topo==-1;
}

