//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>

//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa

int main ()
{	
	//Declara��o de Vari�veis Locais. 
	int fat, n, n1;
	//Obrigat�rio. Comandos para resolu��o do problema
	//Poss�veis mensagens para indicar as entradas

	printf("Fatorial de um n�mero - digite um valor: ");
  	scanf("%d", &n);
    n1=n;
  	fat = 1;

  	while (n > 0) 
	{
    	fat = fat *  n;
    	n--;  
  	}

  	printf("%d! = %d \n", n1, fat);

  	//system("PAUSE");
	return 0;
	
}
