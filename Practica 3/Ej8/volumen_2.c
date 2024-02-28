#include <stdio.h>

int main()
{
    int option;

    do
    {

        printf("-----MENÚ-----\n");
        printf("1. Volumen cono\n");
        printf("2. Volumen ortoedro\n");
        printf("3. Salir\n");
        printf("--------------\n\n");

        printf("Introduce una opción: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            float r, h;

            printf("Introduce un radio: ");
            scanf("%f", &r);

            printf("Introduce una altura: ");
            scanf("%f", &h);

            if (r < 0 || h < 0)
            {
                printf("\nError: Los valores no son positivos\n\n");
            }
            else
            {
                printf("\nEl volumen del cono es: %.2f\n\n", (3.14159 * r * r * h) / 3);
            }
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

            if (a < 0 || b < 0 || c < 0)
            {
                printf("\nError: Los valores no son positivos\n\n");
            }
            else
            {
                printf("\nEl volumen del ortoedro es: %.2f\n\n", a * b * c);
            }
            break;
        }
        default:
            if (option != 3)
            {
                printf("Error: Debes seleccionar una opción del menú\n\n");
            }
        }
    } while (option != 3);

    return 0;
}