#include<iostream>

using namespace std;

int main(){

    float deci=0,hecta=0,deca=0,metros=0;

    cout<<"Digite la longitud del terreno Hectametro: ";cin>>hecta;
    cout<<"Digite la longitud del terreno Decametro: ";cin>>deca;
    cout<<"Digite la longitud del terreno metro: ";cin>>metros;

    deci=((hecta*100)+(deca*10)+metros)*1000;

    cout<<"La longitud del perimetro en decimetros es: "<<deci<<" dm."<<endl;

    system("pause");
    return 0;
}
