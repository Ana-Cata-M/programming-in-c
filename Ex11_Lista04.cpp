#include <stdio.h>
//#include <stdlib.h>
//#define h 200
//defini��o do n�mero de h�spedes (2) para teste
#define h 2

int main()
{
	int n_diarias,total_diarias=0;
	float total_pagar, total_hotel=0, taxa;
	//dados pessoais
	char nome[60], end[60], fone[10], cid[40], uf[3];
	
	//Entrada de dados pessoais

	printf("\n\t\t - Programa Hotel BCC - onde seus sonhos s�o realizados -");
	for	(int i=1; i<=h; i++)
	{
		printf("\n\tDigite o nome: ");
		scanf(" %[^\n]s",nome);
	
		
		printf("\n\tDigite o Endere�o: ");
		scanf(" %[^\n]s",end);
	
				
		printf("\n\tDigite o Fone: ");
		scanf(" %[^\n]s",fone);
	
		
		printf("\n\tDigite o Cidade: ");
		scanf(" %[^\n]s",cid);
	
		
		printf("\n\tDigite UF: ");
		scanf(" %[^\n]s",uf);
	
		
		printf("\n\t____________________________________________");
		printf("\n\t\tInforme o n�mero de di�rias : ");
		scanf("%d",&n_diarias);

		
		if (n_diarias<15)
			taxa=20.00;
		else if (n_diarias==15)
			taxa=14.00;
		else
			taxa=12.00;
		//C�lculo da Etapa 2
		total_pagar=(n_diarias*300.00)+taxa;
		//C�lculo da Etapa 3
		total_hotel=total_hotel+total_pagar;
		//C�lculo da Etapa 4
		total_diarias=total_diarias+n_diarias;					
		
		//Sa�das
		printf("\n\tNome: %s",nome);
		printf("\n\tEndere�o: %s",end);
		printf("\n\tFone: %s",fone);
		printf("\n\tCidade: %s",cid);
		printf("\n\tUF: %s",uf);
		printf("\n\n\tTotal a pagar: R$ %.2f\n",total_pagar);
		//system("PAUSE");
	}
	printf("\n\n\tTotal ganho pelo hotel: R$ %.2f",total_hotel);
	printf("\n\n\tTotal di�rias: %d\n",total_diarias);
	
	//system("PAUSE");
	return 0;
}
