#include<iostream>

using namespace std;

int max(int,int,int);

int main(){

    int n1,n2,n3;

    cout<<"A continuacion se le solicitara 3 numeros.\n";
    cout<<"1.Digite un numero:";cin>>n1;
    cout<<"2.Digite un numero:";cin>>n2;
    cout<<"3.Digite un numero:";cin>>n3;

    cout<<"El numero maximo entre los 3 numeros es: "<<max(n1,n2,n3);

    return 0;
}
int max(int _n1,int _n2,int _n3){
    if(_n1 > _n2){
        if(_n1 > _n3){
            return _n1;
        }else{
            return _n3;
        }
    }else{
        if(_n2 > _n3){
            return _n2;
        }else{
            return _n3;
        }
    }
}