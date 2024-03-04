#include <stdio.h>

int calcula_multiplos_intervalo(int a, int b, int c)
{
    int total = 0;

    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
        {
            total++;
        }
    }

    return total;
}

int main()
{
    int a, b, c;

    do
    {
        printf("Introduce el primer número: ");
        scanf("%d", &a);

        printf("Introduce el segundo número: ");
        scanf("%d", &b);

        printf("Introduce el tercer número: ");
        scanf("%d", &c);

        if (a > b || c < 0)
        {
            puts("Error: números no válidos\n");
        }
    } while (a > b || c < 0);

    printf("Hay %d múltipos de %d entre %d y %d", calcula_multiplos_intervalo(a, b, c), c, a, b);
    return 0;
}