#include <iostream>
using namespace std;

int main (){
    int valor, quantidade;

    cout<<"Digite uma quantia em reais: \n";
    cin>>valor;
    
        for (int nota=100; valor>=50; nota/2){
            quantidade = valor / nota;
            valor = valor % nota;
            cout<<quantidade<<" nota(s) de "<<nota;
        }
        for (int nota=20; valor>=5; nota/2){
            quantidade = valor / nota;
            valor = valor % nota;
            cout<<quantidade<<" nota(s) de "<<nota;
        }
        for (int nota=2; valor>=nota; nota/2){
            quantidade = valor / nota;
            valor = valor % nota;
            cout<<quantidade<<" nota(s) de "<<nota;
        }
    
  return 0;
}
