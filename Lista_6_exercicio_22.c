#include<stdio.h>
int main()
{
    printf("Digite como o tabuleiro do jogo da velha esta, preenchendo com -1 e 1:\n");
    int tab[3][3], i, j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &tab[i][j]);
            while((tab[i][j]!=0)&&(tab[i][j]!= 1)&&(tab[i][j]!= -1))
            {
                printf("Elemento invalido, digite novamente!\n");
                printf("Elemento [%d][%d] = ", i, j);
                scanf("%d", &tab[i][j]);
            }
        }      
    }
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            printf ("[%d]", tab[i][j]);
        }
    }
}