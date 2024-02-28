#include <stdio.h>

int menu()
{
    int option;

    printf("-----MENÚ-----\n");
    printf("1. Volumen cono\n");
    printf("2. Volumen ortoedro\n");
    printf("3. Salir\n");
    printf("--------------\n\n");

    printf("Introduce una opción: ");
    scanf("%d", &option);

    while (option < 1 && option > 3)
    {
        printf("Error: Debes seleccionar una de las opciones dispoibles\n");

        printf("Introduce una opción: ");
        scanf("%d", &option);
    }

    return option;
}

float volumen_cono(float r, float h)
{
    return (3.14159 * r * r * h) / 3;
}

float volumen_ortoedro(float a, float b, float c)
{
    return a * b * c;
}

int main()
{
    switch (menu())
    {
    case 1:
    {
        float r, h;

        printf("Introduce un radio: ");
        scanf("%f", &r);

        printf("Introduce una altura: ");
        scanf("%f", &h);

        printf("\nEl volumen del cono es: %.2f", volumen_cono(r, h));
        break;
    }

    case 2:
    {
        float a, b, c;

        printf("Introduce un ancho: ");
        scanf("%f", &a);

        printf("Introduce un alto: ");
        scanf("%f", &b);

        printf("Introduce un largo: ");
        scanf("%f", &c);

        printf("\nEl volumen del ortoedro es: %.2f", volumen_ortoedro(a, b, c));
        break;
    }
    }
}