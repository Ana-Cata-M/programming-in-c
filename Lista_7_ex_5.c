/*5. Faça um programa que, utilizando registros, leia o nome e data de nascimento (dia mês ano) 
de n pessoas  (n = 40), calcule e mostre a idade de cada pessoa e o nome da pessoa mais velha. 
Suponha que não temos  duas (ou mais) pessoas com a mesma idade.*/
#include<stdio.h>
int main()
{
int idade[3], maisvelho, velho=0;
typedef struct data{
    int dia;
    int mes;
    int ano;
}Tdata;
typedef struct cadastro{
    char nome[50];
    Tdata dnasc;
}Tcadastro;
Tcadastro registro[3];
for(int i=0;i<3;i++)
{
    printf("Cadastro \n");
    printf("Escreva seu nome: \n");
    scanf("%[^\n]s", registro[i].nome);
    printf("Qual sua data de nascimento?\n");
    printf("Dia: \n");
    scanf("%d", &registro[i].dnasc.dia);
    printf("Mes: \n");
    scanf("%d", &registro[i].dnasc.mes);
    printf("Ano: \n");
    scanf("%d", &registro[i].dnasc.ano);
    idade[i]= 2021 - registro[i].dnasc.ano;
}
for(int i=0;i<3;i++)
{
    if(idade[i]>velho)
    {
        velho=idade[i];
        maisvelho = i;
    }
}
for(int i=0;i<3;i++)
{
    printf("\n%d.o cadastro", i+1);
    printf("\nNome: %s", registro[i].nome);
    printf("\nData de nascimento: %d/ %d/ %d", registro[i].dnasc.dia, registro[i].dnasc.mes, registro[i].dnasc.ano);
    printf("\nIdade: %d", idade[i]);
}
printf("\nO mais velho e: %s", registro[maisvelho].nome);
//printf("\nIdade do mais velho: %d", velho);
return 0;
}
