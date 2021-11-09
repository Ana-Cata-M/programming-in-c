//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>
#include <stdlib.h>
//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa
int main ()
{	
	//Declara��o de Vari�veis Locais. 
	float sal_func, sal_reajuste;
 	//Obrigat�rio. Comandos para resolu��o do problema
 	printf("Digite o sal�rio do funcion�rio: ");
 	scanf("%f",&sal_func);
 	
	if (sal_func<500)
 	 	sal_reajuste=sal_func*1.15;
	else if (sal_func>=500 && sal_func<=1000)
	 	sal_reajuste=sal_func*1.10;
	else 
		sal_reajuste=sal_func*1.05;
	
	printf("\nO sal�rio do funcion�rio �: %.2f", sal_func);
 	printf("\nO sal�rio com reajuste �: %.2f", sal_reajuste);
 	//Opcional. Comando para interromper momentaneamente o programa
  	printf("\n");
  	system("PAUSE");	
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.
