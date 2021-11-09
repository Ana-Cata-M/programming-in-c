#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define m 5
#define n 5 
int main() 
{
    srand(time(NULL));
    int bingo[m][n], i, j, k, aux[25], pos=0, sorteio, flag=0;
    for(i=0; i<m; i++) 
    {
        for(j=0; j<n; j++)
        {
            flag=0;
            if(pos==0)
            {
                sorteio = rand()%100;
                bingo[i][j]=sorteio;
                aux[pos]=sorteio;
                pos++;
            }
            else
            {
                do
                {
                    flag=0;
                    sorteio = rand()%100;
                    for(int k=0; k<pos; k++)
                    {
                        if(aux[k]==sorteio)
                        {
                            flag=1;
                        }
                    }
                }while(flag==1);  
                aux[pos]=sorteio;
                pos++;
                bingo[i][j]=sorteio;
            }
        } 
    }  
   printf("Cartela do bingo\n");
   for(i=0;i<m;i++)
   {
       putchar('\n');
       for(j=0;j<n;j++)
       {
           printf("[%d]", bingo[i][j]);
       }
   }
   return(0);
}