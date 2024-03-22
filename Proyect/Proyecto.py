class  Vehiculo:
	def __init__(self,placa):
		self.placa = placa

class Puesto:
	def __init__(self,numero):
		self.numero = numero
		self.carro = None

class Parqueadero:
	def __init__(self, capacidad,tarifa):
		self.capacidad = capacidad
		self.tarifa = tarifa
		self.puestos = [Puestos(numero) for numero in range(1, capacidad+1)]
		self.ingresos_totales = 0

	def ingresar_vehiculo(self, carro):
		for puesto in self.puestos:
			if puesto.carro is None:
				puesto.carro = carro
				return True
		return False

	def dar_salida_vehiculo(self,placa):
		for puesto in self.puestos: 
			if puesto.carro and puesto.carro.placa == placa:
				puesto.carro =None
				return True

	def calcular_ingresos(self, horas):
		return self.tarifa * horas

	def calcular_ingresos_totales(self):
		ingresos = 0
		for puesto in self.puestos:
			if puesto.carro:
				ingresos += self.calcular_ingreso(puesto.carro.tiempo_parqueadero)
		self.ingresos_totales = ingresos
		return ingresos

	def consultar_puestos_disponibles(self):
		disponibles = 0
		for puesto in self.puesto:
			if puesto.carro is None:
				disponibles =sum(1) 
		return disponibles

	def consultar_porcentaje_disponibilidad(self):
		disponibles = self.consultar_puestos_disponibles()
		return (disponibles/self.capacidad)*100

	def avanzar_reloj(self, hora):
		for puesto in self.puestos:
			if puesto.carro:
				puesto.carro.tiempo_parqueadero += horas

	def cambiar_tarifa(self,nueva_tarifa):
		self.tarifa = nueva_tarifa
