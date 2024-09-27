#include <stdio.h>

int main(int argc, char const *argv[])
{
    double km, l, r = 0;
    scanf("%lf", &km);
    scanf("%lf", &l);
    r = km/l;
    printf("%.3f km/l\n", r);
    return 0;
}
