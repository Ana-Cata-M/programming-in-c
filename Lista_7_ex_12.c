/*12. Faça um programa capaz de ler as coordenadas (x e y) que definem cinco pontos em um plano cartesiano.
Considere o primeiro ponto como referência e, em seguida, o programa deve imprimir o ponto lido que
tem a menor distância em relação ao ponto de referência. Apresente também a distância entre os dois
pontos.*/
#include <stdio.h>
#include <math.h>
int main()
{
    typedef struct{
        float x;
        float y;
        float difx;
        float dify;
        float diftotal;
    }coordenadas;
    coordenadas coord[5];
    float menordif;
    float xmaisproximo;
    float ymaisproximo;
    
    printf("Digite cinco pontos de um plano cartesiano:\n");
    for(int i=0; i<5; i++)
    {
        printf("\nPonto x [%d]: ", i+1);
        scanf("%f", &coord[i].x);
        printf("\nPonto y [%d]: ", i+1);
        scanf("%f", &coord[i].y);
        if(i > 0)
        {
            coord[i].difx = coord[i].x - coord[0].x;
            coord[i].dify = coord[i].y - coord[0].y;
            coord[i].diftotal = sqrt((pow(coord[i].difx, 2)) + (pow(coord[i].dify, 2)));
        }
    }  
   
    for(int i = 1; i < 5; i++)
    {
        if (i == 1)
        {
            menordif = coord[i].diftotal;
            xmaisproximo = coord[i].x;
            ymaisproximo = coord[i].y;
        }
        else if(coord[i].diftotal< menordif)
        {
            menordif = coord[i].diftotal;
            xmaisproximo = coord[i].x;
            ymaisproximo = coord[i].y;
        }
    }

        printf("\nO ponto mais proximo do primeiro ponto e: (%f)(%f)", xmaisproximo, ymaisproximo);
        printf("\nA distancia entre eles e: %f", menordif);

    return 0;
}
