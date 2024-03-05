def main():
    n1 = int(input("Introduce un número entero positivo: "))
    n2 = int(input("Introduce otro número entero positivo: "))

    while n1 < 0 or n2 < 0:
        print("Error: Los números deben ser positivos")
        n1 = int(input("Introduce un número entero positivo: "))
        n2 = int(input("Introduce otro número entero positivo: "))

    print(f"{n1} elevado a {n2} es {potencia(n1, n2)}")


def potencia(b, e):
    if e == 0:
        return 1

    total = 1
    for n in range(e):
        total *= b

    return total


main()
