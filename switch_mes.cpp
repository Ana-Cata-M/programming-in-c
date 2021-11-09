//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>
#include <stdlib.h>
//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa
int main ()
{	char mes;
	printf ("\nDigite a primeira letra de m�s: \n");
	scanf("%c",&mes);
	switch(mes)
    {
    	case 'J':
    		printf("Janeiro e Julho t�m 31 dias. Junho tem 30 dias "); break;
    	case 'M':
    	printf("Mar�o e Maio t�m 31 dias "); break;
    	case 'A':
    	case 'O':
    	case 'D':
    		printf("Este m�s tem 31 dias"); break;
        case 'F':
            printf("Este m�s tem 28 ou 29 dias"); break;
        default:
            printf("Este m�s tem 30 dias"); break;
	}
	//Opcional. Comando para interromper momentaneamente o programa
  	
  	//system("PAUSE");	
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.
