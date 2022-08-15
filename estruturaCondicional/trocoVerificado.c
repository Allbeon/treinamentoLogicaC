#include <stdio.h>

int main() {
    double precoUnitario, dinheiroRecebido, valorTotal, troco;
    int qnt;
    
    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    
    printf("Quantidade Comprada: ");
    scanf("%d", &qnt);
    
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);
    
    valorTotal = qnt * precoUnitario;
    
    if (valorTotal < dinheiroRecebido) {
        
        troco = dinheiroRecebido - valorTotal;
        printf("TROCO = %.2lf", troco);
        
    } else {
        
        troco = valorTotal - dinheiroRecebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", troco);
        
    }

    return 0;
}
