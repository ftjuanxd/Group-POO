#include<iostream>

using namespace std;

void imprimirh();
void imprimirv(char[]);

int main(){

    char text[5];

    cout<<"Digite un texto: ";cin.getline(text,5,'\n');

    imprimirh();
    imprimirv(text);
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
void imprimirv(char text[]){
    
    for (int p = 0; p < 3; p++)
    {
        for (int i = 0; i <= 20; i++){
            
            if (i==0) {
                cout<<"*";
            }
            if (i==19 && p!=1)
            {
                cout<<"*";
            }
            
            if(i==7 && p==1){
                for (int i = 0; i < 6; i++)
                {
                    cout<<text[i];
                }
            }
            if (i==14 && p==1)
            {
                cout<<"*";
            }   
            cout<<" ";
        }
        cout<<endl;
    }  
}