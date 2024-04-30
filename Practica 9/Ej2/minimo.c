#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N = 3;
int M = 3;

int calculaminimo(int matriz[N][M]);
void inicializamatriz(int matriz[N][M]);

int main()
{
    srand(time(NULL));
    int matriz[N][M];

    inicializamatriz(matriz);
    printf("El mínimo es: %d", calculaminimo(matriz));

    return 0;
}

int calculaminimo(int matriz[N][M])
{
    int min = matriz[0][0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; M; j++)
        {
            if (matriz[i][j] < min)
            {
                min = matriz[i][j];
            }
        }
    }

    return min;
}

void inicializamatriz(int matriz[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matriz[i][j] = rand() % 11;
        }
    }
}