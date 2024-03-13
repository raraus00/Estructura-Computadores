#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int array[3][6])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = (rand() % (10)) + 1;
        }
    }
}

void sumaColumnas(int array[3][6], int sum[6])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            sum[j] += array[i][j];
        }
    }
}

int main()
{
    srand(time(NULL));

    int array[3][6];
    initArray(array);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n\n\n\n");
    }

    int sum[6] = {0, 0, 0, 0, 0, 0};
    sumaColumnas(array, sum);
    for (int i = 0; i < 6; i++)
    {
        printf("La suma de la columna %d es: %d\n", i + 1, sum[i]);
    }
}