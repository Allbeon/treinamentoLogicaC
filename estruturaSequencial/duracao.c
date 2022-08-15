#include <stdio.h>

int main() {
    int duracao, resto, hora, minuto, segundo;
    
    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);
    
    hora = duracao / 3600;
    resto = duracao % 3600;
    
    minuto = resto / 60;
    segundo = resto % 60;
    
    printf("%d:%d:%d", hora, minuto, segundo);
    
    return 0;
}