#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    float A,B,C,D;

    cout<<"Digite la cantidad de litros del producto A: ";cin>>A;
    cout<<"Digite la cantidad de litros del producto B: ";cin>>B;
    cout<<"Digite la cantidad de litros del producto C: ";cin>>C;

    A /=5;
    B /=8;
    C /=7;

    D=min(A,min(B,C));

    cout<<"La cantidad de litros del compuesto  D que se puede hacer con la cantidad de productos dados es de: "<<D<<" litros."<<endl;

    system("pause");
    return 0;
}