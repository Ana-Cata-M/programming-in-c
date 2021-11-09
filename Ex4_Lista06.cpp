//Programa Lista 06 (Exerc�cio 4)
#include <stdio.h>
int main()
{   
  int M[4][4], maior_i, maior_j;

  printf("Entre com os 16 valores da matrix 4x4:\n");

  for (int i = 0; i <4; i++)
  {
    for (int j = 0; j <4; j++)
    {
      //l� os dados
      scanf("%d", &M[i][j]);
      //verifica se o dado lido � o maior at� o momento

      if (i==0 && j==0)
      {//Armazena dados para inicializar
        maior_valor = M[i][j];
        maior_i = i;
        maior_j = j;

      }
      else if (M[i][j] >maior_valor)
      {
        //Atualiza dados somente quando o valor � maior              
        maior_valor = M[i][j];
        maior_i = i;
        maior_j = j;
      }
    }
  }
  //percorre a matriz a fim de imprimi-la
  for (int i = 0; i <4; i++)
  {
    for (int j = 0; j <4; j++)
    {
      //imprime o elemento
      printf("[%d]", M[i][j]);
    }
    //salta uma linha
    printf ("\n");
  }
  printf("Localiza��o do maior valor: \n");
  printf("-> linha: %d", maior_i );
  printf("\n-> coluna: %d", maior_j );
  //system ("pause");
  return 0;
}


