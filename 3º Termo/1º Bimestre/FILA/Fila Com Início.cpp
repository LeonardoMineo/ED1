#define MAXFILA 6

struct Fila{
	char Fila[MAXFILA];
	int Inicio,Fim;
};

void Inicializar(Fila &F){
	Inicio=0;
	Fim=-1;
}

void Inserir (Fila &F, int Elem){
	int i;
	if(F.Fim==MAXFILA-1){
		for(i=0;i<(F.Fim-F.Inicio))
			F.Fila[i]=F.Fila[F.Inicio+i];
		Inicio=0;
		Fim=Fim-Inicio;
	}
	else
		F.Fila=F.Fila[F.Fim];
}

char Retirar (Fila &F){
	
	if(F.Fim==F.Inicio){
		return F.Fila[F.Inicio];
		Inicializar(F);
	}
	else
		return F.Fila[F.Inicio++];
	}
}

char Vazia (int F.Fim, int F.Inicio){
	return F.Fim<F.Inicio;
}

char Cheia( int F.Fim,int F.Inicio){
	return F.Inicio==0 && F.Fim==MAXFILA-1;
}

void ElemInicio(Fila F){
	return F.Fila[F.Inicio];
}

void ElemFim(Fila F){
	return F.Fila[F.Fim];
}










