#include <stdio.h>
#include <math.h>

int main()
{
    double area, raio, pi;
    
    printf("Digire o valor do raio: ");
    scanf("%lf", &raio);
    
    pi = 3.14159;
    area = pi * pow(raio, 2);

    printf("AREA = %.3lf", area);

    return 0;
}