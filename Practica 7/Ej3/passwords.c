#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(char array[26])
{
    for (int i = 0; i < 25; i++)
    {
        array[i] = i + 97;
    }
}

int main()
{
    srand(time(NULL));

    char array[26];
    initArray(array);

    char password[9];
    for (int i = 0; i < 8; i++)
    {
        password[i] = array[rand() % (27)];
    }

    password[8] = '\0';
    printf("Contraseña generada: %s", password);
}