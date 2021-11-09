#include<stdio.h>
int main()
{
printf("Digite os valores de uma matriz 5x5");
int A[5][5], soma=0;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        printf("\nDigite o elemento da linha %d e coluna %d: ",i,j);
        scanf("%d",&A[i][j]);
        if(j>i)
        {
            soma += A[i][j];
            printf("%d\t",A[i][j]);
        }
    }
}
printf("A soma da submatriz triangular superior e %d", soma);
return(0);
}