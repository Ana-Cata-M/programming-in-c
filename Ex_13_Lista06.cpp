//Exerc�cio 13
#include <stdio.h>
#include <locale.h> //Inclui a biblioteca para uso de localidade para o SO

#define linha_A 3
#define coluna_A 3
#define linha_B 3
#define coluna_B 3

int main()
{
	int A[linha_A][coluna_A], B[linha_B][coluna_B], R[linha_A][coluna_B];
	
	setlocale(LC_ALL,"Portuguese"); //localidade padr�o, mostra corretamente acentua��o e 

	//Condi��o para multiplicar as matrizes: a dimens�o da coluna A deve ser igual a dimens�o da linha B
	if (coluna_A == linha_B)
	{
		printf("\nDigite os valores para a matriz A: ");
			for (int i=0; i<linha_A; i++)
		{
			for(int j=0; j<coluna_A; j++)
			{
				printf("\nDigite o elemento [%d][%d]: ", i, j);	
				scanf("%d", &A[i][j]);
			}	
		}
		printf("\nDigite os valores para a matriz B: ");
		for (int i=0; i<linha_B; i++){
		
			for(int j=0; j<coluna_B; j++)
			{
				printf("\nDigite o elemento [%d][%d]: ", i, j);	
				scanf("%d", &B[i][j]);
			}	
		}
		//Inicializar a matriz R para acumular os valores
		for (int i=0; i<linha_A; i++)
		{
			for(int j=0; j<coluna_B; j++)
			{
				R[i][j] = 0;
			}
		}
		//Para a multiplica��o, � necess�rio fixar i e j, e variar K em fun��o da Coluna A
		//A coluna A define a quantidade de multiplica��es
		for (int i=0; i<linha_A; i++)
		{
			for(int j=0; j<coluna_B; j++)
			{
				for(int k=0; k<coluna_A; k++)
				{
					R[i][j] = R[i][j] + A[i][k]*B[k][j];
				}
			}	
		}
		//Apresenta o resultado
		printf("\nResultado da multiplica��o - Matriz A * Matriz B\n ");
		for (int i=0; i<linha_A; i++)
		{
			for(int j=0; j<coluna_B; j++)
			{
				printf("[%d]", R[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("\nO n�mero de elementos da coluna A precisa ser igual ao da linha B");
	 //system ("pause");
	return 0;
	
}
