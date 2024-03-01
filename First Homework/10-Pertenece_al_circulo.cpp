#include<iostream>
#include<math.h>

using namespace std;

int main(){

    double centro_h,centro_k,radio,x,y,total=0,ret=0;

    cout<<"Digite el radio de la circunferencia: ",cin>>radio;
    cout<<"Digite el centro x de la circunferencia: ";cin>>centro_h;
    cout<<"Digite el centro y de la circunferencia: ";cin>>centro_k;
    cout<<"Digite el punto x: ",cin>>x;
    cout<<"Digite el punto y: ",cin>>y;

    ret=pow((x-centro_h),2);

    total= ret+pow((x-centro_k),2);

    if(total==pow(radio,2)){
        cout<<"El punto esta dentro de la circunferencia."<<endl;
    }else{
        cout<<"El punto no esta dentro de la circunferencia."<<endl;
    }
    
    system("pause");
    return 0;
}