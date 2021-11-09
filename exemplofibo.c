#include <stdio.h>
int main()
{
    int fib1=0, fib2=1, vet[20], i, j, n;
    printf("Digite um numero n entre 0 e 20: ");
    scanf("%d", &n);
    printf("\nSerie de Fibonacci com os elementos ate n:\n\n");
    if (n >= 0) 
    {
        printf("%d\n", fib1);
    }
    if (n >= 1) 
    {
        printf("%d\n", fib2);
    }
    for(i = 2; i <= n-1; i++) 
    {
        vet[i] = fib1 + fib2;
        fib1 = fib2;
        fib2 = vet[i];
        printf("%d\n", vet[i]);
    }
    printf("\nSerie de Fibonacci inversa com os elementos ate n:\n\n");
    for(j = n; j>=0; j--) 
    {
        printf("%d\n", vet[j]);
    }
}