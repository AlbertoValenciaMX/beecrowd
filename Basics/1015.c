#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x1, x2, y1, y2, d = 0;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    d = sqrt(pow((x2 - x1), 2) + pow((y1 - y2), 2));
    printf("%.4f\n", d);
    return 0;
}
