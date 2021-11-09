#include <stdio.h>

int main()
{
	char nome[30], end[60], cid[40], cep[9], sexo;
  	//Exemplo entrada de Dados
  
  	//TESTE ENTRADA DE DADOS
  
  	printf("\nDigite o nome: ");
  	scanf(" %[^\n]s",nome);
	//setbuf(stdin, NULL);
	
	printf("\nDigite o endere�o: ");
	scanf(" %[^\n]s",end);
	//setbuf(stdin, NULL);
	
	printf("\nDigite a cidade: ");
  	scanf(" %[^\n]s",cid);
  	//setbuf(stdin, NULL);
  	
	printf("\nDigite o cep: ");
  	scanf(" %[^\n]s",cep);
  	//setbuf(stdin, NULL);
  	
  	printf("\nSexo : ");
  	scanf("%c",&sexo);
  	
	    	
  	
  	printf("\nNome: %s",nome);
  	
	printf("\nEndere�o: %s",end);
	
	printf("\nCidade: %s",cid);
  	
  	printf("\nCep: %s",cep);
  	
  	printf("\nSexo: %c",sexo);
  	
 	//system("PAUSE"); 
	return 0;
 }
