//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>
#include <stdlib.h>
//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa
int main ()
{	
	float n1, n2, n3, media;
 
 	printf ("\nDigite tr�s notas:\n");
	scanf("%f  %f  %f", &n1, &n2, &n3);
 	media= (n1+n2+n3)/3;
 	printf ("M�dia: %f", media);
 	if (media >= 5)
    	printf ("\nAprovado\n");
 	//Opcional. Comando para interromper momentaneamente o programa
  	
	//system("PAUSE");	
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.
