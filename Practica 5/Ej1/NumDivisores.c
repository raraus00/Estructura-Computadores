#include <stdio.h>

int calcula_divisores(int num)
{
    int total = 0;

    for (int i = num; i > 0; i--)
    {
        if (num % i == 0)
        {
            total++;
        }
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

    printf("El número %d tiene %d divisores", num, calcula_divisores(num));
}