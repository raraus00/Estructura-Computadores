//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa 
int main ()
{
     // Este programa calcula la potencia de un número
     
     // Declaro las variables de mi función
     int base, exponente, pot, i;
     
     //Sustituyo la función ESCRIBA "cadena" por printf
     printf("Escribe un número (base): ");
     
     //Sustituyo la función LEA base por scanf ("%d", &variableEntera); 
     scanf("%d", &base); //Guarda el número leído en la variable base
     
     //Sustituyo la función ESCRIBA "cadena" por printf
     printf("Escribe un número (exponente): ");
     //Sustituyo la función LEA exp por scanf ("%d", &variableEntera);
     scanf("%d", &exponente); //Guarda el número leído en la variable exponente
     
     //Compruebo que la base y el exponente sean mayores que 1
     if ((base >= 1) && (exponente >= 1)){
        //Inicializo las variables
        pot = 1;

        for (i = base; i >= 1; i--)
        {
            pot = pot * base;
            exponente = exponente - 1;
        }
          
        //Sustituyo la función ESCRIBA por printf
        printf("La potencia es: %d", pot); }
     else {
          //Sustituyo la función ESCRIBA "cadena" por printf
          printf("Error, la base y el exponente han de ser mayores o iguales a 1"); 
     }
     
     //Fin del programa´
     return 0;
}