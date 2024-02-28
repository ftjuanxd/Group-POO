#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float altura=0,radio=0,area=0,volumen=0,pi=3.1415926535;
    
    cout<<"Digite la altura del Cilindro: ";cin>>altura;
    cout<<"Digite el radio del Cilindro: ";cin>>radio;

    area =2*pi*radio*altura;

    volumen = pi*pow(radio,2)*altura;

    cout<<"El Area lateral del cilindro es: "<<area<<endl;
    cout<<"El Volumen del cilindro es: "<<volumen<<endl;
    
    return 0;
}