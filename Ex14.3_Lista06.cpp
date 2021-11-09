//Exerc�cio 14.3

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
  int origem, destino, acum=0, flag=1;//Vari�vel que tem a fun��o de estabelecer uma situa��o l�gica. Neste caso, o valor � True
  
  for(int i=0; i<7; i++)
  {
    printf("\n");
    for(int j=0; j<7; j++)
    {  
      printf(" [%d] ",tempo[i][j]);
    }
  }
  do{
    printf("\n\n");
    if (flag==1) // Vari�vel l�gica que permite tratar a primeira entrada para origem e destino.
    {
      do{
        printf("\nDigite a cidade de origem: ");
        scanf("%d",&origem);
        if (origem<0 || origem>6)
        {
          printf("\nPosi��o fora do intervalo da matriz");
        }
      }while(origem<0 || origem>6);
      flag=0; //ap�s entrada v�lida de origem, altera o estado l�gico da vari�vel para n�o ler origem na pr�xima vez.
    } 
    else // Flag = 0, falso, que permite tornar, a partir da segunda entrada, o �ltimo destino como origem para o pr�ximo roteiro.
    {
      origem=destino;
    }
    do{
      printf("\nDigite a cidade de destino: ");
      scanf("%d",&destino);
      if (destino<0 || destino>6)
      {
        printf("\nPosi��o fora do intervalo da matriz");
      }
    }while(destino<0 || destino>6);
      
    if (origem!=destino)
    {
      acum+=tempo[origem][destino]; //acumula os tempos.
      printf("\n%d Tempo parcial (s)\n\n", acum); // mostra o tempo entre origem e destino
      
    }
  
  }while(origem!=destino);
  printf("\n Tempo final: %d \n\n", acum); 
  //system (PAUSE)
  
  return 0; 
}

