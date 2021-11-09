/*13. A partir do registro indicado para resolver o exercício 12, crie uma estrutura chamada retângulo. Faça um
programa que receba (via teclado) as informações que permitem definir um retângulo e informe: área e o
comprimento de cada aresta.*/
#include <stdio.h>
int main()
{
    struct retangulo{
        float baseumx;
        float baseumy;
        float basedoisx;
        float altura;
    }retangulo;
    float basetotal, alturatotal, area;

    printf("Digite os pontos para um retangulo:\n");
    printf("\nPrimeiro ponto da base (no eixo x): ");
    scanf("%f", &retangulo.baseumx);
    printf("\nPrimeiro ponto da base (no eixo y): ");
    scanf("%f", &retangulo.baseumy);
    printf("\nSegundo ponto da base (no eixo x): ");
    scanf("%f", &retangulo.basedoisx);
    printf("\nPonto para a altura: ");
    scanf("%f", &retangulo.altura);
    
    alturatotal = retangulo.altura - retangulo.baseumy;
    basetotal = retangulo.basedoisx - retangulo.baseumx;
    if (basetotal<0){
        basetotal *= -1;
    }
    if (alturatotal<0){
        alturatotal *= -1;
    }
    area = basetotal * alturatotal;

    printf("\nCada aresta vale: %f, %f, %f, %f", alturatotal, alturatotal, basetotal, basetotal);
    printf("\nA area do retangulo e: %f", area);
    return 0;
}
