#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h, m, s, total = 0;
    scanf("%d", &total);
    h = total/3600;
    total -= (h*3600);
    m = total/60;
    total -= (m*60);
    s = total;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
