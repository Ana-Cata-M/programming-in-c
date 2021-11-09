/*4. Crie um tipo registro chamado Cadastro que tenha os campos 
Nome (Alfanumérico), Ender (Endereco),  Dnasc (Data), Telefone (Alfanumérico). 
No mesmo programa, crie os tipos Data e Endereco. 
Crie um  vetor Contato do tipo Cadastro com 10 elementos.
Faça um programa que leia todos os elementos de  Contato e em seguida os imprima.*/
#include<stdio.h>
int main()
{
typedef struct data{
    int dia;
    int mes;
    int ano;
}Tdata;
typedef struct end{
    char rua[50];
    int num;
    char bairro[50];
    int cep;
}Tend;
typedef struct cadastro{
    char nome[50];
    Tend ender;
    Tdata dnasc;
    char telefone[13];
}Tcad;
Tcad contato[10];
for(int i=0;i<10;i++)
{
    printf("\tCADASTRO\n");
    printf("Nome: ");
    scanf("%s", &contato[i].nome);
    printf("Telefone: ");
    scanf("%s", &contato[i].telefone);
    printf("\nData de nascimento\nDia: ");
    scanf(" %d", &contato[i].dnasc.dia);
    printf("\nMes: ");
    scanf(" %d", &contato[i].dnasc.mes);
    printf("\nAno: ");
    scanf(" %d", &contato[i].dnasc.ano);
    printf("\nEndereco\n");
    printf("Rua: ");
    scanf(" %s", &contato[i].ender.rua);
    printf("\nNumero: ");
    scanf("%d", &contato[i].ender.num);
    printf("\nBairro: ");
    scanf(" %s", &contato[i].ender.bairro);
    printf("\nCEP: ");
    scanf("%d", &contato[i].ender.cep);
}
for(int i=0;i<10;i++)
{
    printf("\nDados do %d.o cliente: ", i+1);
    printf("\nNome: %s", contato[i].nome);
    printf("\nTelefone: %s", contato[i].telefone);
    printf("\nData de nascimento: %d/ %d/ %d\n",contato[i].dnasc.dia, contato[i].dnasc.mes, contato[i].dnasc.ano);
    printf("Rua: %s\n", contato[i].ender.rua);
    printf("Numero: %d\n", contato[i].ender.num);
    printf("Bairro: %s\n", contato[i].ender.bairro);
    printf("CEP: %d", contato[i].ender.cep);
}
return 0;
}
