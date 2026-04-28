void CriarArq(char Nomearq[50])
{
	FILE*PtrTxt=fopen(Nomearq,"w");
	fclose(PtrTxt);
}

 void Verificar ( char Nomearq[50])
 {
 	FILE*PtrTxt=fopen(Nomearq,"r");
 	if(PtrTxt==NULL)
 	{
 		CriarArq(Nomearq);
 		printf("\n Arquivo criado!\n");
	 }
 	else
 		printf("\n Arquivo pronto para uso!\n");
 }
 
 void Gravar(char Nomearq[50])
 {
 	FILE*PtrTxt=fopen(Nomearq,"w");
 	int i;
 	char Nome[100];
 	for(i=1;i<=1000;i++)
 		fprintf(PtrTxt," %d\n",i);
	
	printf("\n Digite seu nome aqui: ");
	fflush(stdin);
	gets(Nome);
	fputs(Nome,PtrTxt);	 
	 fclose(PtrTxt);
 }
 
 void Exibir(char Nomearq[50])
 {
 	FILE*PtrTxt=fopen(Nomearq,"r");
	 char linha[100];
 	
 	while(!feof(PtrTxt))
 	{
 		fgets(linha,100,PtrTxt);
 		printf("\n %s",linha);
	 }
	 fclose(PtrTxt);
 }
 
 
