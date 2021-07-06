#include <iostream>
using namespace std;

int main (){
    int in,fim,mini,minf, hora, minuto;
    cin>>in>>mini>>fim>>minf;

    hora = fim - in;
    minuto = minf - mini;

    if(minuto < 0){
        minuto += 60;
        hora -= 1;
    }

    if(hora <= 0 && ((hora == 0 && minuto == 0) || (hora != 0)))
        hora += 24;

    cout<<"O JOGO DUROU "<<hora<< " HORA(S) E "<<minuto<<" MINUTO(S)"<<endl;

    return 0;
}
