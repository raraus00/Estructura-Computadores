#include <stdio.h>

int calcula_unos(int num)
{
    int total = 0;

    while (num != 0)
    {
        if ((num & 1) == 1)
        {
            total++;
        }

        num = num >> 1;
    }

    return total;
}

int main()
{
    int num;

    printf("Introduce un número positivo: ");
    scanf("%d", &num);

    while (num < 0)
    {
        puts("Error: El número debe ser positivo");

        printf("Introduce un número positivo: ");
        scanf("%d", &num);
    }

    printf("\nEl número %d leído en binario tiene %d unos", num, calcula_unos(num));
}