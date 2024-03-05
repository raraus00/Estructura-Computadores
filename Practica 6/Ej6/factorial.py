def main():
    n = int(input("Introduce un número entero: "))
    print(f"Factorial de {n} ({n}!) es: {factorial(n)}")


def factorial(num):
    total = 1
    for n in range(num):
        total *= num - n

    return total

main()