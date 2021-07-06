#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double nota,soma,cont;
    int x; 

    while(true){
        cont = 0;
        x=0;
        soma = 0;
        while(cont!=2){
            cin>>nota;
            if(nota<0 || nota>10)
                cout<<"nota invalida"<<endl;
            else{
                soma +=nota;
                cont++;
            }
        }
            cout<<fixed<<setprecision(2);
            cout<<"media = "<<soma/2<<endl;
            while(x!=1 && x!=2){
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                cin>>x; 
            }
            if(x==2){
                break;
            }
       
    }

    return 0;
}
