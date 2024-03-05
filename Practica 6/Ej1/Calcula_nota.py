def calcula_nota(nota):
    if nota < 5:
        print("Suspenso")
        return

    if nota < 7:
        print("Aprobado")
        return

    if nota < 9:
        print("Notable")
        return

    print("Sobresaliente")


calcula_nota(int(input("Introduce un número entre 0 y 10: ")))
