#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, m, d = 0;
    scanf("%d", &d);
    a = d / 365;
    d -= (a * 365);
    m = d / 30;
    d -= (m * 30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
    return 0;
}
