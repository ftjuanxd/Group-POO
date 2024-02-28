#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n1,n2;

    cout<<"Digite un numero de tres digitos: "; cin>>n1;
    cout<<"Digite un numero de tres digitos: "; cin>>n2;

    cout<<"El producto de estos numeros: ";
    cout<<"\n  "<<n1<<"\nx "<<n2<<"\n------\n"<<n1*n2<<endl;
    cout<<"La division de estos numeros: "<<endl;
    cout<<"\n  "<<n1<<"\n  "<<n2<<"\n------\nR = "<<n1/n2<<endl;
    cout<<"El cociente de la division es: "<<" Q = "<<n1%n2<<endl;

    system("pause");
    return 0;
}