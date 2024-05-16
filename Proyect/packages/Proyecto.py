import csv
import os
from datetime import datetime, timedelta, time

class Vehiculo:
    def __init__(self, placa):
        self.placa = placa
        self.hora_entrada = None

class Puesto:
    def __init__(self, numero):
        self.numero = numero
        self.carro = None

class Parqueadero:
    def __init__(self, capacidad, tarifa):
        self.capacidad = capacidad
        self.tarifa = tarifa
        self.puestos = [Puesto(numero) for numero in range(1, capacidad + 1)]
        self.ingresos_totales = 0
        self.placas_ingresadas = set()  # Conjunto para placas únicas

    def ingresar_vehiculo(self, carro, hora_entrada):
        # Validar que la placa tenga exactamente 6 caracteres
        if len(carro.placa) != 7:
            return "Error: La placa debe tener exactamente 7 caracteres."

        # Validar que la placa sea única
        if carro.placa in self.placas_ingresadas:
            return "Error: Ya hay un vehículo con esa placa."

        # Validar que la hora de entrada esté dentro del horario permitido
        if not (time(6, 0) <= hora_entrada.time() <= time(21, 0)):
            return "Error: Hora de entrada fuera del horario permitido."

        for puesto in self.puestos:
            if puesto.carro is None:
                puesto.carro = carro
                carro.hora_entrada = hora_entrada
                self.placas_ingresadas.add(carro.placa)
                return "Carro ingresado correctamente."
        return "Error: No hay puestos disponibles."
    
    def dar_salida_vehiculo(self, placa):
        for puesto in self.puestos:
            if puesto.carro and puesto.carro.placa == placa:
                self.placas_ingresadas.remove(placa)
                puesto.carro = None
                return "Carro retirado correctamente."
        return "Error: Carro no encontrado."
    
    def imprimir_estado_parqueadero(self):
        print("Estado del parqueadero:")
        for puesto in self.puestos:
            estado = "Disponible" if puesto.carro is None else f"Ocupado: {puesto.carro.placa}"
            print(f"Puesto {puesto.numero}: {estado}")

    def calcular_ingresos(self, horas):
        return self.tarifa * horas

    def calcular_ingresos_totales(self):
        ingresos = 0
        for puesto in self.puestos:
            if puesto.carro:
                tiempo_estacionado = datetime.now() - puesto.carro.hora_entrada
                horas_estacionadas = tiempo_estacionado.total_seconds() // 3600
                ingresos += self.calcular_ingresos(horas_estacionadas)
        self.ingresos_totales = ingresos
        return ingresos
    
    def consultar_puestos_disponibles(self):
        disponibles = 0
        for puesto in self.puestos:
            if puesto.carro is None:
                disponibles += 1
        return disponibles
    
    def consultar_porcentaje_disponibilidad(self):
        disponibles = self.consultar_puestos_disponibles()
        return (disponibles / self.capacidad) * 100

    def avanzar_reloj(self, horas):
        for puesto in self.puestos:
            if puesto.carro:
                puesto.carro.hora_entrada -= timedelta(hours=horas)

    def cambiar_tarifa(self, nueva_tarifa):
        self.tarifa = nueva_tarifa

# Función para guardar los datos en un archivo CSV
def guardar_datos_en_csv(parqueadero, nombre_archivo):
    with open(nombre_archivo, mode='w', newline='') as archivo_csv:
        escritor_csv = csv.writer(archivo_csv)
        escritor_csv.writerow(['Puesto', 'Placa', 'HoraEntrada'])
        for puesto in parqueadero.puestos:
            placa = puesto.carro.placa if puesto.carro else 'None'
            hora_entrada = puesto.carro.hora_entrada.strftime('%Y-%m-%d %H:%M:%S') if puesto.carro else 'None'
            escritor_csv.writerow([puesto.numero, placa, hora_entrada])

# Función para cargar los datos desde un archivo CSV
def cargar_datos_desde_csv(parqueadero, nombre_archivo):
    with open(nombre_archivo, mode='r') as archivo_csv:
        lector_csv = csv.reader(archivo_csv)
        next(lector_csv)  # Saltar la fila de encabezado
        for fila in lector_csv:
            if len(fila) < 3:
                continue  # Saltar filas que no tienen suficientes elementos
            numero_puesto = int(fila[0])
            placa = fila[1]
            hora_entrada = fila[2]
            if placa != 'None':
                carro = Vehiculo(placa)
                carro.hora_entrada = datetime.strptime(hora_entrada, '%Y-%m-%d %H:%M:%S')
                parqueadero.puestos[numero_puesto - 1].carro = carro
                parqueadero.placas_ingresadas.add(placa)

def limpiar_pantalla():
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')