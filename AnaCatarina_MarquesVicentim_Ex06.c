#include <stdio.h>  
int main() 
{ 
int vet[8],maior=0, menor=0, diferenca=0;
for(int i=0; i<8; i++)
{
    printf("\nDigite o %do. valor inteiro:\n",i+1);
    scanf("%d",&vet[i]);
    if(i==0) 
    {
        maior=vet[i];
    }
    else
    {
        if(vet[i]>maior)
        maior=vet[i];
    } 
}
for(int i=0; i<8; i++)
{
    if(i==0)
    {
        menor=vet[i];
    }
    else
    {
        if(vet[i]<menor)
        menor=vet[i];
    } 
}
printf("O vetor e:\n");
for(int i=0; i<8; i++)
{
    printf("%d\n", vet[i]);
}
printf("Maior numero: %d\n", maior);
printf("Menor numero: %d\n", menor);
diferenca= maior - menor;
printf("Diferenca: %d\n", diferenca);
if(diferenca==0)
{
    printf("Nao e possivel fazer divisao por zero!");
} 
for(int i=0; i<8; i++)
{
    if(diferenca!=0)
    {
        printf("%d / %d = %.2f\n",vet[i],diferenca,(float)vet[i]/diferenca);
    }
} 
return 0;
} 
