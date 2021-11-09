/*2. Repita o exercício anterior, 
porém considere que a struct deve permitir o armazenamento dos dados de 10 alunos. */
#include <stdio.h>
int main()
{
typedef struct not{
    double notaprova;
    double notatrabalho;
    double media;
    char nome[50];
}Tnot;
Tnot notas[10];
for(int i=0; i<10; i++)
{
    printf("\nCadastro do aluno");
    printf("\nEscreva seu nome: ");
    scanf("%s", &notas[i].nome);
    printf("\nEscreva a nota da prova: ");
    scanf("%lf", &notas[i].notaprova);
    printf("\nEscreva a nota do trabalho: ");
    scanf("%lf", &notas[i].notatrabalho);
    notas[i].media = (notas[i].notaprova+ notas[i].notatrabalho)/2;
}
for(int i=0;i<10;i++)
{
    printf("Dados do %d.o aluno: ", i+1);
    printf("\n Nome: %s", notas[i].nome);
    printf("\n Nota na prova: %lf", notas[i].notaprova);
    printf("\n Nota no trabalho: %lf",notas[i].notatrabalho);
    printf("\n Media: %lf\n", notas[i].media);
}
return 0;
}

