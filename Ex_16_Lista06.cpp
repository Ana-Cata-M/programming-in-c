//Exerc�cio 16

#include <stdio.h>
#define n 2
#define m 3
int main()
{
	int A[n][m]={{9,16,34},
             	 {32,11,17}};
	
	printf("\nValores matriz A:\n ");
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			printf("[%d]", A[i][j]);
		}	
		printf("\n");
	}
	printf("\n Apresenta��o da Transposta da matriz A:\n ");
	//invers�o entre linha e coluna.
	for (int j=0; j<m; j++)
	{
		for(int i=0; i<n; i++)
		{
			printf("[%d]", A[i][j]);
		}	
		printf("\n");
	}

	
	 //system ("pause");
	return 0;
	
}
