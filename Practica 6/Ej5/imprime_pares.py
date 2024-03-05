def main():
    n1 = int(input("Introduce un número: "))
    n2 = int(input("Introduce otro número: "))

    while n1 > n2:
        print("Error: El primero debe ser menor que el segundo")
        n1 = int(input("Introduce un número: "))
        n2 = int(input("Introduce otro número: "))

    imprime_pares_intervalo(n1, n2)


def imprime_pares_intervalo(n1, n2):
    for n in range(n2 - n1 - 1):
        if (n2 - n - 1) % 2 == 0:
            print(f"{n2 - n - 1} ", end="")


main()
