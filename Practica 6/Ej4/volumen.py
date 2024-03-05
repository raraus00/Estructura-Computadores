def main():
    option = menu()

    if option == 1:
        print(f"El volumen del ortoedro es {volumen_ortoedro()}")
        return

    if option == 2:
        print(f"El volumen del cono es {volumen_cono()}")


def menu():
    option = 0

    while option < 1 or option > 3:
        print("\n----MENÚ----")
        print("1. Volumen ortoedro")
        print("2. Volumen cono")
        print("3. Salir")
        print("------------\n")

        option = int(input("Introduce una opción: "))

    return option


def volumen_ortoedro():
    a = int(input("Introduce el alto: "))
    b = int(input("Introduce el ancho: "))
    c = int(input("Introduce el largo: "))

    return a * b * c


def volumen_cono():
    r = int(input("Introduce el radio: "))
    h = int(input("Introduce el alto: "))

    return (3.1415 * r * r * h) / 3


main()
