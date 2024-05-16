import datetime
import packages.Proyecto as Ps

def menu():
    nombre_archivo = "parqueadero.csv"
    parqueadero = Ps.Parqueadero(40, 5000)  # Tarifa ejemplo de $5000 por hora
    
    # Intentar cargar datos desde el archivo CSV al iniciar
    try:
        Ps.cargar_datos_desde_csv(parqueadero, nombre_archivo)
        print("Datos cargados desde el archivo CSV.")
    except FileNotFoundError:
        print("No se encontró el archivo CSV, iniciando con un parqueadero vacío.")

    while True:
        Ps.limpiar_pantalla()
        print("\n1. Ingresar carro")
        print("2. Dar salida a un carro")
        print("3. Ingresos totales")
        print("4. Puestos disponibles")
        print("5. Porcentaje de disponibilidad")
        print("6. Cambiar tarifa del parqueadero")
        print("7. Ver Vehiculos")
        print("8. Avanzar el reloj del parqueadero")
        print("0. Salir")
        opcion = input("Seleccione una opción: ")

        if opcion == "1":
            placa = input("Ingrese la placa del carro: ")
            hora_entrada = input("Ingrese la hora de entrada (HH:MM): ")
            try:
                hora_entrada_dt = datetime.datetime.strptime(hora_entrada, '%H:%M')
                carro = Ps.Vehiculo(placa)
                resultado = parqueadero.ingresar_vehiculo(carro, hora_entrada_dt)
                print(resultado)
            except ValueError:
                print("Formato de hora incorrecto. Use HH:MM.")
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "2":
            placa = input("Ingrese la placa del carro a retirar: ")
            resultado = parqueadero.dar_salida_vehiculo(placa)
            print(resultado)
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "3":
            print(f"Ingresos totales: ${parqueadero.calcular_ingresos_totales()}")
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "4":
            print(f"Puestos disponibles: {parqueadero.consultar_puestos_disponibles()}")
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "5":
            print(f"Porcentaje de disponibilidad: {parqueadero.consultar_porcentaje_disponibilidad()}%")
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "6":
            nueva_tarifa = float(input("Ingrese la nueva tarifa por hora: "))
            parqueadero.cambiar_tarifa(nueva_tarifa)
            print(f"Tarifa actualizada a ${nueva_tarifa}")
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "7":
            parqueadero.imprimir_estado_parqueadero()
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "8":
            horas = int(input("Ingrese el número de horas a avanzar: "))
            parqueadero.avanzar_reloj(horas)
            print(f"Reloj avanzado {horas} horas.")
            input("Presione Enter para continuar...")  # Pausa para ver el resultado
        elif opcion == "0":
            # Guardar datos en el archivo CSV antes de salir
            Ps.guardar_datos_en_csv(parqueadero, nombre_archivo)
            break

if __name__ == "__main__":
    menu()