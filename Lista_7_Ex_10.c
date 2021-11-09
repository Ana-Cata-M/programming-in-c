#include<stdio.h>
int main()
{
typedef struct cadastro{
    int codcli;
    char email[40];
    int hacesso;
    char pag;
    float custo;
}Tcad;
Tcad cad[2];
float aux;
for(int i=0; i<2; i++)
{
    cad[i].custo = 35.0;
    printf("\nCadastro de clientes\n");
    printf("Codigo do cliente %d: ", i+1);
    scanf("%d", &cad[i].codcli);
    printf("\nEmail do cliente %d: ", i+1);
    scanf(" %[^\n]s", cad[i].email);
    printf("\nNumero de horas de acesso: ");
    scanf("%d", &cad[i].hacesso);
    if(cad[i].hacesso>20)
    {
        aux = cad[i].hacesso - 20;
        aux = aux * 2.5;
        cad[i].custo += aux;
    }
    printf("\nPossui pagina? Sim(S) ou nao(N): ");
    scanf("%s", &cad[i].pag);
    if(cad[i].pag == 'S')
    {
        cad[i].custo += 40;
    }
}
for(int i=0; i<2;i++)
{
    printf("Cliente %d", i+1);
    printf(" Codigo do cliente: %d", cad[i].codcli);
    printf(" Email do cliente: %s",  cad[i].email);
    printf(" Horas de acesso: %d",  cad[i].hacesso);
    printf(" Possui pagina? %c", cad[i].pag);
    printf(" Custo total: %lf\n", cad[i].custo);
}
return(0);    
}