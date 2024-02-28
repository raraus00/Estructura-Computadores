#include <stdio.h>
// Función principal del programa
int main()
{
    // Este programa convierte los km leídos en millas, yardas y pies
    // mostrando el resultado por pantalla
    // Declaro las variables de mi función
    float Km, Millas, Yardas, Pies;
    // Sustituyo la función ESCRIBA "cadena" por printf
    printf("Escribe un número de kilómetros : ");
    // Sustituyo la función LEA Km por scanf ("%f", &variableReal); 
    scanf("%f", &Km); //Guarda el número leído en la variable Km
    // Convierto los km a millas:
    Millas = Km / 1.60;
    // Convierto los km a pies:
    Pies = Km * 100000 / 30.48;
    // Convierto los km a yardas:
    Yardas = Km * 100000 / 91.44;
    // Imprimo los resultados printf("Las millas son: "); 
    printf("Las millas son: %.2f \nLas yardas son: %.2f \nLos pies son: %.2f \nFin del algoritmo\n", Millas, Yardas, Pies);
    // Fin del programa
    return 0;
}