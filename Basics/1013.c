#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, r, res = 0;
    scanf("%d %d %d", &a, &b, &c);
    r = (a + b + abs(a - b)) / 2;
    res = (r + c + abs(r - c)) / 2;
    printf("%d eh o maior\n", res);
    return 0;
}
