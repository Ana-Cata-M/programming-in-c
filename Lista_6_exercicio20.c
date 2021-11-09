/*20. Escreva um programa para ler duas matrizes 2 x 2 com valores reais. 
O usuário tem disponível um menu com as opções: (a) somar as duas matrizes; 
(b) subtrair a primeira matriz da segunda; 
(c) adicionar uma  constante as duas matrizes; 
(d) imprimir as matrizes. 
Para as duas primeiras opções, uma terceira matriz 3  x 3 deve ser criada. 
Para a terceira opção, um valor deve ser lido,
o qual deve ser adicionado aos  elementos da matriz e os resultados devem ser armazenados na própria matriz.*/
#include<stdio.h>
int main()
{
double A[2][2];
double B[2][2];
printf("Escreva duas matrizes 2x2:\n");
for(i=0;i<2;i++)
{
    for(j=0:j<2;j++)
    {
        printf("Primeira matriz");
        printf("Escreva o elemento da linha %d e coluna %d", i,j);
        scanf("%lf",&A[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0:j<2;j++)
    {
        printf("Segunda matriz");
        printf("Escreva o elemento da linha %d e coluna %d", i,j);
        scanf("%lf",&B[i][j]);
    }
}


    
}

