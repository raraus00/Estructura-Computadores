def main():
    num = int(input("Introduce un número entero positivo: "))

    while num < 0:
        print("Error: El número debe ser positivo")
        num = int(input("Introduce un número entero positivo: "))

    print(f"La suma de los {num} primeros enteros es {suma_n_primeros_nums(num)}")
    
def suma_n_primeros_nums(num):
    total = 0

    for n in range(num + 1):
        total += n

    return total

main()
