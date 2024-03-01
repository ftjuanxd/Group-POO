#include<iostream>

using namespace std;

int main(){

    int number[3],aux=0;

    for (int i = 0; i < 3; i++)     
    {
        cout<<"Digite un numero: ";cin>>number[i];
        if(number[i]>aux)
            aux=number[i];
    }
    cout<<"\nEl numero mayor entre los tres numeros es: "<<aux<<endl;
    

    return 0;
}