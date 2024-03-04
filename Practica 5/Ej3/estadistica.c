#include <stdio.h>
#include <math.h>

int menu()
{
    int option;

    do
    {
        puts("\n----MENÚ----");
        puts("1. Media");
        puts("2. Desviación típica");
        puts("3. Salir");
        puts("------------\n");

        printf("Introduce una opción: ");
        scanf("%d", &option);
    } while (option < 1 || option > 3);

    return option;
}

float media()
{
    int n1, n2, n3, n4, n5;

    printf("Inroduce 5 números separados por un espacio: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    return (n1 + n2 + n3 + n4 + n5) / 5;
}

float desviacion()
{
    int n1, n2, n3, n4, n5;

    printf("Inroduce 5 números separados por un espacio: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int mean = (n1 + n2 + n3 + n4 + n5) / 5;

    return sqrt((pow(n1 - mean, 2) + pow(n2 - mean, 2) + pow(n3 - mean, 2) + pow(n4 - mean, 2) + pow(n5 - mean, 2)) / 5);
}

int main()
{
    switch (menu())
    {
    case 1:
        printf("La media es: %.2f", media());
        break;
    case 2:
        printf("La desviación típica es: %.2f", desviacion());
        break;
    }
}