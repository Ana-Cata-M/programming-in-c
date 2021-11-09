#include <stdio.h>
int main()
{
    int fib1=0, fib2=1, vet[20], i, j, n;
    printf("Digite um numero n entre 0 e 20: ");
    scanf("%d", &n);
    printf("\nSerie de Fibonacci com os elementos ate n:\n\n");
    for(i=0; i<=n;i++)
    { 
        if(i==0)
            vet[i]=0;
        else if (i==1)
            vet[i]=1;        
        else
        {
            vet[i] = fib1 + fib2;
            fib1 = fib2;
            fib2 = vet[i];
        }
        printf("%d\n", vet[i]);
    }
    printf("\nSerie de Fibonacci inversa com os elementos ate n:\n\n");
    for(j = n; j>=0; j--) 
    {
        printf("%d\n", vet[j]);
    }
    return 0;
}