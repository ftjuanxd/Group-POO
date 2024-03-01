#include<iostream>

using namespace std;

int main(){

    float a,b,c;

    cout<<"Digite los valores de a: ";cin>>a;
    cout<<"Digite los valores de b: ";cin>>b;
    cout<<"Digite los valores de c: ";cin>>c;

    if(a + b > c){
        if(a + c > b){
            if(b + c > a){
                cout<<"Puede ser triangulo."<<endl;
            }else{
                cout<<"No puede ser triangulo."<<endl;
            }
        }else{
        cout<<"No puede ser triangulo."<<endl;
        } 
    }else{
        cout<<"No puede ser triangulo."<<endl;
    }


    system("pause");
    return 0;
}