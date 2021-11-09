/*6. Construir um programa em linguagem C para controlar o estoque de um produto. 
Especificamente, o  programa deve usar um registro composto por um campo (valor numérico)
que representa baixas do  produto por dia da semana. 
Assim, um vetor com seis posições indicará que cada uma define um dia útil  da semana (incluindo o sábado).
O programa deve permitir leitura e escrita dos dados. O modelo é dado a  seguir:*/
#include<stdio.h>
int main()
{
typedef struct cadastro{
    char nome[50];
    int codigo;
    double preco;
    int inicial;
    int dia[5];
    int baixa;
} Tcad;
Tcad estoque[5];
for(int i=0; i<5; i++)
{
    printf("Nome do produto: \n");
    scanf("%s", &estoque[i].nome);
    printf("Codigo do produto: \n");
    scanf("%d", &estoque[i].codigo);
    printf("Preco do produto: \n");
    scanf("%f", estoque[i].preco);
    printf("Quantidade inicial do produto: \n");
    scanf("%d", &estoque[i].inicial);
    printf("Baixa do %d.o dia da semana: \n", i+1);
    

}




}