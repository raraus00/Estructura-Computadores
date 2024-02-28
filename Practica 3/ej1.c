//Librería que contiene las funciones scanf y printf
#include <stdio.h>
//Función principal del programa
int main () 
{
    // Este programa indica si el número leído por teclado es 3

    // Declaro las variables de mi función
    int num;

    //Sustituyo la función ESCRIBA “cadena” por printf
    printf("Escribe un número: ");

    //Sustituyo la función LEA num por scanf (“%d”, &variableEntera); 
    scanf("%d", &num); //Guarda el número leído en la variable num

    //Compruebo si el número introducido es el 3
    if (num == 3){
        //Sustituyo la función ESCRIBA “cadena” por printf
        printf("Has introducido un 3\n");
    }

    else {
        //Sustituyo la función ESCRIBA “cadena” por printf 
        printf("No has introducido un 3 sino un %d\n", num);
    }

    //Sustituyo la función ESCRIBA “cadena” por printf
    printf("Fin del algoritmo\n");
     
    //Fin del programa
    return 0;
}