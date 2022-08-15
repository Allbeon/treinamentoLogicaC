#include <stdio.h>

int main() {
    
    char nome[30];
    double valorHora, pagamento;
    int horasTrabalhadas;
    
    printf("Nome: ");
    gets(nome);
    
    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    
    printf("horas Trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    
    pagamento = horasTrabalhadas * valorHora;
    
    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);
    
    return 0;
}