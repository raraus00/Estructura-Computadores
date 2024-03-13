#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % (11);
    }
}

int suma(int array[10])
{
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        total += array[i];
    }

    return total;
}

int main()
{
    srand(time(NULL));

    int array[10];
    initArray(array);

    printf("La suma total de los 10 números aleatorios es: %d", suma(array));
}