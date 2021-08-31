#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
    int num_secret, num_guess, rod, i;
    bool repetir;

    srand (time(NULL));
    num_secret = rand() % 100;
    
    cout<<"Em qual número o computador está pensando...? \n";
    cin>>num_guess;

        do{
            if (num_guess<0){
                cout<<"Você perdeu :c \n";
                repetir==false;
            }

            else if (num_guess > num_secret){
                cout<<"Valor alto demais >.< !! Tente novamente: \n";
                i++;
                cin>>num_guess;
            }

            else if(num_guess < num_secret){
                cout<<"Valor pequeno demais >.< !! Tente novamente: \n";
                i++;
                cin>>num_guess;
            }

            else{
                i++;
                cout<<"Parabéns, você descobriu o número em "<< i << "rodadas!! \n";
                repetir = false;
            }
        }
       
        while (repetir == true);

    return 0;
}
