#include <stdio.h>

int main()
{
    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;
    
    printf("Digite a medida a: ");
    scanf("%lf", &a);
    
    printf("Digite a medida b: ");
    scanf("%lf", &b);
    
    printf("Digite a medida C: ");
    scanf("%lf", &c);
    
    areaQuadrado = a * a;
    areaTriangulo = (a * b) / 2;
    areaTrapezio = ((a + b) * c)/ 2;

    printf("Area do QUADRADO %.4lf\n",areaQuadrado);
    printf("Area do TRIANGULO %.4lf\n", areaTriangulo);
    printf("Area do TRAPEZIO %.4lf\n", areaTrapezio);
    
    return 0;
}
