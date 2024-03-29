#include<iostream>

using namespace std;

//Declaracion de Clase
class Mascota{
//Abstracción-Declaracion de variables
    private:
    string name;
    int age;
    string raza;
//Declaración de Constructor, Destructor y funciones o metodos
    public:
    //Constructor
    Mascota(string,int,string);
    //Destructor
    ~Mascota();
    //Metodos
    void Saludar();
};
//Creacion de Constructor que recibira los datos y los guarda en la clase
Mascota::Mascota(string _name,int _age, string _raza){
    name = _name;
    age = _age;
    raza = _raza;
}
//Creacion de Desstructor que Tomara los datos guardados y los eliminara de la clase
Mascota::~Mascota(){

}
//Metodo que puede tener una clase tambien se pueden entender como una accion 
void Mascota::Saludar(){
    cout<<"Hola "<<name;
}
Mascota w1("Tobias",12,"Pudul");
int main(){

    w1.Saludar();

    return 0;
}