#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int anio=0,A=0,B=0,C=0,D=0,E=0,N;

    cout<<"Digite el anio:";
    cin>>anio;

    A =anio%19;
    B =anio%4;
    C =anio%7;
    D =(19*A+24)%30;
    E =(2*B+4*C+6*D+5)%7;
    N =(22 + D +E);

    if(N <= 31){
        cout<<"Es marzo y el dia es:"<<N<<endl;
    }
    else{
        cout<<N -31<<" de abril";
    }
    return 0;
}