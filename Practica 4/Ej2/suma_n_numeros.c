#include <stdio.h>

int suma_n_primeros_nums(int num)
{
    int total = 0;
    for (int i = 1; i <= num; i++)
    {
        total += i;
    }

    return total;
}

int main()
{
    int num;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &num);

    while (num < 0)
    {
        printf("Error: El número debe ser positivo\n");

        printf("Vuelve a introducirlo: ");
        scanf("%d", &num);
    }

    printf("La suma de los %d primeros enteros es: %d", num, suma_n_primeros_nums(num));
}