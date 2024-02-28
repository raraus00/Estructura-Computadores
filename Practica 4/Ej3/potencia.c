#include <stdio.h>

int potencia(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    int total = base;
    for (int i = 1; i < exponent; i++)
    {
        total *= base;
    }

    return total;
}

int main()
{
    int base, exponent;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &base);

    while (base < 0)
    {
        printf("Error: El número debe ser positivo\n");

        printf("Vuelve a introducirlo: ");
        scanf("%d", &base);
    }

    printf("Introduce un número entero positivo: ");
    scanf("%d", &exponent);

    while (exponent < 0)
    {
        printf("Error: El número debe ser positivo\n");

        printf("Vuelve a introducirlo: ");
        scanf("%d", &exponent);
    }

    printf("%d elevado a %d es: %d", base, exponent, potencia(base, exponent));
}