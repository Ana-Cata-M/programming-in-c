#include <stdio.h>
#define n 4
/*
Lista 06 (Exercício 3)
*/
int main() 
{
  int m[n][n];
  // cria a matriz e a imprime
  for(int i=0 ; i<n; i++)
  {
    for (int j=0; j<n; j++)
    {
      m[i][j] = i*j;
      printf(" %d",m[i][j]);
    }
    printf("\n");
  }
}


