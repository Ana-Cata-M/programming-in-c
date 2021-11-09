/*11. Faça um programa que, utilizando registros, leia o nome e a data de nascimento (dia, mês e ano) de 10
pessoas. O programa deve calcular e mostrar a idade de cada pessoa, bem como o nome da pessoa mais
velha.*/
#include<stdio.h>
#define n_elementos 4
#define dia_hoje 12
#define mes_hoje 8
#define ano_hoje 2021

int main(){
	typedef struct data{
		int dia;
		int mes;
		int ano;
	}Tdata;
	struct cadastro{
		char nome[40];
		Tdata nascto;
		int idade;
	}Tcad[n_elementos];
	
	int maior_idade, maior_i, maiores_is[10], maiores_idades[10], flag=0, v=0;
	
	for (int i=0; i<n_elementos; i++){
		printf("\n\t\tDigite o nome: ");
		scanf(" %[^\n]s",Tcad[i].nome);
		setbuf(stdin, NULL); 
        printf("\n\t\t\tDigite a data de nascimento ");
		do{
            printf("\n\t\tDia: ");
            scanf ("%d", &Tcad[i].nascto.dia);
        }while((Tcad[i].nascto.dia>31) || (Tcad[i].nascto.dia<1));
        do{
            printf("\n\t\tMes: ");
            scanf ("%d", &Tcad[i].nascto.mes);
        }while((Tcad[i].nascto.mes>12) || (Tcad[i].nascto.dia<1));
		
		printf("\n\t\tAno (4 digitos): ");
		scanf ("%d", &Tcad[i].nascto.ano);
		setbuf(stdin, NULL); 
		
		
		Tcad[i].idade = ano_hoje - Tcad[i].nascto.ano; 
		if (Tcad[i].nascto.mes>mes_hoje){ 
			Tcad[i].idade = Tcad[i].idade - 1;
		} else if (Tcad[i].nascto.mes == mes_hoje) { 
			if (Tcad[i].nascto.dia>dia_hoje){
				Tcad[i].idade = Tcad[i].idade - 1;
			}
		}
		
		if (i==0){ 
			maior_idade = Tcad[i].idade;
			maior_i = i;
			maiores_idades[v] = Tcad[i].idade;
			maiores_is[v] = i;
			v++;
		} else if (Tcad[i].idade > maior_idade) {
			maior_idade = Tcad[i].idade;
			maior_i = i;
            flag = 0;
		} else if(Tcad[i].idade == maior_idade){
			for(int i = 0; i<v; i++){
				if(maior_idade != maiores_idades[i]){
					v = 0;
					maior_idade = maiores_idades[v];
				}
				else{
					maiores_idades[v] = Tcad[i].idade;
					maiores_is[v] = i;
				}
			}
			v++;			
            flag++;
        }
		printf("\n%d", maiores_is[i]);
	}
	
	for (int i=0; i<n_elementos; i++){
		printf("\n\nNome ...: %s",Tcad[i].nome);
		printf("\nIdade ...: %d",Tcad[i].idade);
	}
	if(flag==0){
        printf("\n\nPessoa mais velha: %s",Tcad[maior_i].nome);
    } 
    else{
		printf("\n\nPessoas mais velhas:");
        for(int i=0; i<v; i++){
            printf("\n%s",Tcad[maiores_is[i]].nome);
        }
    }
  
	return 0;
}
