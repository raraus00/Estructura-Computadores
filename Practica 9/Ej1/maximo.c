#include <stdio.h>
#include <stdlib.h>

int calculaMaximo(int size, int *punt);

int main()
{
    int size;

    printf("Indica el cuántos números enteros vas a introducir: ");
    scanf("%d", &size);

    int *punteroNumeros = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        int num;

        printf("Introduce un número: ");
        scanf("%d", &num);

        *(punteroNumeros + i) = num;
    }

    printf("\nEl número máximo es: %d", calculaMaximo(size, punteroNumeros));

    return 0;
}

int calculaMaximo(int size, int *punt)
{
    printf("Los números introducidos son: ");

    int num = *punt;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(punt + i));

        if (*(punt + i) > num)
        {
            num = *(punt + i);
        }
    }

    return num;
}