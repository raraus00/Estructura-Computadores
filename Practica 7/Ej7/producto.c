#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(int array[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = (rand() % (5)) + 1;
        }
    }
}

void producto(int array1[3][3], int array2[3][3], int array3[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array3[i][j] = array1[i][j] * array2[j][i];
        }
    }
}

int main()
{
    srand(time(NULL));
    
    int array1[3][3];
    int array2[3][3];
    int array3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    inicializa(array1);
    inicializa(array2);

    producto(array1, array2, array3);

    printf("Matriz 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array1[i][j]);
        }
        printf("\n\n\n\n");
    }

    printf("Matriz 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array2[i][j]);
        }
        printf("\n\n\n\n");
    }

    printf("Resultado:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array3[i][j]);
        }
        printf("\n\n\n\n");
    }
}