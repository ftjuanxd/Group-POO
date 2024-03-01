#include<iostream>

using namespace std;

int main(){

    float area=0,n_gallina=0;

    cout<<"Digite el Area del Corral: ";
    cin>>area;
    cout<<"Digite el numero de gallinas: ";
    cin>>n_gallina;

    cout<<"El Area que le corresponde a cada gallina es: "<<area/n_gallina<<endl;

    system("pause");
    return 0;
}