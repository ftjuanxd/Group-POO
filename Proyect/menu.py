import datetime
from packages import Proyecto as Parqueadero
def menu():
    parqueadero = Parqueadero(5000)  # Tarifa ejemplo de $5000 por hora
    while True:
        print("\n1. Ingresar carro")
        print("2. Dar salida a un carro")
        print("3. Ingresos totales")
        print("4. Puestos disponibles")
        print("5. Porcentaje de disponibilidad")
        print("6. Cambiar tarifa del parqueadero")
        print("0. Salir")
        opcion = input("Seleccione una opción: ")

        if opcion == "1":
            placa = input("Ingrese la placa del carro: ")
            hora_entrada = datetime.datetime.now()  # Capturamos la hora actual como hora de entrada
            print(parqueadero.ingresar_carro(placa, hora_entrada))
        elif opcion == "2":
            placa = input("Ingrese la placa del carro a retirar: ")
            print(parqueadero.salida_carro(placa))
        elif opcion == "3":
            print(parqueadero.calcular_ingresos())
        elif opcion == "4":
            print(parqueadero.puestos_disponibles())
        elif opcion == "5":
            print(parqueadero.porcentaje_disponibilidad())
        elif opcion == "6":
            nueva_tarifa = float(input("Ingrese la nueva tarifa por hora: "))
            parqueadero.tarifa_por_hora = nueva_tarifa
            print(f"Tarifa actualizada a ${nueva_tarifa}")
        elif opcion == "0":
            break

if __name__ == "__main__":
    menu()