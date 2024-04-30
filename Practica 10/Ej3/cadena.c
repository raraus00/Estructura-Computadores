#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void invierte(char *cadena, char *cadena2);

int main() {
    char *cadena, *cadena2;

    cadena = (char *)malloc(101*sizeof(char));
    cadena2 = (char *)malloc(101*sizeof(char));

    printf("Introduce una cadena de hasta 100 caracteres: ");
    fgets(cadena, 101, stdin);

    printf("\nLa cadena es: %s", cadena);
    invierte(cadena, cadena2);
    printf("\nLa cadena invertida es: %s", cadena2);
}

void invierte(char *cadena, char *cadena2) {
    int i = strlen(cadena) - 1, j = 0;

    while (i > 0) {
        cadena2[j] = cadena[i];
        i--;
        j++;
    }

    cadena2[100] = '\0';
}