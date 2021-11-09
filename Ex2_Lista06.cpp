//Programa Lista 06 (Exerc�cio 2)
#include <stdio.h>
int main()
{   
  int M[5][5];

  for (int i = 0; i <5; i++)
  {
    for (int j = 0; j <5; j++)
    {
      //cria matriz identidade
      if (i == j)
        M[i][j] = 1;
      else
        M[i][j] = 0;
    
      //imprime o elemento da matriz
      printf("\t[%d]", M[i][j]);
    }
    //salta uma linha
    printf ("\n");
  }
  //system ("pause");
  return 0;
}

