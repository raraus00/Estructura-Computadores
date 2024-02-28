//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa 
int main ()
{
        // Este programa convierte una nota numérica a su
        // calificación correspondiente
     
        // Declaro las variables de mi función
        int num;
        
        //Sustituyo la función ESCRIBA "cadena" por printf
        printf("Escribe el número: ");
        
        //Sustituyo la función LEA num por scanf ("%d", &variableEntera); 
        scanf("%d", &num); //Guarda el número leído en la variable num
        
        //Compruebo qué mes es para imprimir la cadena correspondiente
        switch (num){
            case 1:
                printf("Enero\n");
                break;
            case 2:
                printf("Febrero\n");
                break;
            case 3:
                printf("Marzo\n");
                break;
            case 4:
                printf("Abril\n");
                break;
            case 5:
                printf("Mayo\n");
                break;
            case 6:
                printf("Junio\n");
                break;
            case 7:
                printf("Julio\n");
                break;
            case 8:
                printf("Agosto\n");
                break;
            case 9:
                printf("Septiembre\n");
                break;
            case 10:
                printf("Octubre\n");
                break;
            case 11:
                printf("Noviembre\n");
                break;
            case 12:
                printf("Diciembre\n");
                break;
            default:
               printf("Error: debe ser un número entero entre 1 y 12\n");
        }
        
        //Fin del programa
        return 0;
}