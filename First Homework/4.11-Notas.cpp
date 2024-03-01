#include<iostream>

using namespace std;

int main(){

    float note;

    cout<<"Digite la Nota Final: ";cin>>note;

    if(note >= 0 && note < 5)
        cout<<"Suspenso"<<endl;
    if(note >=5 && note <=6.5)
        cout<<"Aprobado"<<endl;
    if(note >6.5 && note <=8.5)
        cout<<"Notable"<<endl;
    if(note > 8.5 && note <10)
        cout<<"Sobresaliente"<<endl;
    if(note == 10)
        cout<<"Matricula de honor"<<endl;

    system("pause");
    return 0;
}