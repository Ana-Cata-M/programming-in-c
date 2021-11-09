/*1. Faça um programa em Linguagem C para criar uma estrutura composta pelos campos: 
notaprova,  notatrabalho, média e nome. O programa deve permitir a leitura do nome e notas de um aluno. 
Em  seguida, o programa deve calcular a média e armazenar no campo correspondente. Imprimir os dados. */
#include<stdio.h>
int main()
{
struct notas{
    double notaprova;
    double notatrabalho;
    double media;
    char nome[50];
}notas;
printf("Escreva seu nome: \n");
scanf("%s", &notas.nome);
printf("Escreva a nota da prova: \n");
scanf("%lf", &notas.notaprova);
printf("Escreva a nota do trabalho: \n");
scanf("%lf", &notas.notatrabalho);
notas.media = (notas.notaprova+ notas.notatrabalho)/2;
printf("Dados: ");
printf("\n Nome: %s", notas.nome);
printf("\n Nota na prova: %lf", notas.notaprova);
printf("\n Nota no trabalho: %lf",notas.notatrabalho);
printf("\n Media: %lf\n", notas.media);
return 0;
}
