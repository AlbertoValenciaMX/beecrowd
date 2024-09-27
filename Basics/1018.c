#include <stdio.h>

int main(int argc, char const *argv[])
{
    int billetes[] = {100, 50, 20, 10, 5, 2, 1};
    int total[] = {0, 0, 0, 0, 0, 0, 0};
    int monto, cantidad ,index = 0;
    scanf("%d", &monto);
    cantidad = monto;
    while (monto > 0)
    {
        if (monto / billetes[index] >= 1)
        {
            monto -= billetes[index];
            total[index]++;
        }
        else
        {
            index++;
        }
    }
    printf("%d\n", cantidad);
    for(int i = 0; i < 7; i++)
		{
			printf("%d nota(s) de R$ %d,00\n", total[i], billetes[i]);
		}
    return 0;
}
