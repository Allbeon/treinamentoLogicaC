#include <stdio.h>

int main()
{
    int distPercorrida;
    double combGasto, media;
    
    printf("Distancio percorrida: ");
    scanf("%d", &distPercorrida);
    
    printf("Combustivel gasto: ");
    scanf("%lf", &combGasto);
    
    media = distPercorrida / combGasto;
    
    printf("Consumo Medio = %.3lf", media);

    return 0;
}
