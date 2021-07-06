#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double nota,soma=0,cont=0;
    while(true){
        cin>>nota;
        if(nota<0 || nota>10)
            cout<<"nota invalida"<<endl;
        else{
            soma +=nota;
            cont++;
        }
        if(cont==2)
            break;
    }
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<soma/2<<endl;

    return 0;
}
