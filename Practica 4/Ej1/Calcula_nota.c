#include <stdio.h>

void calcula_nota(float mark)
{
    if (mark < 0 || mark > 10)
    {
        printf("Error: La nota debe ser entre 0 y 10");
        return;
    }

    if (mark < 5)
    {
        printf("Suspenso");
        return;
    }

    if (mark >= 5 && mark < 7)
    {
        printf("Aprobado");
        return;
    }

    if (mark >= 7 && mark < 9)
    {
        printf("Notable");
        return;
    }

    if (mark >= 9)
    {
        printf("Sobresaliente");
    }
}

int main()
{
    float mark;

    printf("Introduce una nota: ");
    scanf("%f", &mark);

    calcula_nota(mark);
}