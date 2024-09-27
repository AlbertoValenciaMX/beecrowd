#include <stdio.h>
#include <math.h>

int main(){

    double r;
    double pi = 3.14159;
    double v = 0.0;
    scanf("%lf", &r);
    v = (4/3.0) * pi * pow(r, 3);
    printf("VOLUME = %.3f\n", v);
    return 0;
}