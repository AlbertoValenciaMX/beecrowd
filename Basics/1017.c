#include <stdio.h>

int main(int argc, char const *argv[])
{
    double h, v, l = 0;
    scanf("%lf", &h);
    scanf("%lf", &v);
    l = (h*v)/12;
    printf("%.3f\n", l);
    return 0;
}
