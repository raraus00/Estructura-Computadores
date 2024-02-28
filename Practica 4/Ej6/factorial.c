#include <stdio.h>

int factorial(int num)
{
    int total = num;
    for (int i = num - 1; i != 0; i--)
    {
        total *= i;
    }

    return total;
}

int main()
{
    int num;

    printf("Introduce un número: ");
    scanf("%d", &num);

    printf("Factorial de %d es: %d", num, factorial(num));
}