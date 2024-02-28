#include <stdio.h>

void imprime_pares_intervalo(int a, int b)
{
    for (int i = b - 1; i > a; i--)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        printf("%d ", i);
    }
}

int main()
{
    int a, b;

    printf("Introduce un número: ");
    scanf("%d", &a);

    printf("Introduce otro número mayor que el anterior: ");
    scanf("%d", &b);

    while (a >= b)
    {
        printf("Error: El segundo número debe ser mayor que el primero\n");

        printf("Vuelve a introducirlo: ");
        scanf("%d", &b);
    }

    imprime_pares_intervalo(a, b);
}