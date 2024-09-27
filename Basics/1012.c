#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c = 0;
    double tri, cir, tra, cua, rec = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    tri = (a*c)/2;
    cir = 3.14159 * (c*c);
    tra = ((a+b)/2)*c;
    cua = b*b;
    rec = b*a;
    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", cir);
    printf("TRAPEZIO: %.3f\n", tra);
    printf("QUADRADO: %.3f\n", cua);
    printf("RETANGULO: %.3f\n", rec);
    return 0;
}
