#include <stdio.h>
// Función principal del programa
int main()
{
    float celsius, farenheit;

    printf("Introduce un el número de grados Celsius: ");
    scanf("%f", &celsius);
    printf("La temperatura en Farenheit es: %.2f", (celsius * 9 / 5) + 32);

    printf("\nFin del programa");
}