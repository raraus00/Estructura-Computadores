#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int array[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = (rand() % (13)) + 3;
        }
    }
}

int main()
{
    srand(time(NULL));

    int array[5][5];
    initArray(array);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n\n\n\n");
    }
}