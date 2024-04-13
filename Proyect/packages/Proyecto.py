#Creacion Clase Vehiculo
class  Vehiculo:
    
    #Implementacion Constructor 
	def __init__(self,placa):
		self.placa = placa

#Creacion Clase Puesto
class Puesto:
    
    #Implementacion Constructor 
	def __init__(self,numero):
		self.numero = numero
		self.carro = None

#Creacion Clase Parqueadero
class Parqueadero:
    
    #Implementacion Constructor 
	def __init__(self, capacidad,tarifa):
		self.capacidad = capacidad
		self.tarifa = tarifa
		self.puestos = [Puesto(numero) for numero in range(1, capacidad+1)]
		self.ingresos_totales = 0

	#Definir Funcion Ingresar_Vehiculo
	def ingresar_vehiculo(self, carro):
		for puesto in self.puestos:
			if puesto.carro is None:
				puesto.carro = carro
				return True
		return False

	#Definir Funcion Salida_Vehiculo
	def dar_salida_vehiculo(self,placa):
		for puesto in self.puestos: 
			if puesto.carro and puesto.carro.placa == placa:
				puesto.carro =None
				return True

	#Definir Funcion Calcular_Ingresos
	def calcular_ingresos(self, hora):
		return self.tarifa * hora

	#Definir Funcion Calcular_Ingresos_Totales
	def calcular_ingresos_totales(self):
		ingresos = 0
		for puesto in self.puestos:
			if puesto.carro:
				ingresos += self.calcular_ingreso(puesto.carro.tiempo_parqueadero)
		self.ingresos_totales = ingresos
		return ingresos
	
 	#Definir Funcion Consultar_Puestos_Disponibles
	def consultar_puestos_disponibles(self):
		disponibles = 0
		for puesto in self.puesto:
			if puesto.carro is None:
				disponibles =sum(1) 
		return disponibles
	
 	#Definir Funcion Consultar_Porcentaje_Disponibilidad
	def consultar_porcentaje_disponibilidad(self):
		disponibles = self.consultar_puestos_disponibles()
		return (disponibles/self.capacidad)*100

	#Definir Funcion Avanzar Reloj
	def avanzar_reloj(self, hora):
		for puesto in self.puestos:
			if puesto.carro:
				puesto.carro.tiempo_parqueadero += hora

	#Definir Funcion Avanzar Reloj
	def cambiar_tarifa(self,nueva_tarifa):
		self.tarifa = nueva_tarifa
