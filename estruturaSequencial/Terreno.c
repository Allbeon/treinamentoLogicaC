#include <stdio.h>

int main()
{
    
    double largura, comprimento, valorMetroQuadrado, areaTerreno, precoTerreno;
    
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMetroQuadrado);
    
    areaTerreno = largura * comprimento;
    precoTerreno = areaTerreno * valorMetroQuadrado;
    
    printf("\nArea do terreno = %.2lf\n", areaTerreno);
    printf("Preco do terreno = %.2lf\n", precoTerreno);
    
    return 0;
}