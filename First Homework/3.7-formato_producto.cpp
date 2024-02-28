#include<iostream>

using namespace std;

int main(){
    
    int n1,n2,aux=0;
    cout<<"Digite un numero: ";
    cin>>n1;
    cout<<"Digite un numero: ";
    cin>>n2;
    aux=n1*n2;
    cout<<"\n  "<<n1<<"\nx "<<n2<<"\n------\n"<<endl;
    cout<<"  "<<n1*(n2%10)<<endl;
    n2/=10;
    cout<<"x "<<n1*(n2%10)<<endl;
    cout<<"  "<<n1*(n2/10)<<endl;
    cout<<"\n------\n "<<aux<<endl;
    
    system("pause");
    return 0;
}