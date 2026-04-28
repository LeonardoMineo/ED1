#include<stdio.h>
#include<string.h>
#include<conio2.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>

void Verificar(char NomeArq[50])
{
	FILE*PtrTxt = fopen(NomeArq,"r");
	if(PtrTxt==NULL)
	{
		printf("\n Erro de abertura!\n\n Deseja criar?");
		if(toupper(getch()) == 'S')
		{
			PtrTxt= fopen(NomeArq,"w");
			fclose(PtrTxt);
			printf("\n Arquivo Criado!\n");
			getch();
		}
		
	}
	else{
		printf("\n Arquico Pronto para Uso!\n");
		getch();
		fclose(PtrTxt);
	}	
}
char Menu(void)
{
	clrscr();
	printf("*** M E N U  ***\n");
	printf("[A] Gravar TXT [fputc]\n");
	printf("[B] Contagem - MAIUSC - [fgetc]\n");
	printf("[C] Mostrar TXT [fgetc]\n");
	printf("[D] Gravar TXT [fputs]\n");
	printf("[E] Contagem - MAIUSC - [fgets]\n");
	printf("[F] Mostrar TXT [fgets]\n");
	printf("[G] Ler Formatado\n");
	printf("[H] Gerar Relatorio\n");
	printf("[ESC] SAIR\n");
	printf("\nOpcao: \n");
	return toupper(getch());
}
void MostrarTXTCaracter(char NomeArq[50])
{
	FILE*PtrTxt = fopen(NomeArq,"r");
	char Caracter;
	 
	Caracter=fgetc(PtrTxt);
	
	while(!feof(PtrTxt))
	{
		printf("%c",Caracter);
		Sleep(100);
		Caracter=fgetc(PtrTxt);
	}
	getch();
	fclose(PtrTxt);
}

void MostrarTXTString(char NomeArq[50])
{
	FILE*PtrTxt = fopen(NomeArq,"r");
	char linha[100];
	clrscr();
	fgets(linha,100,PtrTxt);
	while(!feof(PtrTxt))
	{
		printf("%s",linha);
		fgets(linha,100,PtrTxt);
	}
	fclose(PtrTxt);
}
void GravarCHR( char NomeArq[50])
{
	FILE*PtrTXT=fopen(NomeArq,"a");
	char Caracter;
	clrscr();
	printf("\n Digite o texto e pressione ESC para finalizar:\n");
	Caracter = getche();
	while(Caracter!=27)
	{
		 if(Caracter==13)
		 {
		 	printf("%c",Caracter);
		 	fputc('\n',PtrTXT);
			printf("\n");	
		 	
		 }
		 else
		 	fputc(Caracter,PtrTXT);
		
		Caracter=getche();
	}
	fclose(PtrTXT);
}

void ContarMaiusculoCHR(char NomeArq[50])
{
	FILE*PtrTXT=fopen(NomeArq,"r");
	FILE*PtrM=fopen("Maiusculo.txt","w");
	char Caracter;
	int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	Caracter=toupper(fgetc(PtrTXT));
	while(!feof(PtrTXT))
	{
		
		
		if(Caracter==40)
			cont1++;
		if(Caracter==41)
			cont2++;
		if(Caracter==123)
			cont3++;
		if(Caracter==125)
			cont4++;
		if(Caracter==10)
			cont5++;
		fputc(Caracter,PtrM);
		Caracter=toupper(fgetc(PtrTXT));
	}
	fprintf(PtrM,"\n Quantidade de ( %d",cont1);
	fprintf(PtrM,"\n Quantidade de ) %d",cont2);
	fprintf(PtrM,"\n Quantidade de { %d",cont3);
	fprintf(PtrM,"\n Quantidade de } %d",cont4);
	fprintf(PtrM,"\n Quantidade de Numero de linhas %d",cont5);
	
	fclose(PtrTXT);
	fclose(PtrM);
}

void GravarSTR( char NomeArq[50])
{
	FILE*PtrTXT = fopen(NomeArq,"a");
	char String[100];
	clrscr();
	printf("\n Digite o texto e pressione ENTER em uma linha vazia para finalizar:\n");
	fflush(stdin);
	gets(String);
	while(strcmp(String,"\0")!=0)
	{
		
		fputs(String,PtrTXT);
		fputs("\n",PtrTXT);
		
		fflush(stdin);
		gets(String);
	}
	
	
	fclose(PtrTXT);
}

void LerFormatado(char NomeArq[50])
{
	int Codigo,Estoque;
	float Preco;
	char Descr[25];
	FILE*PtrProd=fopen(NomeArq,"r");
	fscanf(PtrProd,"%d %s %d %f",&Codigo, &Descr, &Estoque, &Preco);
	
	while(!feof(PtrProd))
	{
		printf("Codigo: %d\n",Codigo);
		printf("Descricao: %s\n",Descr);
		printf("Codigo: %d\n",Estoque);
		printf("Codigo: %f\n",Preco);	
		Sleep(100);
		fscanf(PtrProd,"%d %s %d %f",&Codigo, &Descr, &Estoque, &Preco);
		
	}
	
	fclose(PtrProd);
	getch();
}

void ContarMaiusculoSTR(char NomeArq[50])
{
	FILE*PtrTXT=fopen(NomeArq,"r");	
	FILE*PtrSM=fopen("StrMaiusculo.txt","w");
	char Palavra[100];
	int i,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	
	fflush(stdin);
	fgets(Palavra,100,PtrTXT);
	
	while(!feof(PtrTXT))
	{
		for(i=0;i<strlen(Palavra);i++)
		{
			if(Palavra[i]==40)
				cont1++;
			if(Palavra[i]==41)
				cont2++;
			if(Palavra[i]==123)
				cont3++;
			if(Palavra[i]==125)
				cont4++;
			if(Palavra[i]==10)
				cont5++;
			Palavra[i]=toupper(Palavra[i]);

		}
	
		fputs(Palavra,PtrSM);
		fflush(stdin);
		fgets(Palavra,100,PtrTXT);
		
	}
	
	fprintf(PtrSM,"\n Quantidade de ( %d",cont1);
	fprintf(PtrSM,"\n Quantidade de ) %d",cont2);
	fprintf(PtrSM,"\n Quantidade de { %d",cont3);
	fprintf(PtrSM,"\n Quantidade de } %d\n",cont4);
	fprintf(PtrSM," Quantidade de Numero de linhas %d\n",cont5);
	getch();
	
	fclose(PtrTXT);
	fclose(PtrSM);
}
void Relatorio(char NomeArq[50])
{
	int Codigo,Estoque,Qtd1=0;
	float Preco,ValorTotal=0;
	char Descr[25];
	FILE*PtrProd=fopen(NomeArq,"r");
	FILE*PtrArq=fopen("ArquivoN.txt","w");
	fprintf(PtrArq,"\t *** Relatorio: ***\n ");
	fprintf(PtrArq,"----------------------------------------\n");
	fprintf(PtrArq,"Codigo\tDescricao\tEstoque\tPreco\n");
	fprintf(PtrArq,"----------------------------------------\n");
	fscanf(PtrProd,"%d %s %d %f",&Codigo, &Descr, &Estoque, &Preco);
	
	while(!feof(PtrProd))
	{
		fprintf(PtrArq,"%d\t",Codigo);
		fprintf(PtrArq,"%s\t",Descr);
		fprintf(PtrArq,"%d\t",Estoque);
		fprintf(PtrArq,"%f\n",Preco);	
		Sleep(100);
		Qtd1+=Estoque;
		ValorTotal+=Preco*Estoque;
		fscanf(PtrProd,"%d %s %d %f",&Codigo, &Descr, &Estoque, &Preco);
		
	}
	fprintf(PtrArq,"----------------------------------------\n");
	fprintf(PtrArq,"Quantidade de Produtos: %d\n",Qtd1);
	fprintf(PtrArq,"Valor total em Produtos: %.2f\n",ValorTotal);
	fclose(PtrProd);
	fclose(PtrArq);
	getch();
	
}
 
int main (void)
{
	char NomeArquivo[50],op;

	do{
		op=Menu();
		
		if(op!=27)
		{
			printf("\n Nome Arquivo:");
			fflush(stdin);
			gets(NomeArquivo);
			Verificar(NomeArquivo);
		}
		
		switch (op)
		{
			case 'A': GravarCHR(NomeArquivo);
					  break;
			
			case 'B': ContarMaiusculoCHR(NomeArquivo);
				   	  break;
			
			case 'C': MostrarTXTCaracter("NomeArquivo");
					  break;
			
			case 'D': GravarSTR(NomeArquivo);
					  break;
					  
			case 'E': ContarMaiusculoSTR(NomeArquivo);
					  break;
					  
			case 'F': MostrarTXTString("StrMaiusculo.txt");
					  break;
					  
			case 'G': LerFormatado(NomeArquivo);
					  break;
			
			case 'H': Relatorio(NomeArquivo);
					  break;
					  

		}
	}while(op!=27);
	return 0;
}
