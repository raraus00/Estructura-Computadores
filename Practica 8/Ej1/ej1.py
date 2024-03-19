dni = int(input("Introduce tu DNI (sin letra): "))
letters = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E']

print(f"La letra de tu DNI es: {letters[dni%23]}")