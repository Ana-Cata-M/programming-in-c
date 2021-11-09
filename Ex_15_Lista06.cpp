//Exerc�cio 15

#include <stdio.h>
#include <time.h>

#define n 100
#define m 200
int main()
{
	int B[n][m], soma=0;
	srand(time(NULL));

	printf("\nValores matriz B: ");
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			B[i][j]= rand() % 100;
			//printf("[%d]", B[i][j]);
		}	
		printf("\n");
	}
	//soma dos elementos da quadrag�sima coluna e a soma dos valores da trig�sima linha
	
	printf("\nMatriz B: elementos da quadrag�sima coluna");
	for (int i=0; i<n; i++)
	{
		printf("\n[%d]", B[i][40]);	
		soma+=B[i][40];
	}
	printf("\nMatriz B: soma dos elementos da quadrag�sima coluna: %d", soma);
	
	soma=0;
	printf("\nMatriz B: elementos da trig�sima linha \n");
	for(int j=0; j<m; j++)
	{
		printf("[%d] ", B[30][j]);	
		soma+=B[30][j];
	}	
	printf("\nMatriz B: soma dos elementos da trig�sima linha: %d", soma);
	
	 //system ("pause");
	return 0;
	
}
