#include<iostream>
#include<cctype>

using namespace std;

int main(){

    char ident;

    cout<<"Introduzca un caracter: ";cin>>ident;

    if(isalpha(ident)){//esta funcion nos indica si el caracter digitado es una letra
        cout<<"El caracter es alfabetico."<<endl;
    }else if(isdigit(ident)){//nos indica si es un digito
            cout<<"El caracter es un digito."<<endl;
    }else if(ispunct(ident)){//no indica si es un caracter de puntuacion
            cout<<"El caracter es de puntuacion."<<endl;
    }else if(iscntrl(ident)){
        cout<<"El caracter es no imprimible."<<endl;
    }else{
        cout<<"El caracter es especial."<<endl;
    }
    

    system("pause");
    return 0;
}