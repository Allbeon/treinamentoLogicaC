#include <stdio.h>

int main()
{
    double precoProduto, dinheiroRecebido, troco;
    int qnt;
    
    printf("Preco Unitario do produto: ");
    scanf("%lf", &precoProduto);
    
    printf("Quantidade Comprada: ");
    scanf("%d", &qnt);
    
    printf("Dinheiro Recebido: ");
    scanf("%lf", &dinheiroRecebido);
    
    troco = dinheiroRecebido - (precoProduto * qnt);
    
    printf("\nTROCO = %.2lf", troco);
    
    return 0;
}
