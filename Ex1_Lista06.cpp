//Programa Lista 06 (Exerc�cio 1)
#include <stdio.h>
int main()
{   
  int cont=0, matriz[4][4];

  printf("Entre com os 16 valores da matriz 4x4:\n");

  for (int lin = 0; lin<4; lin++)
  {
    for (int col = 0; col<4; col++)
    {
      //l� os dados
      scanf("%d", &matriz[lin][col]);
      //acumula se valor � maior que 10
      if (matriz[lin][col] >10)
        cont = cont + 1;
    }
  }
  printf("Quantidade de valores maiores que 10: %d\n", cont);
  //system ("pause");
  return 0;
}


