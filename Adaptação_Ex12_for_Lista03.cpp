//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>

//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa

int main ()
{	
	//Declara��o de Vari�veis Locais. 
	int num, maior, menor;
	//Obrigat�rio. Comandos para resolu��o do problema
	//Poss�veis mensagens para indicar as entradas
 	printf("\nDigite cinco n�meros:");
	
	for (int i=0;i<5;i++)
	{
		printf("\nDigite um n�mero (%d): ", i);
		scanf("%d",&num);
		
		if (i==0) //inicializa��o para compara��o
		{ 
			maior=num;
			menor=num;
		}
		else if (num>maior)//Identifica��o do maior n�mero e a sa�da
		{
			maior=num;
		}
		else if (num<menor)//Identifica��o do menor n�mero e a sa�da
		{
			menor=num;
		}
	}
	printf("\n O maior numero �: %d", maior);
	printf("\n O menor numero �: %d", menor);
	
  	printf("\n");
  	system("PAUSE");
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.

