//Diretivas de Pr�-processamento (Obrigat�rias)
#include <stdio.h>
#include <stdlib.h>
#define n 10
//Obrigat�rio. Fun��o principal: indica o in�cio da execu��o do programa
int main ()
{	
	//Declara��o de Vari�veis Locais. 
	int cod_func[n];
	float sal_func[n], sal_reajuste[n], total_sal_base=0, total_sal_reaj=0;
	char nome_func[n][40];

	printf("\n\n\t\t - Programa Reajuste de Sal�rio -");	
	for (int i=0; i<n; i++)
	{
		
		printf("\n\n\tDigite o c�digo do funcion�rio: ");
 		scanf("%d",&cod_func[i]);
		//Obrigat�rio. Comandos para resolu��o do problema
 		printf("\n\tDigite o sal�rio do funcion�rio: ");
 		scanf("%f",&sal_func[i]);
 		printf("\n\tDigite o nome do funcion�rio: ");
		scanf(" %[^\n]s",nome_func[i]);
		//setbuf(stdin,NULL);
		//Acumula sal�rio base
		total_sal_base+=sal_func[i];			
		
		if (sal_func[i]<500)
 			sal_reajuste[i]=sal_func[i]*1.15;
		else if (sal_func[i]>=500 && sal_func[i]<=1000)
			sal_reajuste[i]=sal_func[i]*1.10;
		else 
			sal_reajuste[i]=sal_func[i]*1.05;
		//Acumula sal�rio reajustado
		total_sal_reaj+=sal_reajuste[i];			
					
	}
	printf("\n\n\t__________________________________________________________________________________");
	printf("\n\t\t\tLista de Sal�rios dos Funcion�rios da Empresa AB");
	printf("\n\t__________________________________________________________________________________");
	printf("\n\t\tCodigo\tNome\t\t\t\tSal. Base\tSalario Reajustado");
	printf("\n\t__________________________________________________________________________________");

	for (int i=0; i<n; i++)
	{
		printf("\n\t\t%d\t%s\t\t\t\t%.2f\t\t\t%.2f", cod_func[i],nome_func[i], sal_func[i],sal_reajuste[i]) ;
 	}
  		
	printf("\n\n\t__________________________________________________________________________________");
	printf("\n\n\t\t\t\t\t\tTotal:|%.2f\t\t\t|%.2f",total_sal_base,total_sal_reaj);
	printf("\n\n\t__________________________________________________________________________________\n");
  	//Opcional. Comando para interromper momentaneamente o programa
	// system("PAUSE");	
  	//Retorno ao SO o status do programa
  	return 0;
}//Indica o final do programa.


