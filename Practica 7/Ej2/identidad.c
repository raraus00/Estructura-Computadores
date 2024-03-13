#include <stdio.h>

void initArray(int array[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            array[i][j] = i == j ? 1 : 0;
        }
    }
}

int main()
{
    int array[9][9];
    initArray(array);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n\n\n\n");
    }
}