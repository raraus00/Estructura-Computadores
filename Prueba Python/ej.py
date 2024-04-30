def mostrarNumeros(a, b, c):
    i = a
    while i <= b:
        print(i, end=" ")
        i += c

a = int(input("Introduce un número entero para a: "))
b = int(input("Introduce un número entero para b: "))
c = int(input("Introduce un número entero para c: "))

while a > b:
    print("\nError: a debe ser menor o igual que b")
    a = int(input("Introduce un número entero para a: "))
    b = int(input("Introduce un número entero para b: "))

while c <= 1:
    print("\nError: c debe ser un número positivo mayor que 1")
    c = int(input("Introduce un número entero para c: "))

print(f"\nEl intervalo de números desde {a} hasta {b}, avanzando de {c} en {c} es:")
mostrarNumeros(a, b, c)
