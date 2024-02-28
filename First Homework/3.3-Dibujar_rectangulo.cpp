#include<iostream>

using namespace std;

void imprimirh();
void imprimirv();

int main(){

    imprimirh();
    imprimirv();
    imprimirh();

    system("pause");
    return 0;
}
void imprimirh(){
    for (int i = 0; i < 11; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
void imprimirv(){

    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 20; i++){
            
            if (i==0 || i==19)
            {   
                    cout<<"*";
            }
            
            cout<<" ";
        }
        cout<<endl;
    }  
}