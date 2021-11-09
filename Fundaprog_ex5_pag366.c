#include<stdio.h>
int main(){
    typedef struct cadastro{
        char nome[40];
        int horas;
        char turno;
        char categoria;
        float val_hora;
        float sal_ini;
        float aux;
        float sal_fin;
    } Tcad;
    Tcad cad[18];
    int comando;
    int i=0;
    float sal_min = 550.00;

    do{
        printf("\n\tMENU\n");
        printf("1. Cadastrar funcionarios\n");
        printf("2. Mostrar folha de pagamento\n");
        printf("3. Sair\n");

        printf("\nComando: ");
        scanf("%d", &comando);
        if(comando!= 1 && comando!= 2 && comando!=3){
            printf("Opcao invalida");
        }
        else if(comando == 1)
        {
            if (i>= 17){
                printf("Programa de cadastros lotado");
            }
            else{
                printf("\nNome do funcionario: ");
                scanf(" %[^\n]s", cad[i].nome);
                printf("\nNumero de horas trabalhadas no mes: ");
                scanf("%d", &cad[i].horas);
                do{
                    printf("\nCategoria do funcionario: ");
                    scanf(" %[^\n]s", &cad[i].categoria);
                    if (cad[i].categoria != 'O' && cad[i].categoria != 'G'){
                        printf("Opcao invalida");
                    }
                } while(cad[i].categoria != 'O' && cad[i].categoria != 'G');
                do{
                    printf("\nTurno do funcionario: ");
                    scanf(" %[^\n]s", &cad[i].turno);
                    if (cad[i].turno != 'M' && cad[i].turno != 'V' && cad[i].turno != 'N'){
                        printf("Opcao invalida");
                    }
                } while(cad[i].turno != 'M' && cad[i].turno != 'V' && cad[i].turno != 'N');
            
            
                if(cad[i].categoria == 'G')
                {
                    if(cad[i].turno == 'N')
                    {
                        cad[i].val_hora = 0.18 * sal_min;
                    }
                    else
                    {
                        cad[i].val_hora = 0.15 * sal_min;
                    }
                }
                else if(cad[i].categoria == 'O')
                {
                    if(cad[i].turno == 'N')
                    {
                        cad[i].val_hora= 0.13 * sal_min;
                    }
                    else
                    {
                        cad[i].val_hora = 0.10 * sal_min;
                    }
                }
            
                cad[i].sal_ini = cad[i].val_hora * cad[i].horas;

                if(cad[i].sal_ini <= 550.0){
                    cad[i].aux = 0.2 * cad[i].sal_ini;
                }
                else if(cad[i].sal_ini > 550.0 && cad[i].sal_ini< 800.0){
                    cad[i].aux = 0.15 * cad[i].sal_ini;
                }
                else if(cad[i].sal_ini >= 800.0){
                    cad[i].aux = 0.05 * cad[i].sal_ini;
                }

                cad[i].sal_fin = cad[i].sal_ini + cad[i].aux;
                i++;
            }
        }

        else if (comando == 2){
            if(i==0){
                printf("\nNao ha ninguem registrado\n");
            }
            else{
                for(int j = 0; j<i; j++){
                    printf("\tFOLHA DE PAGAMENTO\n");
                    printf("\nNome: %s\n", cad[j].nome);
                    printf("\nNumero de horas trabalhadas: %d\n", cad[j].horas);
                    printf("\nValor da hora trabalhada: R$%f\n", cad[j].val_hora);
                    printf("\nSalario inicial: R$%f\n", cad[j].sal_ini);
                    printf("\nAuxilio alimentacao: R$%f\n", cad[j].aux);
                    printf("\nSalario final (salario inicial + auxilio-alimentacao): R$%f\n", cad[j].sal_fin);
                }
            }
            
        }
    }while(comando!=3);
    return 0;
}
