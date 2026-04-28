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

void Maiusculo (char NomeArq[50])
{
	FILE*PtrTxt=fopen(NomeArq,"r");
	FILE*PtrMaiu=fopen("Maiusculo.txt","w");
	
	char Linha[100];
	int i;
	fgets(Linha,100,PtrTxt);
	while(!feof(PtrTxt))
	{
		for(i=0;i<strlen(Linha);i++)
			Linha[i]=toupper(Linha[i]);
		fputs(Linha,PtrMaiu);
		fgets(Linha,100,PtrTxt);
	}
	
	fclose(PtrTxt);
	fclose(PtrMaiu);

}

