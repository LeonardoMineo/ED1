void CriarArq (char NomeArq[50])
{
	FILE*PtrTxt=fopen(NomeArq,"w");
	printf("\n Arquivo criado!\n");
	fclose(PtrTxt);
}

void VerificarArq (char NomeArq[50])
{
	FILE*PtrTxt=fopen(NomeArq,"r");
	
	if(PtrTxt==NULL)
		CriarArq(NomeArq);
	else
		printf("\n Arquivo pronto para uso!\n");
	
	fclose(PtrTxt);
}

void Vasculhar (char NomeArq[50])
{
	FILE*PtrTxt=fopen(NomeArq,"r");
	
	int ContLe=0,ContEsp=0,ContLi=0;
	char Caracter;
	Caracter=fgetc(PtrTxt);
	while(!feof(PtrTxt))
	{
		if(Caracter>=65 && Caracter<=90 || Caracter>=97 && Caracter<=122)
			ContLe++;
		if(Caracter==' ')
			ContEsp++;
		if(Caracter==10)
			ContLi++;
		
		Caracter=fgetc(PtrTxt);
	}
	if(ContLi>0 && Caracter!=10)
		ContLi++;
	printf("\n Existe %d letras nesse arquivo.\n",ContLe);
	printf("\n Existe %d espacos nesse arquivo.\n",ContEsp);
	printf(" Existe %d linhas nesse arquivo.\n",ContLi);
	
	fclose(PtrTxt);
}
