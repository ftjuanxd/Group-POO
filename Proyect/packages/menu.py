import os
from datetime import datetime, timedelta, time
import packages.Proyecto as Ps

def main():
    nombre_archivo = "parqueadero.csv"
    parqueadero = Ps.Parqueadero.get_instance(capacidad=40, tarifa=10)
    
    while True:
        Ps.limpiar_pantalla()
        print("\n")
        Ps.mostrar_menu()
        opcion = input("Seleccione una opción: ")
        
        if opcion == '1':
            placa = input("Ingrese la placa del carro: ")
            hora_entrada = input("Ingrese la hora de entrada (HH:MM): ")
            try:
                hora_entrada_dt = datetime.strptime(hora_entrada, '%H:%M').replace(year=datetime.now().year, month=datetime.now().month, day=datetime.now().day)
                carro = Ps.Vehiculo(placa)
                resultado = parqueadero.ingresar_vehiculo(carro, hora_entrada_dt)
            except ValueError:
                resultado = "Error: Formato de hora incorrecto. Use HH:MM."
            print(resultado)
        
        elif opcion == '2':
            placa = input("Ingrese la placa del carro: ")
            resultado = parqueadero.dar_salida_vehiculo(placa)
            print(resultado)
        
        elif opcion == '3':
            ingresos_totales = parqueadero.calcular_ingresos_totales()
            print(f"Ingresos totales: {ingresos_totales}")
        
        elif opcion == '4':
            puestos_disponibles = parqueadero.consultar_puestos_disponibles()
            print(f"Puestos disponibles: {puestos_disponibles}")
        
        elif opcion == '5':
            porcentaje_disponibilidad = parqueadero.consultar_porcentaje_disponibilidad()
            print(f"Porcentaje de disponibilidad: {porcentaje_disponibilidad:.2f}%")
        
        elif opcion == '6':
            try:
                horas = int(input("Ingrese la cantidad de horas a avanzar: "))
                parqueadero.avanzar_reloj(horas)
                print(f"El reloj se ha avanzado {horas} horas.")
            except ValueError:
                print("Error: Por favor, ingrese un número válido de horas.")
        
        elif opcion == '7':
            try:
                nueva_tarifa = float(input("Ingrese la nueva tarifa: "))
                parqueadero.cambiar_tarifa(nueva_tarifa)
                print(f"La nueva tarifa es: {nueva_tarifa}")
            except ValueError:
                print("Error: Por favor, ingrese un valor numérico válido para la tarifa.")
        
        elif opcion == '8':
            nombre_archivo = input("Ingrese el nombre del archivo para guardar el estado: ")
            Ps.guardar_datos_en_csv(parqueadero, nombre_archivo)
            print(f"Estado del parqueadero guardado en {nombre_archivo}.")
        
        elif opcion == '9':
            nombre_archivo = input("Ingrese el nombre del archivo para cargar el estado: ")
            Ps.cargar_datos_desde_csv(parqueadero, nombre_archivo)
            print(f"Estado del parqueadero cargado desde {nombre_archivo}.")
        
        elif opcion == '10':
            parqueadero.imprimir_estado_parqueadero()
        
        elif opcion == '0':
            print("Saliendo del programa...")
            break
        
        else:
            print("Opción no válida.")
        
        input("Presione Enter para continuar...")

if __name__ == "__main__":
    main()