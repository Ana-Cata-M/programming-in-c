#include<stdio.h>
int main()
{
printf("Multiplicacao de matrizes: C  = A(3x3) * B(3x3)");
double A[3][3];
double B[3][3];
double C[3][3];
printf("\nPrimeira matriz: A\n");
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        printf("\nDigite o elemento da linha %d e coluna %d: ",i,j);
        scanf("%lf",&A[i][j]);
    }
printf("\nSegunda matriz: B\n");
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        printf("\nDigite o elemento da linha %d e coluna %d: ",i,j);
        scanf("%lf",&B[i][j]);
    }
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        C[i][j]=0;
        for(int k=0;k<3;k++)
        {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
printf("\nMatriz resultante: C\n");
for(int i=0; i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%.3f\t",C[i][j]);
    }
    printf("\n");
}
printf("\n\n\n\n\n");
return(0);
}