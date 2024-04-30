#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];

    printf("Introduce el texto de la cadena: ");
    gfets(cadena, 100, stdin);

    printf("\nCadena: %s", cadena);

    printf("\n\nLogitud de la cadena: %1d caracteres", strlen(cadena));
    //printf("\nEs igual a 'compara': %d", strcmp(cadena, compara));
    //printf("\n");



    return 0;
}