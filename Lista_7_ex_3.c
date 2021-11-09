/*3. Faça um programa em Linguagem C para criar um registro que permita armazenar os dados comumente  
contidos em um cheque bancário. O programa deve permitir entrada e saída dos dados.*/
#include <stdio.h>
int main()
{
struct dados{
    double valor;
    char valorext[50];
    char local[50];
    char data[50];
    char dest[50];
    char assin[50];
}dados;
printf("Preencha o cheque \n");
printf("Valor: ");
scanf(" %lf", &dados.valor);
printf("\nValor por extenso: ");
scanf(" %s", &dados.valorext);
printf("\nLocal: ");
scanf(" %s", &dados.local);
printf("\nData: ");
scanf(" %s", &dados.data);
printf("\nDestinatario: ");
scanf(" %s", &dados.dest);
printf("\nAssinatura: ");
scanf(" %s", &dados.assin);
printf("\tCHEQUE\t");
printf("\n______________________________R$ %lf\n", dados.valor);
printf("Pago por esse cheque a quantia de %s\n", dados.valorext);
printf("A %s ou a sua ordem\n", dados.dest);
printf("%s\n", dados.data);
printf("%s", dados.assin);
return 0;
}
