/*14. Considerando a estrutura dada a seguir para um vetor no R ao cubo. 
Implemente um programa que calcule a soma de dois vetores.*/
#include<stdio.h>
int main()
{
    struct vetor{
        float x; 
        float y; 
        float z;
    }; 
    struct vetor vetor[2];
    for(int i=0; i<2; i++)
    {
        printf("\nDigite um valor para x:");
        scanf("%f", &vetor[i].x);
        printf("\nDigite um valor para y:");
        scanf("%f", &vetor[i].y);
        printf("\nDigite um valor para z:");
        scanf("%f", &vetor[i].z);
    }
    float vet[3] = {vetor[0].x + vetor[1].x, vetor[0].y + vetor[1].y, vetor[0].z + vetor[1].z};
    for(int i=0; i<3; i++)
    {
        printf("\n%f", vet[i]);
    }

    return 0;
}