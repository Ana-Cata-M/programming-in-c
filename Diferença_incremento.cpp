#include <stdio.h>

int main()
{
  int i=0, aux;
  aux=i++;
  printf("\n valor de i: %d; valor retornado por i++: %d; i ap�s o i++: %d \n", i, aux, i);
  
  i=0;
  aux=++i;
  printf("\n valor de i: %d; valor retornado por ++i: %d; i ap�s o ++i: %d \n", i, aux, i);
    
}
