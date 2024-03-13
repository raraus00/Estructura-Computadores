#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int array[6][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = (rand() % (10)) + 1;
        }
    }
}

int suma(int array[6][6])
{
    int total = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            total += array[i][j];
        }
    }

    return total;
}

int main()
{
    srand(time(NULL));

    int array[6][6];
    initArray(array);

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n\n\n\n");
    }

    printf("La suma de los elementos es: %d", suma(array));
}