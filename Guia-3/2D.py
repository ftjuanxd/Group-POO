import math

class Punto2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return f"Punto2D(x={self.x}, y={self.y})"

class Triangulo2D:
    def __init__(self, p1, p2, p3):
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3

    def area(self):
        return 0.5 * abs((self.p1.x - self.p3.x) * (self.p2.y - self.p1.y) - (self.p1.x - self.p2.x) * (self.p3.y - self.p1.y))

    def perimetro(self):
        return self.distancia(self.p1, self.p2) + self.distancia(self.p2, self.p3) + self.distancia(self.p3, self.p1)

    def distancia(self, p1, p2):
        return math.sqrt((p1.x - p2.x)**2 + (p1.y - p2.y)**2)

    def __str__(self):
        return f"Triangulo2D(p1={self.p1}, p2={self.p2}, p3={self.p3})"

# Solicitar al usuario los puntos para el triángulo
x1 = float(input("Ingrese la coordenada x del primer punto: "))
y1 = float(input("Ingrese la coordenada y del primer punto: "))
x2 = float(input("Ingrese la coordenada x del segundo punto: "))
y2 = float(input("Ingrese la coordenada y del segundo punto: "))
x3 = float(input("Ingrese la coordenada x del tercer punto: "))
y3 = float(input("Ingrese la coordenada y del tercer punto: "))

# Crear los puntos
p1 = Punto2D(x1, y1)
p2 = Punto2D(x2, y2)
p3 = Punto2D(x3, y3)

# Crear el triángulo
triangulo = Triangulo2D(p1, p2, p3)

# Imprimir el triángulo, su área y su perímetro
print(triangulo)
print(f"Área: {triangulo.area()}")
print(f"Perímetro: {triangulo.perimetro()}")
