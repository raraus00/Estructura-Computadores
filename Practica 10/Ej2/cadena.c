#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quitaEspacios(char *cadena, char *cadenain);

int main()
{
    int tam;
    char *cadena, *cadenain;

    printf("Introduce la longitud de cadena: ");
    scanf("%d", &tam);

    cadena = (char *)malloc((tam+1)*sizeof(char));
    cadenain = (char *)malloc((tam+1)*sizeof(char));

    printf("Introduce el texto de hasta %d caracteres para la cadena: ", tam);
    scanf(" ");
    fgets(cadena, tam, stdin);

    printf("La cadena es: %s", cadena);
    quitaEspacios(cadena, cadenain);
    printf("La cadena sin espacios es: %s", cadenain);

    return 0;
}

void quitaEspacios(char *cadena, char *cadenain) {
    int i = 0, j = 0;
    while(cadena[i] != '\0') {
        if (cadena[i] != ' ') {
            cadenain[j] = cadena[i];
            j++;
        }

        i++;
    }

    cadenain[j] = '\0';
}