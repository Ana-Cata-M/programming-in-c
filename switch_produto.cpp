//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>
#include <stdlib.h>
//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa
int main ()
{	int prod;
	printf ("\nDigite o c�digo do produto: \n");
	scanf("%d",&prod);
	switch(prod)
    {	case 1 ... 5: printf("Produto categoria 1"); break;
		case 6: printf("Produto categoria 2"); break;
		default: printf("Categoria n�o cadastrada"); break;
	}
	//Opcional. Comando para interromper momentaneamente o programa
  	printf("\n");
  	system("PAUSE");	
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.
