#include <iostream>

using namespace std;

class Vehiculo{//Declaracion de Clase Padre

  private://Atributos de Vehiculo
    string marca;
    string modelo;
    string seguro;
    string placa;
    string color;
    string estado;
    double combustible;
    double VelMax;
    double kilometraje;
  public:
    Vehiculo(string, string, string, string, string, string, double, double, double);//Construcutor
    ~Vehiculo();//Destructor
    virtual void mostrarDatos();//Declaramos el Polimorfismo
};

class Auto: public Vehiculo{//Declaracion de Clase Hija

  private://atributos de Auto
    int pasajeros;
    string transmision;
  public:
    Auto(string, string, string, string, string, string, double, double, double, int, string);//Constructor
    ~Auto();//Desctructor
    void mostrarDatos();
};
//La Clase moto es tiene similitud con la clase Auto por tanto reutilizamos el codigo y solo modificamoslos parametros que lo distinguen
class Moto: public Vehiculo{//Clase Hija

  private://Atributos de Moto
    int calibre;
  public:
    Moto(string, string, string, string, string, string, double, double, double, int);//Constructor
    ~Moto();//Destructor
    void mostrarDatos();
};
Vehiculo::Vehiculo(string _marca,string _modelo,string _seguro,string _placa,string _color,string _estado,double _combustible,double _VelMax,double _kilometraje){//Guardado de datos en el constructor 
  marca =_marca;
  modelo = _modelo;
  seguro = _seguro;
  placa = _placa;
  color = _color;
  estado = _estado;
  combustible = _combustible;
  VelMax = _VelMax;  
  kilometraje = _kilometraje;
}
Vehiculo::~Vehiculo(){
  
}
void Vehiculo::mostrarDatos(){//Definimos la funcion de mostrar datos que sera utilizada por las demas clases
  cout<<"Marca: "<<marca<<endl;
  cout<<"Modelo: "<<modelo<<endl;
  cout<<"Seguro: "<<seguro<<endl;
  cout<<"Placa: "<<placa<<endl;
  cout<<"Color: "<<color<<endl;
  cout<<"Estado: "<<estado<<endl;
  cout<<"Combustible: "<<combustible<<endl;
  cout<<"Velocidad Maxima: "<<VelMax<<endl;
  cout<<"Kilometraje: "<<kilometraje<<endl;
}
Auto:: Auto(string _marca, string _modelo, string _seguro, string _placa, string _color, string _estado, double _combustible, double _VelMax, double _kilometraje, int _pasajeros, string _transmision) : Vehiculo(_marca, _modelo, _seguro, _placa, _color, _estado, _combustible, _VelMax, _kilometraje){//Guardado de datos en el constructor 
  pasajeros = _pasajeros;
  transmision = _transmision;
}
Auto::~Auto(){
  
}
void Auto::mostrarDatos(){//Llammamos la funcion de la clase padre y le agregamos Atributos de distincion
  cout<<"Los Datos del Auto son: "<<endl;
  Vehiculo::mostrarDatos();
  cout<<"Pasajeros: "<<pasajeros<<endl;
  cout<<"Transmision: "<<transmision<<endl;
}
Moto:: Moto(string _marca, string _modelo, string _seguro, string _placa, string _color, string _estado, double _combustible, double _VelMax, double _kilometraje, int _calibre) : Vehiculo(_marca, _modelo, _seguro, _placa, _color, _estado, _combustible, _VelMax, _kilometraje){
  calibre = _calibre;
}//Guardado de Datos en el constructor
Moto::~Moto(){

}
void Moto::mostrarDatos(){//Llammamos la funcion de la clase padre y le agregamos Atributos de distincion
  cout<<"Los Datos de la moto son: "<<endl;
  Vehiculo::mostrarDatos();
  cout<<"Calibre: "<<calibre<<endl;
}
int main() {
  Auto c1("Chevrolet","2016","Soat-Full","LMU-111","Rojo","Disponible",100,200,10000,4,"Manual");//Creamoa los objetos con los valores definimos para cada clase
  Moto m1("Susuki","2015","Soat-Cs","Zon-160","Azul con Neegro","Ocupada",50,220,16000,180);//Creamoa los objetos con los valores definimos para cada clase
  c1.mostrarDatos();//Llamamos la funcion de mostrar datos
  m1.mostrarDatos();//Llamamos la funcion de mostrar datos
    return 0;
}