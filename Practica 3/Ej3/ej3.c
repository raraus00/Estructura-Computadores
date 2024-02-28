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
        printf("Escribe la nota numérica: ");
        
        //Sustituyo la función LEA num por scanf ("%d", &variableEntera); 
        scanf("%d", &num); //Guarda el número leído en la variable num
        
        //Compruebo qué nota es para imprimir la cadena correspondiente
        switch (num){
            //Sustituyo la función ESCRIBA "cadena" por printf
            
            //Imprimo lo mismo si la nota es 5 o si es 6
            case 5:
            case 6: 
                printf("Aprobado\n");
                break; //Sale del switch porque ya entró en un caso
            //Imprimo lo mismo si la nota es 7 o si es 8
            case 7:
            case 8: 
                printf("Notable\n");
                break; //Sale del switch porque ya entró en un caso
            //Imprimo lo mismo si la nota es 9 o si es 10
            case 9:
            case 10: 
                printf("Sobresaliente\n");
                break; //Sale del switch porque ya entró en un caso
            //Si no es ningún valor de los anteriores, Suspenso
            default:
               printf("Suspenso\n");
        }
        
        //Fin del programa
        return 0;
}