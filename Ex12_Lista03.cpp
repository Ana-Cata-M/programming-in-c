//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>

//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa

int main ()
{	
	//Declara��o de Vari�veis Locais. 
	int num_1, num_2, num_3, num_4, num_5;
	//Obrigat�rio. Comandos para resolu��o do problema
	//Poss�veis mensagens para indicar as entradas
 	printf("\nDigite cinco n�meros:");
	printf("\nPrimeiro valor:");
	scanf("%d",&num_1);
	printf("\nSegundo valor:");
	scanf("%d",&num_2);
	printf("\nTerceiro valor:");
	scanf("%d",&num_3);
	printf("\nQuarto valor:");
	scanf("%d",&num_4);
	printf("\nQuinto valor:");
	scanf("%d",&num_5);
	//Identifica��o do maior n�mero e a sa�da
	if (num_1>num_2 && num_1>num_3 && num_1>num_4 && num_1>num_5)
		printf("\n numero maior �: %d", num_1);
	else if (num_2>num_3 && num_2>num_4 && num_2>num_5)
		printf("\n numero maior �: %d", num_2);
	else if (num_3>num_4 && num_3>num_5)
		printf("\n numero maior �: %d", num_3);
	else if (num_4>num_5)
		printf("\n numero maior �: %d", num_4);
	else
		printf("\n numero maior �: %d", num_5);

	//Identifica��o do menor n�mero e a sa�da
	if (num_1<num_2 && num_1<num_3 && num_1<num_4 && num_1<num_5)
		printf("\n numero menor �: %d", num_1);
	else if (num_2<num_3 && num_2<num_4 && num_2<num_5)
		printf("\n numero menor �: %d", num_2);
	else if (num_3<num_4 && num_3<num_5)
		printf("\n numero menor �: %d", num_3);
	else if (num_4<num_5)
		printf("\n numero menor �: %d", num_4);
	else
		printf("\n numero menor �: %d", num_5);

  	//printf("\n");
  	//system("PAUSE");
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.

