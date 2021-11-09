//Exerc�cio 14.2

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int tempo[7][7]={
	{0,2,11,6,15,11,1},
	{2,0,7,12,4,2,15},
	{11,7,0,11,8,3,13},
	{6,12,11,0,10,2,1},
	{15,4,8,10,0,5,13},
	{11,2,3,2,5,0,14},
	{1,15,13,1,13,14,0}
	};
	int origem, destino;
	
	for(int i=0; i<7; i++)
	{
		printf("\n");
		for(int j=0; j<7; j++)
		{   //solu��o 1
		//	if (i<j)"tri�ngulo superior"
		//	printf("[%d]",tempo[i][j]);
		//	else
		//	printf("[ ]");
			
			//solu��o 2
			if (i>j)//"tri�ngulo inferior"
			   printf("[%d]",tempo[i][j]);
			else
			   printf("[ ]");
		
		}
	}
	
	//system (PAUSE)
	
	return 0;	
}

