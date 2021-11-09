#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{ //declara��o de vari�veis
  int diferenca=0, v[n], ind_primeiro, ind_segundo;
  //entrada de dados
  for(int i=0; i<n; i++)
  {
    printf("Digite um valor para a posi��o %d do vetor:", i);
    scanf("%d", &v[i]);
  }
  //Processamento. Verifica��o da maior diferen�a entre dois elementos consecutivos
  for(int i=0; i<n; i++)
  {   
    printf("\n Vetor[%d]:%d", i,v[i]);
    if (i>0) //calcula maior diferen�a para valores consecutivos, portanto a partir da segunda entrada
    {
      //verifica se o m�dulo da diferen�a (valor sem sinal) � maior
	  //m�dulo da diferen�a. Fun��o abs est� dispon�vel em stdlib.h

      if(abs(v[i]-v[i-1])>diferenca)
      { 
        diferenca=abs(v[i]-v[i-1]); //armazena a diferen�a
        ind_primeiro=i-1;
        ind_segundo=i;
      }
    }  
  }
  printf("\nMaior diferen�a: %d", diferenca);
  printf("\nPosicao %d : elemento %d", ind_primeiro, v[ind_primeiro]);
  printf("\nPosicao %d : elemento %d", ind_segundo, v[ind_segundo]);
  //system("PAUSE");
  return 0;
}

