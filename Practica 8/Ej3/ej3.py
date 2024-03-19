class Alumno:
    def __init__(self, name, mark):
        self.name = name;
        self.mark = mark;

    def mostrarNombre(self):
        print(f"Nombre: {self.name}")

    def mostrarNota(self):
        print(f"Nota: {self.mark}")

    def calculaNotaLiteral(self):
        print("Calificación: ", end='')
        if (self.mark < 5):
            print("Suspenso")
            return
        
        if (self.mark < 7):
            print("Suficiente")
            return
        
        if (self.mark < 9):
            print("Notable")
            return
        
        print("Sobresaliente")

students = []
for i in range(int(input("Introduce el número de alumnos que crear: "))):
    print(f"\nAlumno {i+1}:")
    name = input("Introduce un nombre: ")
    mark = int(input("Introduce una nota: "))

    students.append(Alumno(name, mark))

for i in students:
    print(f"\n")
    i.mostrarNombre()
    i.mostrarNota()
    i.calculaNotaLiteral()