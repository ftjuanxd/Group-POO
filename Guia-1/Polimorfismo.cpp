#include<iostream>
using namespace std;

class Animal{//Creamos la clase padre
  public:
    virtual  void HacerSonido(){//declaramos la funcion que se reutilizara 
      cout<<"El animal hace un sonido"<<endl;
    }
};
//clase derivada : perro
class Perro: public Animal{
  public:
    void HacerSonido(){
      cout<<"El perro ladra"<<endl;
    }
};
//clase derivada : Gato
class Gato: public Animal{
  public:
    void HacerSonido(){
      cout<<"El gato maulla"<<endl;
    }
};
//llamado del sonido dependiendo el nombre dado
void hacerSonidoAnimal(Animal* animal){
  animal->HacerSonido();
}

int main(){

  Animal* animal1 = new Perro();//creaccion del objeto animal instanciando la clase Perro
  
  hacerSonidoAnimal(animal1);//llamando la funcion con acceso a la clase perro --reproduce el perro ladra

  return 0;
}