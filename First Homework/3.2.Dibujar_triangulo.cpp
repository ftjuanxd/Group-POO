#include<iostream>

using namespace std;

void imprimir();

int main(){

    imprimir();

    system("pause");
    return 0;
}
void imprimir(){

    for(int i=0;i<=5;i++){
        if(i==0){
            for (int i = 0; i < 14; i++)
            {
                if(i==8)
                    cout<<"*";
                cout<<" ";
            }
            cout<<endl;
        }else if(i==2){
            for (int i = 0; i < 14; i++)
            {
                if(i==5 || i==10)
                    cout<<"*";
                cout<<" ";
            }
            cout<<endl;
        }else if(i==3){
            for (int i = 0; i < 14; i++)
            {
                if(i==3 || i==12)
                    cout<<"*";
                cout<<" ";
            }
            cout<<endl;
        }else if(i==4){
            for (int i = 0; i <= 14; i++)
            {
                if(i==1 || i==14)
                    cout<<"*";
                cout<<" ";
            }
            cout<<endl;
        }else if(i==5){
            for (int i = 0; i <9; i++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}