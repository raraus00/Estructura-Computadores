#include <stdio.h>
#include <stdbool.h>

bool calcula_si_es_primo(int num)
{
    int total = 0;

    for (int i = num; i > 0; i--)
    {
        if (num % i == 0)
        {
            total++;
        }
    }

    return total == 2;
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

    if (calcula_si_es_primo(num))
    {
        printf("El número %d es primo", num);
        return 0;
    }

    printf("El número %d no es primo", num);
}